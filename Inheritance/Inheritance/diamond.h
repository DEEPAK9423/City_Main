#ifndef DIAMOND_H
#define DIAMOND_H

class A {
protected:
	int a;
public:
	A();
	A(int a);
	void display();
};

class B :virtual  public A {
protected:
	int b;
public:
	B(int a, int b);
	void display();
};

class C : virtual public A {
protected:
	int c;
public:
	C(int a, int c);
	void display();
};

class D : public B, public C {
	int d;
public:
	D(int a, int b, int c, int d);
	void display();
};


#endif
