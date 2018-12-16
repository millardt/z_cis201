#include <iostream> 
#include "ch05.h" 

int main() 
{ 
    Country largest; 

    bool more = true;
    while (more) 
    { 
    Country next; 
    next.read(); 
    if (next.is_greater_than(largest)) 
        largest = next; 

    cout << "More countries? (yes/no) "; 

    string response; 
    getline(cin, response); 
    if (response != "yes") 
        more = false; 
} 

cout << "The largest population is  "; 
largest.print();

cout << "" << endl;

return 0; 
}

