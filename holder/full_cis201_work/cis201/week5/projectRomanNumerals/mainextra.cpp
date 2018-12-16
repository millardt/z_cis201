/*
File name: main.cpp
Description: this program will prompt the user for a number then 
return the roman numeral equalivalent between 0 and 4000

Author: Troy Millard
*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int roman;

    int thousandsplace;
    int hundredsplace;
    int tensplace;
    int onesplace;

    cout << "Enter a positive number from zero to four thousand" << endl; //prompt for number
    cin >> roman;
//    cout << "prompt portion" << endl;
   
    if (roman >= 1 and roman <= 4000)
    {
    cout << "enter the thousandsplace place" << endl;
 
    cin >> thousandsplace;
 
        if (thousandsplace == 1) //if for thousandsplace digit 
        {
            cout << "M" << endl; 
        }
        else if (thousandsplace == 2)
        {
            cout << "MM" << endl; 
        }
        else if (thousandsplace == 3)
        {
            cout << "MMMM" << endl; 
        }
        else if (thousandsplace == 4)
        {
            cout << "MMMM" << endl;        
        }
        else
        {
            cout << "outside range" << endl;
        }
    cout << "enter the hundredsplace place" << endl;
  
    cin >> hundredsplace;
  
          if (hundredsplace == 1) //if for hundredsplace digit  
        {
            cout << "C" << endl; 
        }
        else if (hundredsplace == 2)
        {
            cout << "CC" << endl; 
        }
        else if (hundredsplace == 3)
        {
            cout << "CCC" << endl; 
        }
        else if (hundredsplace == 4)
        {
             cout << "CD" << endl;        
        }
        else if (hundredsplace == 5)
        {
            cout << "D" << endl;   
        }
        else if (hundredsplace == 6)
        {
            cout << "DC" << endl; 
        }
        else if (hundredsplace == 7)
        {
            cout << "DCC" << endl; 
        }
        else if (hundredsplace == 8)
        {
            cout << "DCCC" << endl; 
        }
        else if (hundredsplace == 9)
        {
             cout << "CM" << endl;        
        }
    
      cout << "enter the tensplace place" << endl;

      cin >> tensplace;

           if (tensplace == 1)  //if for tensplace digit 
        {
            cout << "X" << endl; 
        }
        else if (tensplace == 2)
        {
            cout << "XX" << endl; 
        }
        else if (tensplace == 3)
        {
            cout << "XXX" << endl; 
        }
        else if (tensplace == 4)
        {
             cout << "XL" << endl;        
        }
        else if (tensplace == 5)
        {
            cout << "L" << endl;   
        }
        else if (tensplace == 6)
        {
            cout << "LX" << endl; 
        }
        else if (tensplace == 7)
        {
            cout << "LXX" << endl; 
        }
        else if (tensplace == 8)
        {
            cout << "LXXX" << endl; 
        }
        else if (tensplace == 9)
        {
             cout << "XC" << endl;        
        }

    cout << "enter the onesplace place" << endl;

    cin >> onesplace;
           if (onesplace == 1) //if for onesplace digit 
        {
            cout << "I" << endl; 
        }
        else if (onesplace == 2)
        {
            cout << "II" << endl; 
        }
        else if (onesplace == 3)
        {
            cout << "III" << endl; 
        }
        else if (onesplace == 4)
        {
             cout << "IV" << endl;        
        }
        else if (onesplace == 5)
        {
            cout << "V" << endl;   
        }
        else if (onesplace == 6)
        {
            cout << "VI" << endl; 
        }
        else if (onesplace == 7)
        {
            cout << "VII" << endl; 
        }
        else if (onesplace == 8)
        {
            cout << "VIII" << endl; 
        }
        else if (onesplace == 9)
        {
             cout << "IX" << endl;        
        }
       
    
         else
        {
           cout << "nulla" << endl;  
        }
       cout << onesplace;

       cout << onesplace;

       cout << onesplace;

       cout << onesplace << endl;


    }
    else if (roman == 0)
        
    {
           cout << "nulla" << endl;  
    }
 
    else
    {
           cout << "invalid entry or outside number range" << endl;
           cout << "please try again" << endl; 
    }
  
    return 0;
}
