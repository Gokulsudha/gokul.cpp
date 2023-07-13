/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
Weather APP

Name: B.Gokul
College name : VSB engineering College Karur 

Location 
1. Today 
2. Yesterday
3. Tomorrow
4. Week report 
5. month weather 


cloudy
dry
rain 
thunderstrom
heatwaves
temperature 
rain possibility
humidity 

functions
class and objects 
oops concepts

*/
#include <iostream>
#include <string>
using namespace std;

// Structure to store weather information
struct WeatherData {
    string date;
    string condition;
    int temperature;
    int rainPossibility;
    int humidity;
};

// Function to display weather information
void displayWeather(const WeatherData& data) {
    cout << "Date: " << data.date << endl;
    cout << "Condition: " << data.condition << endl;
    cout << "Temperature: " << data.temperature << "°C" << endl;
    cout << "Rain Possibility: " << data.rainPossibility << "%" << endl;
    cout << "Humidity: " << data.humidity << "%" << endl;
}

int main() {
    WeatherData today;
    WeatherData yesterday;
    WeatherData tomorrow;
    WeatherData weekReport[7];
    WeatherData monthWeather[30];

    // Set sample weather data
    today.date = "July 7, 2023";
    today.condition = "Cloudy";
    today.temperature = 25;
    today.rainPossibility = 30;
    today.humidity = 60;

    yesterday.date = "July 6, 2023";
    yesterday.condition = "Rain";
    yesterday.temperature = 22;
    yesterday.rainPossibility = 80;
    yesterday.humidity = 75;

    tomorrow.date = "July 8, 2023";
    tomorrow.condition = "Sunny";
    tomorrow.temperature = 30;
    tomorrow.rainPossibility = 10;
    tomorrow.humidity = 55;

    // Display today's weather
    cout << "Today's Weather: " << endl;
    displayWeather(today);

    // Display yesterday's weather
    cout << endl << "Yesterday's Weather: " << endl;
    displayWeather(yesterday);

    // Display tomorrow's weather
    cout << endl << "Tomorrow's Weather: " << endl;
    displayWeather(tomorrow);

    // Display week report
    cout << endl << "Week Report: " << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i+1 << ": " << endl;
        displayWeather(weekReport[i]);
    }

    // Display month weather
    cout << endl << "Month Weather: " << endl;
    for (int i = 0; i < 30; i++) {
        cout << "Day " << i+1 << ": " << endl;
        displayWeather(monthWeather[i]);
    }

    return 0;
}