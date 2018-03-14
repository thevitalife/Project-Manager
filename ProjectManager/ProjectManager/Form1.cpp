#include "stdafx.h"
#include "Form1.h"
#include <vector>
// #include "Form1.h"
#pragma unmanaged
vector<int> projectsofcustomer, workersofprojects;
#pragma managed

void CppCLR_WinformsProjekt::Form1::PrSetMode(int mode)
{
	for (int i = 0;i < tabPageProjects->Controls->Count;i++)
	{
		tabPageProjects->Controls[i]->Enabled = (mode == Convert::ToInt32(tabPageProjects->Controls[i]->Tag) || !tabPageProjects->Controls[i]->Tag);
		this->mode = mode;
	}
}

void CppCLR_WinformsProjekt::Form1::CSetMode(int mode)
{
	for (int i = 0;i < tabPageCustomers->Controls->Count;i++)
	{
		tabPageCustomers->Controls[i]->Enabled = (mode == Convert::ToInt32(tabPageCustomers->Controls[i]->Tag) || !tabPageCustomers->Controls[i]->Tag);
		this->mode = mode;
	}
}

void CppCLR_WinformsProjekt::Form1::WSetMode(int mode)
{
	for (int i = 0;i < tabPageWorkers->Controls->Count;i++)
	{
		tabPageWorkers->Controls[i]->Enabled = (mode == Convert::ToInt32(tabPageWorkers->Controls[i]->Tag) || !tabPageWorkers->Controls[i]->Tag);
		this->mode = mode;
	}
}

void CppCLR_WinformsProjekt::Form1::LoadCustomers()
{
	lbCustomers->Items->Clear();
	tPrCustomer->Items->Clear();
	for (int i = 0;i < Customer::customers.size();i++)
	{
		lbCustomers->Items->Add(marshal_as<String ^>(Customer::customers[i]->GetFullName() + "  -  " + Customer::customers[i]->GetCompany()));
		tPrCustomer->Items->Add(marshal_as<String ^>(Customer::customers[i]->GetFullName() + "  -  " + Customer::customers[i]->GetCompany()));
	}
	if (Customer::customers.size()>0)
	lbCustomers->SelectedIndex = 0;
}

void CppCLR_WinformsProjekt::Form1::ShowCustomer(int id)
{
	tCFullName->Text = marshal_as<String ^>(Customer::customers[id]->GetFullName());
	tCCompany->Text = marshal_as<String ^>(Customer::customers[id]->GetCompany());
	tCPhoneNumber->Text = marshal_as<String ^>(Customer::customers[id]->GetPhoneNumber());
	projectsofcustomer = Project::FindProjects(Customer::customers[id]);
	lbCProjects->Items->Clear();
	for (int i = 0;i < projectsofcustomer.size();i++)
	{
		lbCProjects->Items->Add(Convert::ToString(Project::projects[projectsofcustomer[i]]->GetID()) + " - " + marshal_as<String ^>(Project::projects[projectsofcustomer[i]]->GetName()));
	}
}

void CppCLR_WinformsProjekt::Form1::UpdateCustomer(int id)
{
	Customer::customers[id]->SetCompany(marshal_as<std::string>(tCCompany->Text));
	Customer::customers[id]->SetFullName(marshal_as<std::string>(tCFullName->Text));
	Customer::customers[id]->SetPhoneNumber(marshal_as<std::string>(tCPhoneNumber->Text));
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadCustomers();
	
}

void CppCLR_WinformsProjekt::Form1::AddCustomer()
{
	Customer *customer=new Customer(marshal_as<std::string>(tCPhoneNumber->Text), marshal_as<std::string>(tCFullName->Text), marshal_as<std::string>(tCCompany->Text), true);
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadCustomers();
}

void CppCLR_WinformsProjekt::Form1::DeleteCustomer(int id)
{
	for (int i = projectsofcustomer.size() - 1;i >= 0;i--) DeleteProject(projectsofcustomer[i]);
	Customer::customers.erase(Customer::customers.begin() + id);
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadCustomers();
}

