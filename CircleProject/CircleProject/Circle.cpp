#ifndef CIRCLE_CPP
#define CIRCLE_CPP

#include "Circle.h"

const double  Circle::PI = 3.14159065;

Circle::Circle() {
	radius = 0;
	area = 0;
	circumference = 0;
}

Circle::Circle(int radius)
{
	this->radius = radius;
	this->area = PI * radius * radius;
	this->circumference = 2 * PI * radius;
}

int Circle::get_radius()
{
	return radius;
}
void Circle::set_radius(int radius)
{
	this->radius = radius;
}

double Circle::get_area()
{
	return area;
}

double Circle::get_circumference()
{
	return circumference;
}

void Circle::Calculate_circumference()
{
	circumference = 2 * PI * radius;
}

void Circle::Calculate_area()
{
	area = PI * radius * radius;
}

Sphere::Sphere():Circle()
{
	volume = 0;
	surface_area = 0;
}

Sphere::Sphere(int radius) :Circle(radius)
{
	//this->radius = radius;
	this->volume = (4 / 3) * PI * radius * radius * radius;
	this->surface_area = 4 * PI * radius * radius;
}

double Sphere::get_volume()
{
	return volume;
}
double Sphere::get_surface_area()
{
	return surface_area;
}

void Sphere::Calculate_volume()
{
	
	volume= (4 / 3) * PI * get_radius() * get_radius() * get_radius();
}

void Sphere::Calculate_surface_area()
{
	surface_area= 4 * PI * get_radius() * get_radius();
}




#endif