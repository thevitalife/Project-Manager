#pragma unmanaged
#pragma once

#ifndef PROJECT_H
#define PROJECT_H
#include "stdafx.h"
#include <vector>
#include <cctype>
#include <string>

using namespace std;

class Customer;
class Manager;
class Worker;

template <class T> int FindID(const vector <T*> &collection, T *element)
{
	for (int i = 0;i < collection.size();i++)
	{
		if (collection[i] == element) return i;
	}
	return -1;
}

class Project
{
private:
	string name;
	Customer *customer;
	Manager *manager;
	float price;
	int id;
	void RegisterMe();
	void DeleteMe();
	bool registered=false;
public:
	//Реалізація пункту 9.	Визначити класі статичний метод для перегляду створених об’єктів. Статичний метод перегляду об’єктів викликати не через об’єкт, а через клас.
	//Реалізація пункту 10.	Програма повинна надавати користувачу можливість вибору створення та знищення певного об’єкта (основні сутності) засобами меню. Множини створюваних об’єктів зберігаються за допомогою контейнерів vector або list стандартної бібліотеки шаблонів STL.
	static vector<Project *> projects;
	string GetName();
	Customer * GetCustomer();
	Manager * GetManager();
	float GetPrice();
	int GetID();
	void SetName(string name);
	void SetCustomer(Customer * customer);
	void SetManager(Manager * manager);
	void SetID(int id);
	void SetPrice(float price);
	void Save(ofstream &f);
	static void SaveAll(string filename);
	static Project * Load(ifstream &f);
	static void LoadAll(string filename);
	static Project * FindProject(int id);
	static vector<int> FindProjects(Customer * customer);
	static int FindProjectID(Project * project);
	friend Manager;
	Project();
	Project(string name, Customer * customer, Manager * manager, int id, float price,bool registerme);
	~Project();
};

//Реалізація пункту 3.	Визначити в абстрактний клас. 
class Person
{
private:
	string phonenumber;
public:
	virtual string GetFullName() = 0;
	string GetPhoneNumber();
	void SetPhoneNumber(string phonenumber);
	Person();
	Person(string phonenumber);
};


class Worker :public Person
{
private:
	string firstname;
	string surname;
	int id;
	string position;
	float salary;
	void RegisterMe();
	void DeleteMe();
	bool registered;
	Project *project;
public:
	//Реалізація пункту 9.	Визначити класі статичний метод для перегляду створених об’єктів. Статичний метод перегляду об’єктів викликати не через об’єкт, а через клас.
	//Реалізація пункту 10.	Програма повинна надавати користувачу можливість вибору створення та знищення певного об’єкта (основні сутності) засобами меню. Множини створюваних об’єктів зберігаються за допомогою контейнерів vector або list стандартної бібліотеки шаблонів STL.
	static vector<Worker *> workers;
	string GetFullName();
	string GetFirstName();
	string GetSurName();
	int GetID();
	string GetPosition();
	float GetSalary();
	void SetFirstName(string firstname);
	void SetSurName(string surname);
	void SetID(int id);
	virtual void SetPosition(string position);
	//Реалізація пункту 5.	Кожен клас, що входить в ієрархію, що використовує відкрите наслідування, повинен містити принаймні одну віртуальну функцію. Функціональність зазначених функцій не повинна дублюватися.
	void SetSalary(float salary);
	void Save(ofstream &f);
	static void SaveAll(string filename);
	static Worker * Load(ifstream &f,bool registration);
	static void LoadAll(string filename);
	static Worker * FindWorker(int id);
	static int FindWorkerID(Worker * worker);
	static vector<int> FindWorkers(Project * project);
	friend Manager;
	Worker();
	Worker(string phonenumber, string firstname, string surname, int id, float salary,bool registerme);
	Worker(string phonenumber, string firstname, string surname, int id, string position, float salary,bool registerme);
	virtual ~Worker();
};

class Customer :public Person
{
private:
	string fullname;
	string company;
	void RegisterMe();
	void DeleteMe();
	bool registered=false;
public:
	//Реалізація пункту 9.	Визначити класі статичний метод для перегляду створених об’єктів. Статичний метод перегляду об’єктів викликати не через об’єкт, а через клас.
	//Реалізація пункту 10.	Програма повинна надавати користувачу можливість вибору створення та знищення певного об’єкта (основні сутності) засобами меню. Множини створюваних об’єктів зберігаються за допомогою контейнерів vector або list стандартної бібліотеки шаблонів STL.
	static vector<Customer *> customers;
	string GetFullName();
	string GetCompany();
	void SetFullName(string fullname);
	void SetCompany(string company);
	void Save(ofstream &f);
	static void SaveAll(string filename);
	static Customer * Load(ifstream &f);
	static void Service(Customer *customer,string filename);
	static void LoadAll(string filename);
	static Customer * FindCustomer(string phonenumber);
	static int FindCustomerID(Customer * customer);
	Customer();
	Customer(string phonenumber,string fullname, string company,bool registerme);
	~Customer();
};

class Manager :public Worker
{
public:
	static Manager * current;
	void SetPosition(string position);
	void AddToProject(Project *pr, Worker * worker);
	void FreeWorker(Worker * worker);
	Project * GetProject(Worker * worker);
	static Manager * Service(string filename);
	Manager();
	Manager(string phonenumber, string firstname, string surname, int id, float salary);
	Manager(string phonenumber, string firstname, string surname, int id, float salary, string position);
	~Manager();
};

//Реалізація пункту 6.	Визначити шаблон класу. Оголосити об'єктів, що базуються на шаблоні класу з двома різними типами даних.
template <typename T>
class PhoneBook
{
private:
	
public:
	vector <string> book;
	string GetListAsString()
	{
		string result="";
		for (int i = 0;i < book.size();i++)
		{
			result += book[i]+"\n";
		}
		return result;
	}
	PhoneBook<T>(vector <T*> &list)
	{
		for (int i = 0;i < list.size();i++)
			book.push_back(list[i]->GetFullName() + " - " + list[i]->GetPhoneNumber());
	}
};

#endif // !PROJECT_H
#pragma managed
