#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#include<fstream>
#include"City.h"
#include "Capital.h"
#include "Non_capital.h"
#include "Menu.h"

using namespace std;

pair<pair<string, string>, vector<double>> parseCSVLineToPair(const string& line) {
    stringstream ss(line);
    pair<string, string> Name; // Fix: Use the pair to store city and state names
    string cityName;
    getline(ss, cityName, ',');
    Name.first = cityName; // Assign city name to the first element of the pair
    string stateName;
    getline(ss, stateName, ',');
    Name.second = stateName; // Assign state name to the second element of the pair

    vector<double> temperatures;
    string temp;
    while (getline(ss, temp, ',')) {
        if (!temp.empty()) {
            temperatures.push_back(stod(temp));
        }
    }
    return make_pair(Name, temperatures);
}




int main() {

    //vector<pair<string, vector<double>>> cityTemperatureData;

    //ifstream file("D:\\work_dsi\\training\\example.csv");
    //if (!file.is_open()) {
    //    cerr << "Error: Unable to open file.\n";
    //    return 1;
    //}

    //// Read data from CSV file
    //string line;
    //while (getline(file, line)) {
    //    cityTemperatureData.push_back(parseCSVLineToPair(line));
    //}
    //file.close();

    vector<pair<pair<string, string>, vector<double>>> cityTemperatureData;

    // Open CSV file

    ifstream file("D:\\work_dsi\\training\\example.csv");

    if (!file.is_open()) {

        cerr << "Error: Unable to open file.\n";

        return 1;

    }

    string line;
    while (getline(file, line)) {
        try {
            cityTemperatureData.push_back(parseCSVLineToPair(line));
        }
        catch (const std::exception& e) {
            cerr << "Error reading CSV line: " << e.what() << endl;
            // Skip the current line and continue with the next one
            continue;
        }
    }
    file.close();




    // Hardcoded temperature data
   /* vector<double> temp_pune = { 20,22,23,21,24,25,20,22,24,25,26,24,25,26,27,28,29,30,29,30,28,27,26,25 };
    vector<double> temp_kota = { 18,19,20,21,22,23,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7 };
    vector<double> temp_kanpur = { 15,16,17,18,19,20,21,22,23,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10 };
    vector<double>temp_udaipur = { 28,29,30,29,30,28,27,26,25,26,27,28,29,30,31,32,33,34,35,34,33,32,31,30 };
    vector<double>temp_vrindavan = { 22,23,24,25,26,27,28,29,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15 };
    vector<double>temp_manali = { 0,1,2,3,4,5,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9,10,11 };
    vector<double>temp_ladakh = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8 };
    vector<double>temp_shilong = { 10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,29,28,27 };
    vector<double>temp_raipur = { 27,28,30,31,30,29,28,27,25,24,24,26,26,28,30,32,33,34,35,36,37,38,39,38,37,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,10,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35 };
    vector<double>temp_jaipur = { 11,13,12,14,15,16,17,19,20,22,24,23,25,24,23,21,19,18,20,22,21,23,25,26,27,28,30,32,33,32,34,35,37,38,36,34,33,32,31,33,35,34,32,30,29,28,27,25,24,23,22,21,19,17,15,14,16,18,19,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,49,48,47,46,45,44,43 };
    vector<double>temp_hyderabad = { 47,48,49,48,50,49,48,47,46,45,44,45,46,48,50,51,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,15,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27 };
    vector<double>temp_ranchi = { 26,24,23,24,25,26,27,28,29,30,31,32,31,29,27,25,23,22,20,19,20,22,23,24,26,27,29,31,32,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,10,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33 };
    vector<double>temp_mumbai = { 17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,10,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22 };
    vector<double>temp_patna = { 47,49,48,46,47,48,49,50,49,47,48,49,50,51,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,40,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29 };


    cityTemperatureData.push_back(make_pair("Pune", temp_pune));
    cityTemperatureData.push_back(make_pair("Kota", temp_kota));
    cityTemperatureData.push_back(make_pair("Kanpur", temp_kanpur));
    cityTemperatureData.push_back(make_pair("Udaipur", temp_udaipur));
    cityTemperatureData.push_back(make_pair("Vrindavan", temp_vrindavan));
    cityTemperatureData.push_back(make_pair("Manali", temp_manali));
    cityTemperatureData.push_back(make_pair("Ladakh", temp_ladakh));
    cityTemperatureData.push_back(make_pair("Shilong", temp_shilong));
    cityTemperatureData.push_back(make_pair("Raipur", temp_raipur));
    cityTemperatureData.push_back(make_pair("Jaipur", temp_jaipur));
    cityTemperatureData.push_back(make_pair("Ranchi", temp_ranchi));
    cityTemperatureData.push_back(make_pair("Mumbai", temp_mumbai));
    cityTemperatureData.push_back(make_pair("Patna", temp_patna));
    cityTemperatureData.push_back(make_pair("Hyderabad", temp_hyderabad));*/

    vector<City*> cities(cityTemperatureData.size());

    for (int i = 0; i < cityTemperatureData.size(); i++) {
        if (cityTemperatureData[i].second.size() == 24 * 1) {
            cities[i] = new Non_capital(cityTemperatureData[i].first.first);
            cities[i]->accept(cityTemperatureData[i].second);
        }
        else if (cityTemperatureData[i].second.size() == 24 * 4) {
            cities[i] = new Capital(cityTemperatureData[i].first.first, cityTemperatureData[i].first.second);
            cities[i]->accept(cityTemperatureData[i].second);
        }
    }



    Menu m;
    m.menu_case(cities);





}
