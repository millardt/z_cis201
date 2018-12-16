#include <iostream> 
#include "ch05.h" 

using namespace std; 

Country::Country() //default constructor 
{ 
    population = 1; 
    area = 1;
    density = 1;
} 

void Country::read() //prompt for input country, population, and area
{  
   cout << "Please enter the country: "; 
    getline(cin, name); 
    cout << "Please enter the population: "; 
    cin >> population; 
    cout << "Please enter the area: "; 
    cin >> area; 
    
    density = population / area; //calculate density of country

    string remainder; // Read remainder of line 
    getline(cin, remainder); 
 } 

bool Country::is_more_populated(Country b) const //bool comparison for population
{ 
    if (population == 0) return true; 
    if (b.population == 0) return false; 
    return population > b.population; 
}

bool Country::is_more_area(Country b) const //bool comparison for area 
{ 
    if (area == 0) return true; 
    if (b.area == 0) return false; 
    return area > b.area; 
}

bool Country::is_denser(Country b) const //bool comparison for density
{ 
    if (density == 0) return true; 
    if (b.density == 0) return false; 
    return density > b.density; 
}

void Country::print() const //print results 
{ 
    cout << name << endl 
    << "Population:"  << population 
    << " people" <<endl << " Area: " << area << " kilometers " << endl
    << "Density: " << density << endl; 
}
