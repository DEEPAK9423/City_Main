#ifndef SHAPE_CPP
#define SHAPE_CPP

#include "shape.h"
#include<iostream>
using namespace std;

const double shape::PI = 3.14159026;
int shape::total_shape = 0;

shape::shape(){
	this->area = 0;
	this->perimeter = 0;
	total_shape++;
}

circle::circle()
{
	this->radius = 0;
}

circle::circle(int radius) : shape()
{
	this->radius = radius;
	//this->perimeter = 0;
}
void circle::set_radius()
{
	this->radius = radius;
}

int circle::get_radius()
{
	return radius;
}
double circle::get_perimeter()
{
	return perimeter;
}
double circle::get_area()
{
	return area;
}

void circle::calculate_area() 
{
	area = PI * radius * radius;
}

void circle::calculate_perimeter()
{
	perimeter = 2 * PI * radius;
}
void circle::display()
{
	cout << "shape is circle" << endl;
	this->calculate_area();
	this->calculate_perimeter();
	cout << get_radius() << " " << get_perimeter() << " " << get_area() << endl;
}

rectangle::rectangle():shape() {
	this->length = 0;
	this->breadth = 0;
}
rectangle::rectangle(int length, int breadth) {
	this->length = length;
	this->breadth = breadth;
}
void rectangle::set_length(int length) {
	this->length = length;
}
void rectangle::set_breadth(int breadth) {
	this->breadth = breadth;
}
int  rectangle::get_length() {
	return length;
}
int rectangle::get_breadth() {
	return breadth;
}
double rectangle::get_area() {
	return area;
}
double rectangle::get_perimeter() {
	return perimeter;
}
void rectangle::calculate_area() {
	area = length * breadth;
}
void rectangle:: calculate_perimeter() {
	perimeter = 2 * (length + breadth);
}

void rectangle::display()
{
	cout << "shape is rectangle";
	this->calculate_area();
	this->calculate_perimeter();
	cout << get_length() << " " << get_breadth() << " " << get_perimeter() << " " << get_area() << endl;
}

sphere::sphere() : circle()
{

}
sphere::sphere(int radius) :circle(radius)
{
	//this->radius = radius;
}
double sphere::get_surface_area() {
	return area;
}
double sphere::get_volume() {
	return volume;
}
void sphere::calculate_surface_area() {
	area = 4 * PI * get_radius() * get_radius();
}
void sphere::calculate_volume() {
	volume = (4.0 /3) * PI * get_radius() * get_radius() * get_radius();
}
void sphere::display()
{
	cout << "shape is sphere" << endl;
	this->calculate_surface_area();
	this->calculate_volume();
	cout << get_radius() << " " << get_surface_area() << " " << get_volume() << endl;
}

cylinder::cylinder() : circle()
{
	this->height = 0;
}
cylinder::cylinder(int radius, int height) : circle(radius)
{
	this->height = height;
}

double cylinder::get_surface_area()
{
	return area;
}
double cylinder::get_volume() {
	return volume;
}
void cylinder::calculate_surface_area() {
	area = 2 * PI * get_radius() * height;
}
void cylinder::calculate_volume() {
	volume = PI * get_radius() * get_radius() * height;
}

void cylinder::display()
{
	cout << "shape is cylinder" << endl;
	this->calculate_surface_area();
	this->calculate_volume();
	cout << get_radius() << " "<< height<< " " << get_surface_area() << " " << get_volume() << endl;
}

cuboid::cuboid() :rectangle()
{
	this->height = 0;
}
cuboid::cuboid(int length, int breadth, int height) : rectangle(length, breadth)
{
	this->height = height;
}

double  cuboid::get_surface_area() {
	return area;
}
double cuboid::get_volume() {
	return volume;
}
void cuboid::calculate_surface_area() {
	area = 2 * (get_length() * get_breadth() + get_length() * height + get_breadth() * height);
}
void cuboid::calculate_volume() {
	volume = get_length() * get_breadth() * height;
}
void cuboid::display()
{
	cout << "shape is cuboid" << endl;
	this->calculate_surface_area();
	this->calculate_volume();
	cout << get_length() << " " <<get_breadth()<<" "<<height<<" " << get_surface_area() << " " << get_volume() << endl;
}


#endif