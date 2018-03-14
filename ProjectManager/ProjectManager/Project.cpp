#pragma unmanaged
#include "stdafx.h"
#include "Project.h"
#include <iostream>
#include <fstream>

using namespace std;

vector<Project *> Project::projects;
vector<Worker *> Worker::workers;
vector<Customer *> Customer::customers;
Manager * Manager::current;

void Project::RegisterMe()
{
	projects.push_back(this);
	registered = true;
}

void Project::DeleteMe()
{
	for (int i = 0;i < projects.size();i++)
	{
		if (this->id == projects[i]->GetID())
		{
			projects.erase(projects.begin() + i);
			break;
		}
	}
	registered = false;
}

string Project::GetName()
{
	return name;
}

Customer * Project::GetCustomer()
{
	return customer;
}

Manager * Project::GetManager()
{
	return manager;
}

float Project::GetPrice()
{
	return price;
}

int Project::GetID()
{
	return id;
}

void Project::SetName(string name)
{
	this->name=name;
}

void Project::SetCustomer(Customer * customer)
{
	this->customer = customer;
}

void Project::SetManager(Manager * manager)
{
	this->manager = manager;
}

void Project::SetID(int id)
{
	this->id = id;
}

void Project::SetPrice(float price)
{
	this->price = price;
}

void Project::Save(ofstream & f)
{
	f << this->GetName() << '\n';
	if (GetCustomer())
	f << this->GetCustomer()->GetPhoneNumber() << '\n';
	else f << "0" << '\n';
	f << this->GetPrice() << '\n';
	f << this->GetID() << '\n';
}

void Project::SaveAll(string filename)
{
	ofstream f(filename);
	f << projects.size() << '\n';
	for (int i = 0;i < projects.size();i++)
	{
		projects[i]->Save(f);
	}
	f.close();
}

Project * Project::Load(ifstream & f)
{
	char name[60], custphonenumber[20];
	float price;
	int id;
	f.getline(name, 60);
	f.getline(custphonenumber, 20);
	f >> price >> id;
	f.ignore();
	return new Project(name, Customer::FindCustomer(custphonenumber), Manager::current, id, price,true);
}

void Project::LoadAll(string filename)
{
	projects.clear();
	try {
		ifstream f(filename);
		if (!f) throw 2;
		int size;
		f >> size;
		f.ignore();
		for (int i = 0;i < size;i++)
		{
			try
			{
				Project::Load(f);
				if (!Project::projects[i]) throw 1;
			}
			catch (int code)
			{
				if (code == 1) Project::projects[i] = new Project("unnamed", NULL, Manager::current, -1, 0, true);
			}
		}
		f.close();
	}
	catch (int code)
	{

	}
}

Project * Project::FindProject(int id)
{
	for (int i = 0;i < projects.size();i++)
	{
		if (projects[i]->id == id)
		{
			return projects[i];
		}
	}
	return NULL;
}

vector<int> Project::FindProjects(Customer * customer)
{
	vector <int> result;
	for (int i = 0;i < projects.size();i++)
	{
		if (projects[i]->GetCustomer() == customer)
		{
			result.push_back(i);
		}
	}
	return result;
}

int Project::FindProjectID(Project * project)
{
	return FindID(Project::projects, project);
}

Project::Project()
{
	SetName("");
	SetCustomer(NULL);
	SetManager(NULL);
	SetID(-1);
	SetPrice(0);
}

Project::Project(string name, Customer * customer, Manager * manager, int id, float price, bool registerme)
{
	SetName(name);
	SetCustomer(customer);
	SetManager(manager);
	SetID(id);
	SetPrice(price);
	if (registerme) RegisterMe();
}

Project::~Project()
{
	if (registered) DeleteMe();
}


string Person::GetPhoneNumber()
{
	return phonenumber;
}

void Person::SetPhoneNumber(string phonenumber)
{
	this->phonenumber=phonenumber;
}

Person::Person()
{
	SetPhoneNumber("");
}

Person::Person(string phonenumber)
{
	SetPhoneNumber(phonenumber);
}


void Customer::RegisterMe()
{
	customers.push_back(this);
	registered = true;
}

