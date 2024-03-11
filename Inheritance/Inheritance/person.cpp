#ifndef PERSON_CPP
#define PERSON_CPP

#include "person.h"
#include<iostream>
using namespace std;
//int Employee::total_employees = 0; //initialize static member

//base class definition
Person::Person() {
	cout << "base class default constructor" << endl;
	strcpy_s(name, "");
}
Person::Person(const char* namep) {
	cout << "base class constructor" << endl;
	strcpy_s(name, namep);
}

char* Person::get_name() {
	return name;
}
void Person::set_name(const char* namep) {
	strcpy_s(name, namep);
}

void Person::display() {
	cout << name << "\t";
}


Person::~Person() {
	cout << "base class destructors" << endl;
}


Employee::Employee():Person() {
	cout << "derived class default constructor" << endl;
	//empid = 0;
	salary = 0;
}

Employee::Employee(const char* namep, float salary) : Person(namep)
{
	cout << "derived class constructor"<< endl;
	this->salary = salary;
	//total_employees++;
	//empid = total_employees;
}

//int Employee::get_empid()
//{
//	return empid;
//}
//void Employee::set_empid(int empid)
//{
//	this->empid = empid;
//}
float Employee::get_salary()
{
	return salary;
}

void Employee::set_salary(float salary)
{
	this->salary = salary;
}

//int Employee::get_total_employees(){
//	return total_employees;
//}

void Employee::display() {
	Person::display();
	cout<< salary << "\n";
}
Employee::~Employee()
{
	cout << "derived class destructor" << endl;
}

Manager::Manager() :Person() {
	cout << "derived class default constructor" << endl;
	//empid = 0;
	salary = 0;
	hra = 0;
}

Manager::Manager(const char* namep, float salary,float hra) : Person(namep)
{
	cout << "derived class constructor" << endl;
	this->salary = salary;
	this->hra = hra;
	//total_employees++;
	//empid = total_employees;
}
float Manager::get_salary() {
	return salary;
}
void Manager::set_salary(float salary) {
	this->salary = salary;
}

float Manager::get_hra() {
	return hra;
}
void Manager::set_hra(float hra) {
	this->hra = hra;
}

void Manager::display() {
	Person::display();
	cout << salary << " " << hra << endl;
}

Manager::~Manager() {
	cout << "Destructor of manager is called" << endl;
}

#endif