void CppCLR_WinformsProjekt::Form1::FromCustomerToProjects()
{
	tabControl->SelectTab(0);
	lbProjects->SelectedIndex = projectsofcustomer[lbCProjects->SelectedIndex];
}

void CppCLR_WinformsProjekt::Form1::LoadProjects()
{
	lbProjects->Items->Clear();
	tWProject->Items->Clear();
	tWProject->Items->Add("<немає>");
	for (int i = 0;i < Project::projects.size();i++)
	{
		lbProjects->Items->Add(Convert::ToString(Project::projects[i]->GetID()) + "  -  " + marshal_as<String ^>(Project::projects[i]->GetName()));
		tWProject->Items->Add(Convert::ToString(Project::projects[i]->GetID()) + "  -  " + marshal_as<String ^>(Project::projects[i]->GetName()));
	}
	if (Project::projects.size()>0)
		lbProjects->SelectedIndex = 0;
}

void CppCLR_WinformsProjekt::Form1::ShowProject(int id)
{
	tPrID->Text = Convert::ToString(Project::projects[id]->GetID());
	tPrName->Text = marshal_as<String ^>(Project::projects[id]->GetName());
	tPrCustomer->SelectedIndex=Customer::FindCustomerID(Project::projects[id]->GetCustomer());
	tPrPrice->Text = Convert::ToString(Project::projects[id]->GetPrice());
	lbPrWorkers->Items->Clear();
	workersofprojects = Worker::FindWorkers(Project::projects[id]);
	for (int i = 0;i < workersofprojects.size();i++)
	{
		lbPrWorkers->Items->Add(marshal_as<String ^>(Worker::workers[workersofprojects[i]]->GetFullName())+" - "+marshal_as<String ^>(Worker::workers[workersofprojects[i]]->GetPosition()));
	}
}

void CppCLR_WinformsProjekt::Form1::UpdateProject(int id)
{
	Project::projects[id]->SetID(Convert::ToInt32(tPrID->Text));
	Project::projects[id]->SetName(marshal_as<std::string>(tPrName->Text));
	Project::projects[id]->SetCustomer(Customer::customers[tPrCustomer->SelectedIndex]);
	Project::projects[id]->SetPrice(Convert::ToDouble(tPrPrice->Text));
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadProjects();
}

void CppCLR_WinformsProjekt::Form1::AddProject()
{
	Project *project = new Project(marshal_as<std::string>(tPrName->Text), Customer::customers[tPrCustomer->SelectedIndex],Manager::current, Convert::ToInt32(tPrID->Text), Convert::ToDouble(tPrPrice->Text), true);
	for (int i = 0;i < lbPrWorkers->SelectedIndices->Count;i++)
	{
		Manager::current->AddToProject(project, Worker::workers[workersofprojects[lbPrWorkers->SelectedIndices[i]]]);
	}
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadProjects();
}


void CppCLR_WinformsProjekt::Form1::DeleteProject(int id)
{
	for (int i = 0;i < Worker::workers.size();i++)
	{
		if (Manager::current->GetProject(Worker::workers[i]) == Project::projects[id]) Manager::current->FreeWorker(Worker::workers[id]);
	}
	Project::projects.erase(Project::projects.begin() + id);
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadProjects();
}

void CppCLR_WinformsProjekt::Form1::FromProjectToWorkers()
{
	int id = lbPrWorkers->SelectedIndices[0];
	
	tabControl->SelectTab(1);
	lbWorkers->SelectedIndex = workersofprojects[id];
	
}

void CppCLR_WinformsProjekt::Form1::LoadFreeWorkers()
{
	workersofprojects = Worker::FindWorkers(NULL);
	for (int i = 0;i < workersofprojects.size();i++)
	{
		lbPrWorkers->Items->Add(marshal_as<String ^>(Worker::workers[workersofprojects[i]]->GetFullName()) + " - " + marshal_as<String ^>(Worker::workers[workersofprojects[i]]->GetPosition()));
	}
}

void CppCLR_WinformsProjekt::Form1::LoadWorkers()
{
	lbWorkers->Items->Clear();
	for (int i = 0;i < Worker::workers.size();i++)
	{
		lbWorkers->Items->Add(Convert::ToString(Worker::workers[i]->GetID()) + "  -  " + marshal_as<String ^>(Worker::workers[i]->GetFullName()) +"  -  " + marshal_as<String ^>(Worker::workers[i]->GetPosition()));
	}
	if (Worker::workers.size()>0)
		lbWorkers->SelectedIndex = 0;
}

