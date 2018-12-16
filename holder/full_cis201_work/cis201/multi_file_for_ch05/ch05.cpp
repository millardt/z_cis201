#include <iostream> 
#include "ch05.h" 

using namespace std; 

Country::Country() 
{ 
    population = 1; 
    area = 1; 
} 

void Country::read() 
{ 
    cout << "Please enter the country: "; 
    getline(cin, name); 
    cout << "Please enter the population: "; 
    cin >> population; 
    cout << "Please enter the area: "; 
    cin >> area; 
    string remainder; // Read remainder of line 
    getline(cin, remainder); 
} 

bool Country::is_greater_than(Country b) const 
{ 
    if (population == 0) return true; 
    if (b.population == 0) return false; 
    return population / area > b.area / b.area; 
} 

void Country::print() const 
{ 
    cout << name 
    << " Price: " << population 
    << " Score: " << area; 
}