void Customer::DeleteMe()
{
	for (int i = 0;i < customers.size();i++)
	{
		if (this->GetPhoneNumber() == customers[i]->GetPhoneNumber())
		{
			customers.erase(customers.begin() + i);
		}
	}
	registered = false;
}

string Customer::GetFullName()
{
	return fullname;
}

string Customer::GetCompany()
{
	return company;
}


void Customer::SetFullName(string fullname)
{
	this->fullname=fullname;
}

void Customer::SetCompany(string company)
{
	this->company=company;
}

void Customer::Save(ofstream & f)
{
	f << this->GetPhoneNumber() << '\n';
	f << this->GetFullName() << '\n';
	f << this->GetCompany() << '\n';
}

void Customer::SaveAll(string filename)
{
	ofstream f(filename);
	f << customers.size() << '\n';
	for (int i = 0;i < customers.size();i++)
	{
		customers[i]->Save(f);
	}
	f.close();
}

Customer * Customer::Load(ifstream & f)
{
	char phonenumber[20], fullname[20], company[20];
	f.getline(phonenumber, 20);
	f.getline(fullname, 20);
	f.getline(company, 20);
	return new Customer(phonenumber,fullname,company,true);
}
//Реалізація пункту 8.	Визначити в функцію Service, яка в якості параметра отримує об’єкт класу, і яка оперує визначеними раніше методами Read, Write. Вказані методи записують у файл та читають з файлу поля даних. Передбачити усі можливі виключні ситуації роботи з файлами (з демонстрацією роботи через try-catch, та throw - не менше п’яти - не менше п’яти). 
void Customer::Service(Customer * customer,string filename)
{
	customer->RegisterMe();
	Customer::SaveAll(filename);
}

void Customer::LoadAll(string filename)
{
	customers.clear();
	try {
		ifstream f(filename);
		if (!f) throw 2;
		int size;
		f >> size;
		f.ignore();
		for (int i = 0;i < size;i++)
		{
			//Реалізація пункту 7.	Створити 2 типи об’єктів – статичні та динамічні. Передбачити усі можливі виключні ситуації роботи з динамічною пам’яттю (з демонстрацією роботи через try-catch  та throw - не менше трьох).
			try
			{
				Customer::Load(f);
				if (!Customer::customers[i]) throw 1;
			}
			catch (int code)
			{
				if (code == 1) Customer::customers[i] = new Customer("undefined", "unnamed", "undefined", true);
			}
		}
		f.close();
	}
	catch (int code)
	{

	}
}

Customer * Customer::FindCustomer(string phonenumber)
{
	for (int i = 0;i < customers.size();i++)
	{
		if (customers[i]->GetPhoneNumber() == phonenumber)
		{
			return customers[i];
		}
	}
	return NULL;
}

int Customer::FindCustomerID(Customer * customer)
{
	return FindID(Customer::customers, customer);
}


Customer::Customer() :Person()
{
	SetFullName("");
	SetCompany("");
}

Customer::Customer(string phonenumber, string fullname, string company,bool registerme) :Person(phonenumber)
{
	SetFullName(fullname);
	SetCompany(company);
	if (registerme) RegisterMe();
}

Customer::~Customer()
{
	if (registered) DeleteMe();
}


void Worker::RegisterMe()
{
	workers.push_back(this);
	registered = true;
}

void Worker::DeleteMe()
{
	for (int i = 0;i < workers.size();i++)
	{
		if (this->id == workers[i]->GetID())
		{
			workers.erase(workers.begin() + i);
		}
	}
	registered = false;
}

string Worker::GetFullName()
{
	return firstname+" "+surname;
}

string Worker::GetFirstName()
{
	return firstname;
}

string Worker::GetSurName()
{
	return surname;
}

int Worker::GetID()
{
	return id;
}

string Worker::GetPosition()
{
	return position;
}

float Worker::GetSalary()
{
	return salary;
}

void Worker::SetFirstName(string firstname)
{
	this->firstname = firstname;
}

void Worker::SetSurName(string surname)
{
	this->surname=surname;
}

void Worker::SetID(int id)
{
	this->id = id;
}

void Worker::SetPosition(string position)
{
	this->position=position;
}

void Worker::SetSalary(float salary)
{
	this->salary = salary;
}

