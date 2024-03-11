#ifndef X_H
#define X_H

class X {
	int x;
public:
	X();
	X(int x);
	int get_x();

    friend void afn( X xobj);  //friend function
};



#endif
