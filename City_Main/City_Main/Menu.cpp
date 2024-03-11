#ifndef MENU_CPP

#define MENU_CPP
#include "Menu.h"
#include <vector>
#include "Capital.h"
#include "Non_capital.h"
#include "City.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>

Menu::Menu() { choice = 0; }

void Menu::display_menu()
{
    cout << "\n--------------------MENU------------------\n";
    cout << endl;
    cout << "1. Display temperature of all cities\n";

    cout << "2. Sort temperature \n";

    cout << "3. Search temperature values for a city\n";

    cout << "4. Convert Temperature in Fahrenheit or Kelvin\n";

    cout << "5. Delete record of a particular city  \n";

    cout << "6. Exit\n";


}


void Menu::display_cities(vector<City*> cities,int display_choice)
{
    if (display_choice == 1) {
        cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
        cout << setfill('-') << setw(60) << "-" << std::endl;
        cout << std::setfill(' ');

        for (int i = 0; i < cities.size(); i++)
        {
           // cout << setw(15) << cities[i]->get_name() << setw(15) << 32 + (cities[i]->get_max()) * (9 / 5.0) << setw(15) << 32 + (cities[i]->get_min()) * (9 / 5.0) << setw(15) << 32 + (cities[i]->get_avg()) * (9 / 5.0) << endl;
            cities[i]->display();
        }

    }

    if (display_choice == 2) {
        cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
        cout << setfill('-') << setw(60) << "-" << std::endl;
        cout << std::setfill(' ');

        for (int i = 0; i < cities.size(); i++)
        {
           if(cities[i]->get_size() == 4)
            cities[i]->display();
        }

    }
    if (display_choice == 3) {
        cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
        cout << setfill('-') << setw(60) << "-" << std::endl;
        cout << std::setfill(' ');

        for (int i = 0; i < cities.size(); i++)
        {
            if (cities[i]->get_size() == 1)
                cities[i]->display();
        }

    }

}

bool Menu::max_val(City* c1, City* c2)
{
    return (c1->get_max() > c2->get_max());

}

bool Menu::min_val(City* c1, City* c2)
{
    return (c1->get_min() < c2->get_min());

}

bool Menu::avg_val_ascending(City* c1, City* c2)
{
    return (c1->get_avg() < c2->get_avg());

}


void Menu::sort_cities(vector<City*> cities, int sort_choice)
{

    if (sort_choice == 1) {
        sort(cities.begin(), cities.end(), max_val);
    }

    if (sort_choice == 2) {
        sort(cities.begin(), cities.end(), min_val);
    }

    if (sort_choice == 3) {
        sort(cities.begin(), cities.end(), avg_val_ascending);
    }

    cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
    /*cout << setfill('-') << setw(60) << "-" << std::endl;*/
    for (int i = 0; i < cities.size(); i++)
    {
        cities[i]->display();
    }


}

void Menu::convert_temp(vector<City*> cities, int sort_choice)
{

    if (sort_choice == 1) {
        cout << setw(15) << left << "City" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
       
        for (int i = 0; i < cities.size(); i++)
        {
            cout << setw(15) << cities[i]->get_name() << setw(15) << 32+(cities[i]->get_max())*(9/5.0) << setw(15) << 32+(cities[i]->get_min())*(9/5.0) << setw(15) << 32+(cities[i]->get_avg())*(9/5.0) << endl;
        }
       
    }

    if (sort_choice == 2) {
        cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
        
        for (int i = 0; i < cities.size(); i++)
        {
            cout << setw(15) << cities[i]->get_name() << setw(15) << cities[i]->get_max()+273 << setw(15) << cities[i]->get_min()+273 << setw(15) << cities[i]->get_avg()+273 << endl;
        }
    }
}

void Menu::search_city(vector<City*> cities, string city_name)
{
    int i = 0;
    for (i = 0; i < cities.size(); i++)
    {
        if (cities[i]->get_name() == city_name) break;
    }
    if (i == cities.size())
    {
        cout << "City not found\n";
    }
    else {
        cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
        cout << endl;
        cities[i]->display();
    }

}


void Menu::delete_city(vector<City*>& cities, string city_name)
{
    int i = 0;
    for (i = 0; i < cities.size(); i++)
    {
        if (cities[i]->get_name() == city_name) break;
    }

    if (i == cities.size()) cout << "City Not Found" << endl;
    else {
        cout << "City that you have entered i.e.,  " << city_name << "  is deleted successfully" << endl;
    cout << setw(15) << left << "City" << setw(15) << "State Name" << setw(15) << "Max Temp (C)" << setw(15) << "Min Temp (C)" << setw(15) << "Avg Temp (C)" << endl;
    cout << endl;

    for (auto it = cities.begin(); it != cities.end();)
    {
        if ((*it)->get_name() == city_name)
        {
            delete* it;
            it = cities.erase(it);
        }
        else
        {
            (*it)->display();
            ++it;
        }
    }
  }
}


void Menu::menu_case(vector<City*> cities)
{
    bool check = 1;

    do
    {
        int choice;
        display_menu();
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:

        {
            display_choices(cities);
            break;
        }

        case 2:
        {
            sort_choices(cities);
            break;
        }

        case 3:
        {
            string city_name3 = "";
            cout << "Enter the city name want to search : ";
            cin >> city_name3;
            cout << "\n";
            search_city(cities, city_name3);
            break;
        }

        case 4:
        {
            convert_choices(cities);
            break;
        }


        case 5:
        {
            string city_name1 = "";
            cout << "Enter the city name want to delete : ";
            cin >> city_name1;
            delete_city(cities, city_name1);
            break;
        }

        case 6:
            check = 0;
            break;

        }

    } while (check);

}

void Menu::sort_choices(vector<City*> cities)
{
    int choice1;
    cout << "1. sort by maximum temperature.\n";
    cout << "2. sort by minimum temperature.\n";
    cout << "3. sort by average temperature.\n";
    cout << "Enter your choice : ";
    cin >> choice1;

    switch (choice1)
    {
    case 1:
    {
        sort_cities(cities, choice1);
    }
    break;

    case 2:
    {
        sort_cities(cities, choice1);
    }
    break;

    case 3:
    {
        sort_cities(cities, choice1);
    }
    break;
    }


}

void Menu::convert_choices(vector<City*> cities)
{
    int choice2;
    cout << "1. convert in Fahrenheit.\n";
    cout << "2. Convert in kelvin.\n";
    cout << "Enter your choice : ";
    cin >> choice2;

    switch (choice2)
    {
    case 1:
    {
        convert_temp(cities, choice2);
    }
    break;

    case 2:
    {
       convert_temp(cities, choice2);
    }
    break;
    }


}

void Menu::display_choices(vector<City*> cities)
{
    int choice3;
    cout << "1. Display all cities.\n";
    cout << "2. Display Capital cities.\n";
    cout << "3. Display Non_Capital cities.\n";
    cout << "Enter your choice : ";
    cin >> choice3;

    switch (choice3)
    {
    case 1:
    {
        display_cities(cities, choice3);
    }
    break;

    case 2:
    {
         display_cities(cities, choice3);
    }
    break;

    case 3:
    {
        display_cities(cities, choice3);
    }
    break;
    }


}

#endif
