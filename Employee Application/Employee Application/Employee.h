#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Date {
	int day, month, year;
public:
	Date();
	Date(int day, int month, int year);
	int get_day();
	int get_month();
	int get_year();
	
};

class Employee {

	char name[20];
	float salary;
	static int total_employees;
	 int emp_id;
	Date joining_date;
public:
	Employee();
	Employee(const char* namecp, float sal);
	Employee(const char* ,float,Date);
	void display();
	void set_name(const char* namecp);
	Date get_joining_date();
	void set_salary(float sal);
	char* get_name();
	float get_salary();
	static int get_total_employees();
	int get_emp_id();
	void acept();
	~Employee();  //we can have maximum 1 constructor in our program for single class not more than one.
};


#endif
