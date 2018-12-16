#ifndef CH05_H 
#define CH05_H 

#include <string> 

using namespace std; 

class Country 
{ 
public: 
/** 
Constructs a country with population 1 and area 1. 
*/ 
Country(); 

/** 
Reads in this country object. 
*/ 
void read(); 

/** 
Compares two country objects. 
@param b the object to compare with this object 
@return true if this object is larger than b 
*/ 

bool is_more_populated(Country b) const; 
bool is_more_area(Country b) const; 
bool is_denser(Country b) const; 

/** 
Prints this country object. 
*/ 
void print() const; 
private: 
string name; 
double population; 
double area; 
double density;
}; 

#endif