void CppCLR_WinformsProjekt::Form1::ShowWorker(int id)
{
	tWID->Text = Convert::ToString(Worker::workers[id]->GetID());
	tWName->Text = marshal_as<String ^>(Worker::workers[id]->GetFirstName());
	tWProject->SelectedIndex = (Manager::current->GetProject(Worker::workers[id]))?Project::FindProjectID(Manager::current->GetProject(Worker::workers[id]))+1:0;
	tWSurName->Text = marshal_as<String ^>(Worker::workers[id]->GetSurName());
	tWSalary->Text = Convert::ToString(Worker::workers[id]->GetSalary());
	tWPhoneNumber->Text = marshal_as<String ^>(Worker::workers[id]->GetPhoneNumber());
	tWPosition->Text = marshal_as<String ^>(Worker::workers[id]->GetPosition());
}

void CppCLR_WinformsProjekt::Form1::ShowWorker(Worker * worker)
{
	tWID->Text = Convert::ToString(worker->GetID());
	tWName->Text = marshal_as<String ^>(worker->GetFirstName());
	tWProject->SelectedIndex = (Manager::current->GetProject(worker)) ? Project::FindProjectID(Manager::current->GetProject(worker)) + 1 : 0;
	tWSurName->Text = marshal_as<String ^>(worker->GetSurName());
	tWSalary->Text = Convert::ToString(worker->GetSalary());
	tWPhoneNumber->Text = marshal_as<String ^>(worker->Person::GetPhoneNumber());//Реалізація пункту 11.	Продемонструвати поліморфні виклики усіх методів за допомогою пізнього зв'язуванням (динамічного) та  раннього (статичним) зв'язуванням. Продемонструвати зміну форми об’єкта із застосуванням принципу поліморфізму.
	tWPosition->Text = marshal_as<String ^>(worker->GetPosition());
}

void CppCLR_WinformsProjekt::Form1::UpdateWorker(int id)
{
	Worker::workers[id]->SetID(Convert::ToInt32(tWID->Text));
	Worker::workers[id]->SetFirstName(marshal_as<std::string>(tWName->Text));
	Worker::workers[id]->SetSurName(marshal_as<std::string>(tWSurName->Text));
	Worker::workers[id]->SetPosition(marshal_as<std::string>(tWPosition->Text));
	Worker::workers[id]->SetPhoneNumber(marshal_as<std::string>(tWPhoneNumber->Text));
	Manager::current->AddToProject((tWProject->SelectedIndex>0) ? Project::projects[tWProject->SelectedIndex-1] : NULL,Worker::workers[id]);
	Worker::workers[id]->SetSalary(Convert::ToDouble(tWSalary->Text));
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadWorkers();
}

void CppCLR_WinformsProjekt::Form1::AddWorker()
{
	Worker *worker = new Worker(marshal_as<std::string>(tWPhoneNumber->Text), marshal_as<std::string>(tWName->Text), marshal_as<std::string>(tWSurName->Text),Convert::ToInt32(tWID->Text), marshal_as<std::string>(tWPosition->Text), Convert::ToDouble(tWSalary->Text), true);
	Manager::current->AddToProject((tWProject->SelectedIndex>0)?Project::projects[tWProject->SelectedIndex-1]:NULL, worker);
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadWorkers();
}

void CppCLR_WinformsProjekt::Form1::DeleteWorker(int id)
{
	Worker::workers.erase(Worker::workers.begin() + id);
	Customer::SaveAll("c.txt");
	Project::SaveAll("p.txt");
	Worker::SaveAll("w.txt");
	LoadWorkers();
}

void CppCLR_WinformsProjekt::Form1::FreeWorkers()
{
	for (int i=0;i<lbPrWorkers->SelectedIndices->Count;i++)
	Manager::current->FreeWorker(Worker::workers[workersofprojects[i]]);
	LoadProjects();
	LoadWorkers();
}
