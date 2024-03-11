#ifndef MENU_H
#define MENU_H
#include<iostream>
#include<vector>
#include "City.h"
#include "Capital.h"
#include "Non_capital.h"
using namespace std;

class Menu
{
    int choice;

public:

    Menu();
    void display_menu();
    void menu_case(vector<City*> cities);
   // void display_cities(vector<City*> cities);
    void sort_choices(vector<City*> cities);
    void sort_cities(vector<City*> cities, int sort_choice);
    void search_city(vector<City*> cities, string city_name);
    void convert_choices(vector<City*> cities);
    void convert_temp(vector<City*> cities, int convert_choice);
    void delete_city(vector<City*> &cities, string city_name);
    void display_choices(vector<City*> cities);
    void display_cities(vector<City*> cities, int display_choice);
    static bool max_val(City* c1, City* c2);
    static bool min_val(City* c1, City* c2);
    static bool avg_val_ascending(City* c1, City* c2);

};



#endif
