#ifndef PERSON_H
#define PERSON_H

//base class
class Person {
	char name[20];
public:
	Person();
	Person(const char* namecp);

	char* get_name();
	void set_name(const char* namep);
	void display();

	~Person();   //base class destructors
};

//derived class
//When base class is publicilicly inherited then all the members of base calss 
// become public for derived class expect private daat members
class Employee : public Person {
	//int empid;
	float salary;
	//static int total_employees;
//protected:
//	int get_empid();
//	float get_salary();
public:
	//derived class constructor, passing base class member daata to base class constructor
	Employee();
	Employee(const char* namep, float salary);
	
	//int get_empid();
	//void set_empid(int empid);

	float get_salary();
	void set_salary(float salary);

	void display();
	//static int get_total_employees();

	~Employee();
};

class Manager : public Person {
	float salary;
	float hra;
public:
	Manager();
	Manager(const char* namep, float salary, float hra);

	float get_salary();
	void set_salary(float salary);

	float get_hra();
	void set_hra(float hra);

	void display();
	~Manager();
};

//class Manager : protected Employee {
//	float hra;
//public:
//	void display()
//	{
//		cout << this->get_empid() << "\n";
//	}
//};



#endif
