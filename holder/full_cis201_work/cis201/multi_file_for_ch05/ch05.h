#ifndef CH05_H 
#define CH05_H 

#include <string> 

using namespace std; 

class Country 
{ 
public: 
/** 
Constructs a product with population 0 and area 1. 
*/ 
Country(); 

/** 
Reads in this product object. 
*/ 
void read(); 

/** 
Compares two product objects. 
@param b the object to compare with this object 
@return true if this object is better than b 
*/ 
bool is_greater_than(Country b) const; 

/** 
Prints this product object. 
*/ 
void print() const; 
private: 
string name; 
double population; 
int area; 
}; 

#endif
