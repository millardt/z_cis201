#include <iostream> 
#include "ch05.h" 

int main() 
{ 
    //initialize bool parameters
    Country populatedest;
    Country areast;
    Country densist; 

    bool more = true;
    while (more) //if statements for country comparison
    { 
    Country next; 
    next.read(); 
    if (next.is_more_populated(populatedest)) 
        populatedest = next; 
     
    if (next.is_more_area(areast)) 
        areast = next; 

    if (next.is_denser(areast)) 
        densist = next; 


    cout << "More countries? (yes/no) "; 

    string response; // if for additional input
    getline(cin, response); 
    if (response != "yes") 
        more = false; 
} 
//print results parts
cout << "The country with largest population is  "; 
populatedest.print();

cout << "The country with largest area is  "; 
areast.print();

cout << "The country with largest density is  "; 
densist.print();

return 0; 
}

