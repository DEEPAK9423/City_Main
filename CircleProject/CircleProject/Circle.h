#ifndef CIRCLE_H
#define CIRCLE_H



class Circle {
	int radius;
	double area;
	double circumference;
protected:
	static const double PI;
public:
	Circle();
	Circle(int radius);
	int get_radius();
	void set_radius(int radius);
	double get_area();
	double get_circumference();
	void Calculate_area();
	void Calculate_circumference();
};
 //const double Circle:: PI= 3.14159065;

class Sphere: public Circle {
	double volume;
	double surface_area;
public:
	Sphere();
	Sphere(int radius);
	double get_volume();
	double get_surface_area();
	void Calculate_volume();
	void Calculate_surface_area();
};
#endif
