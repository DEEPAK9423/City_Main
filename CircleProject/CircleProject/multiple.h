#ifndef MULTIPLE_H
#define MULTIPLE_H

class A {
protected:
	int x;
public:
	A(int x);
	void display();
};


class B {
protected:
	int y;
public:
	B(int x,int y);
	void display();
};

class C : public A, public B {

};

#endif
