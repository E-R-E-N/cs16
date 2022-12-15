// feetmeters.cpp - converts length from ft+in to m+cm for user
// Zhengyan Yu, 02/14/18

#include <iostream>
using namespace std;

// Prototypes of 4 functions used by main (must implement below):
void get_length(int &feet, int &inches);
double feet_plus_fraction(int feet, int inches);
void convert(double dfeet, int &meters, int &centimeters);
void show_results(int meters, int centimeters);

int main() {
    int feet = 0, inches = 0, meters = 0, centimeters = 0;
    double dfeet;
    
    get_length(feet, inches);
    dfeet = feet_plus_fraction(feet, inches);
    convert(dfeet, meters, centimeters);
    show_results(meters, centimeters);
    
    return 0;
}

// IMPLEMENT THE 4 REQUIRED FUNCTIONS BELOW THIS COMMENT
void get_length(int &feet, int &inches)
{
  cout<<"enter feet and inches"<<endl;
  cin>>feet>>inches;
  return;
}
  
double feet_plus_fraction(int feet, int inches)
{
  return feet+static_cast<double>(inches)/12;
}

void convert(double dfeet, int &meters, int &centimeters)
{
  meters=static_cast<int>(dfeet*.3048);
  centimeters=static_cast<int>(((dfeet*.3048)-meters)*100);
    }

void show_results(int meters, int centimeters)
    {
      cout<<"conversion: "<<meters<<" meters and "<<centimeters<<" centimeters"<<endl;
    }