void Worker::Save(ofstream & f)
{
	f << this->GetPhoneNumber() << '\n';
	f << this->GetFirstName() << '\n';
	f << this->GetSurName() << '\n';
	f << this->GetID() << '\n';
	f << this->GetPosition() << '\n';
	f << this->GetSalary() << '\n';
	if (project) f << this->project->GetID() << '\n';
	else f << -1 << '\n';
}

void Worker::SaveAll(string filename)
{
	ofstream f(filename);
	f << workers.size() << '\n';
	for (int i = 0;i < workers.size();i++)
	{
		workers[i]->Save(f);
	}
	f.close();
}

Worker * Worker::Load(ifstream & f, bool registration = true)
{
	char phonenumber[20], firstname[20], surname[20],position[30];
	float salary;
	int id,prid;
	f.getline(phonenumber, 20);
	f.getline(firstname, 20);
	f.getline(surname, 20);
	f >> id;
	f.ignore();
	f.getline(position, 30);
	f >> salary >> prid;
	f.ignore();
	Worker *worker = new Worker(phonenumber, firstname, surname, id, position, salary, registration);
	worker->project = Project::FindProject(prid);
	return worker;
}

void Worker::LoadAll(string filename)
{
	workers.clear();
	ifstream f(filename);
	try
	{
		if (!f) throw 2;
		int size;
		f >> size;
		f.ignore();
		for (int i = 0;i < size;i++)
		{
			try
			{
				Worker::Load(f);
				if (!Worker::workers[i]) throw 1;
			}
			catch (int code)
			{
				if (code == 1) Worker::workers[i] = new Worker("undefined", "unnamed", "unnamed", -1, 0, true);
			}
		}
		f.close();
	}
	catch (int code)
	{
		
	}
}

Worker * Worker::FindWorker(int id)
{
	for (int i = 0;i < workers.size();i++)
	{
		if (workers[i]->GetID() == id)
		{
			return workers[i];
		}
	}
	return NULL;
}

int Worker::FindWorkerID(Worker * worker)
{
	return FindID(Worker::workers, worker);
}

vector<int> Worker::FindWorkers(Project * project)
{
	vector <int> result;
	for (int i = 0;i < workers.size();i++)
	{
		if (workers[i]->project == project)
		{
			result.push_back(i);
		}
	}
	return result;
}


Worker::Worker() :Person()
{
	SetFirstName("");
	SetSurName("");
	SetID(-1);
	SetPosition("Worker");
	SetSalary(0);
}

Worker::Worker(string phonenumber, string firstname, string surname, int id, float salary, bool registerme) :Person(phonenumber)
{
	SetFirstName(firstname);
	SetSurName(surname);
	SetID(id);
	SetSalary(salary);
	if (registerme) RegisterMe();
}

Worker::Worker(string phonenumber, string firstname, string surname, int id, string position, float salary,bool registerme) :Person(phonenumber)
{
	SetFirstName(firstname);
	SetSurName(surname);
	SetID(id);
	SetPosition(position);
	SetSalary(salary);
	if (registerme) RegisterMe();
}

Worker::~Worker()
{
	if (registered) DeleteMe();
}

void Manager::SetPosition(string position)
{
	this->Worker::SetPosition("Manager-"+position);
}

void Manager::AddToProject(Project * pr, Worker * worker)
{
	worker->project = pr;
}

void Manager::FreeWorker(Worker * worker)
{
	worker->project = NULL;
}

Project * Manager::GetProject(Worker * worker)
{
	return worker->project;
}

Manager * Manager::Service(string filename)
{
	ifstream f(filename);
	Worker *worker = Worker::Load(f, false);
	f.close();
	return new Manager(worker->GetPhoneNumber(),worker->GetFirstName(),worker->GetSurName(),worker->GetID(),worker->GetSalary());
}

Manager::Manager() :Worker()
{
	this->Worker::SetPosition("Manager");
	current = this;
}

Manager::Manager(string phonenumber, string firstname, string surname, int id, float salary) : Worker(phonenumber, firstname, surname, id, "Manager", salary,false)
{
	current = this;
}

Manager::Manager(string phonenumber, string firstname, string surname, int id, float salary, string position) : Worker(phonenumber, firstname, surname, id, salary,false)
{
	current = this;
	SetPosition(position);
}

Manager::~Manager()
{
	current = NULL;
}

#pragma managed