#ifndef SHAPE_H
#define SHAPE_H

class shape {
protected:
	static const double PI;
	static int total_shape;
protected:
	double area;
	double perimeter;
public:
	shape();
	virtual void calculate_area()=0;       // virtual function for calculating area
	virtual void calculate_perimeter()=0;
	virtual void display() = 0;
};

class circle : public shape {
	int radius;
	.
public:
	circle();
	circle(int radius);
	void set_radius();
	int get_radius();
	double get_area();
	double get_perimeter();
	void calculate_area();
	void calculate_perimeter();
	void display();
};

class rectangle : public shape {
protected:
	int length;
	int breadth;
public:
	rectangle();
	rectangle(int length, int breadth);
	void set_length(int length);
	void set_breadth(int breadth);
	int get_length();
	int get_breadth();
	double get_area();
	double get_perimeter();
	void calculate_area();
	void calculate_perimeter();
	void display();
};

class sphere : public circle {
	double volume;
public:
	sphere();
	sphere(int radius);
	double get_surface_area();
	double get_volume();
	void calculate_surface_area();
	void calculate_volume();
	void display();
};

class cylinder : public circle {
	int height;
	double volume;
public:
	cylinder();
	cylinder(int radius, int height);
	double get_surface_area();
	double get_volume();
	void calculate_surface_area();
	void calculate_volume();
	void display();
};

class cuboid : public rectangle {
	int height;
	int volume;
public:
	cuboid();
	cuboid(int length, int breadth, int height);
	double get_surface_area();
	double get_volume();
	void calculate_surface_area();
	void calculate_volume();
	void display();
};



#endif
