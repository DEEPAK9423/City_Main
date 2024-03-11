#ifndef EMPLOYEE_CPP
#define EMPLOYEE_CPP
#include "Employee.h"

#include<iostream>
#include<cstring>
using namespace std;

int Employee::total_employees = 0;

Employee::Employee() {
	cout << "Default constructor invoked....." << "\n";
	strcpy_s(name, "");
	salary = 0.0f;
	total_employees++;
	emp_id = 1000 + total_employees;
}

Employee::Employee(const char* namecp, float sal) {
	strcpy_s(name, namecp);
	salary = sal;
	total_employees++;
	emp_id = 1000 + total_employees;
}

Employee::Employee(const char* namecp, float sal, Date jdate){
	strcpy_s(name, namecp);
	salary = sal;
	joining_date = jdate;
    total_employees++;
	joining_date = jdate;
	emp_id = 1000 + total_employees;
}

void Employee::set_name(const char* namecp)
{
	strcpy_s(name, namecp);
}

void Employee::set_salary(float sal)
{
	salary = sal;
}

char* Employee::get_name()
{
	return name;
}

float Employee::get_salary()
{
	return salary;
}
int Employee::get_total_employees()
{
	return total_employees;
}

Employee::~Employee()
{
	cout << "we are done with the program" << endl;
}


int Employee::get_emp_id()
{
	return emp_id;
}

void Employee::display()
{
	cout <<emp_id<<" "<< name << " " << salary <<"  " << joining_date.get_day() <<"/"<< joining_date.get_month()<<"/" << joining_date.get_year() << "\n";
}

Date::Date()
{
	day = 0, month = 0, year = 0;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

int Date::get_day()
{
	return day;
}

int Date::get_month()
{
	return month;
}

int Date::get_year()
{
	return year;
}


void Employee::acept()
{
	cout << "Enter your name:";
	char name_acept[20];
	cin >> name_acept;
	set_name(name_acept);
	cout << "Enter your salary";
	float sal;
	cin >> sal;
	set_salary(sal);
}

#endif