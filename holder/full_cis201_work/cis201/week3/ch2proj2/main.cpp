/*
File name: main.cpp
Description: This program will prompt the user for a radius then
print:
	The area and circumference of a circle with that radius
	The volume and surface area of a sphere with that radius

Author: Troy Millard
Email: naglet@student.vvc.edu
*/
#include<iostream>

using namespace std;

int main()
{	

	// Declare the radius, area, volume, sarea, circum	
	double area, volume, sarea, circum, radius;

	double Pi = 3.14159;


	//prompt the user for the radius	
	//Prompt for radius 
	cout << "Enter the radius ";	
	cin  >> radius;

	//calc circum 2 * Pi * radius of the circle with given radius
	circum = 2 * radius * Pi; 
	
	//calc area Pi radius squared of the circle with given radius
	area = radius * radius * Pi;

	//calc volume 4/3 Pi radius cubed of the sphere with given radius
    volume = 1.33333 * Pi * radius *radius *radius;	

	//calc sarea 4 Pi radius squared of the sphere with given radius
    sarea = 4 * Pi * radius;

	//print the circumference
    cout << "the circumference cycles around and gives : " << circum<< endl;
    cout << "of line"<< endl;
    
    //print the area
    cout << "the area paints the sphere using : " << area<< endl; 
    cout << "bits of paint"<< endl;

    //print the volume
    cout << "the volume is full at : " << volume<< endl; 
    cout << "of liquid"<< endl;
    
    //print the surface area
	cout << "the surface area is : " << sarea<< endl; 
    cout << "thus I can't believe you walked the entire area"<< endl;

    return 0;
}
