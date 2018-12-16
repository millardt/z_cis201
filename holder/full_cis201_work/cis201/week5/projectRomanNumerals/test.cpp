/*
File name: test.cpp
Description: this program is just for testing possible ways to make main
programs

Author: Troy Millard
*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int roman;

    int thousands = roman / 1000;
    int hundreds = roman / 100 % 10;
    int tens = roman / 10 % 10;
    int ones = roman % 10;

/*
    int thousands = roman / 1000;
    int hundreds = roman / 100 % 10;
    int tens = roman / 10 % 10;
    int ones = roman % 10;
*/

    cout << "Enter a positive number from zero to four thousand" << endl; //prompt for number
    cin >> roman;
//    cout << "prompt portion" has an extra number that it shouldn't;
   
    if (roman >= 1 and roman <= 4000)
    {
    int thousands = roman / 1000;
    int hundreds = roman / 100 % 10;
    int tens = roman / 10 % 10;
    int ones = roman % 10;


/* 
    cout << "enter the thousands place" << endl;
 
    cin >> thousands;

    cout << "enter the hundreds place" << endl;
  
    cin >> hundreds;
 
    cout << "enter the tens place" << endl;

    cin >> tens;

    cout << "enter the ones place" << endl;

    cin >> ones;

    cout << "your number translates to" << endl; //text before declaration
 */

     if (thousands == 1) //if for thousands digit 
        {
            cout << "M"  ; 
        }
        else if (thousands == 2)
        {
            cout << "MM"  ; 
        }
        else if (thousands == 3)
        {
            cout << "MMMM"  ; 
        }
        else if (thousands == 4)
        {
            cout << "MMMM"  ;        
        }
//        else
//        {
//            cout << "outside range" << endl;
//        }
//    cout << "enter the hundreds place" << endl;
  
//    cin >> hundreds;
  
    if (hundreds == 1) //if for hundreds digit  
        {
            cout << "C"  ; 
        }
        else if (hundreds == 2)
        {
            cout << "CC"  ; 
        }
        else if (hundreds == 3)
        {
            cout << "CCC"  ; 
        }
        else if (hundreds == 4)
        {
             cout << "CD"  ;        
        }
        else if (hundreds == 5)
        {
            cout << "D"  ;   
        }
        else if (hundreds == 6)
        {
            cout << "DC"  ; 
        }
        else if (hundreds == 7)
        {
            cout << "DCC"  ; 
        }
        else if (hundreds == 8)
        {
            cout << "DCCC"  ; 
        }
        else if (hundreds == 9)
        {
             cout << "CM"  ;        
        }
//            else
//        {
//            cout << "outside range" << endl;
//        }

//      cout << "enter the tens place" << endl;

//      cin >> tens;

    if (tens == 1)  //if for tens digit 
        {
            cout << "X"  ; 
        }
        else if (tens == 2)
        {
            cout << "XX"  ; 
        }
        else if (tens == 3)
        {
            cout << "XXX"  ; 
        }
        else if (tens == 4)
        {
             cout << "XL"  ;        
        }
        else if (tens == 5)
        {
            cout << "L"  ;   
        }
        else if (tens == 6)
        {
            cout << "LX"  ; 
        }
        else if (tens == 7)
        {
            cout << "LXX"  ; 
        }
        else if (tens == 8)
        {
            cout << "LXXX"  ; 
        }
        else if (tens == 9)
        {
             cout << "XC"  ;        
        }
//        else
//        {
//            cout << "outside range" << endl;
//        }

//    cout << "enter the ones place" << endl;

//    cin >> ones;

    if (ones == 1) //if for ones digit 
        {
            cout << "I" << endl; 
        }
        else if (ones == 2)
        {
            cout << "II" << endl; 
        }
        else if (ones == 3)
        {
            cout << "III" << endl; 
        }
        else if (ones == 4)
        {
             cout << "IV" << endl;        
        }
        else if (ones == 5)
        {
            cout << "V" << endl;   
        }
        else if (ones == 6)
        {
            cout << "VI" << endl; 
        }
        else if (ones == 7)
        {
            cout << "VII" << endl; 
        }
        else if (ones == 8)
        {
            cout << "VIII" << endl; 
        }
        else if (ones == 9)
        {
             cout << "IX" << endl;        
        }
//         else
//        {
//            cout << "outside range" << endl;
//        }
      
/*    if (thousands >= 1 and thousands <= 9 and hundreds >= 1 and hundreds <= 9 and tens >= 1 and tens <= 9 and ones >= 1 and ones <= 9)
       {
         cout << "which is equal to" << endl; //text before print int
 
         cout << thousands;

         cout << hundreds;

         cout << tens;

         cout << ones << endl;
       }
*/
    }
/*  else if (roman == 0)        
    {
           cout << "nulla" << endl;  
    }
*/ 
    else
    {
           cout << "invalid entry or outside number range" << endl;
           cout << "please try again" << endl; 
    }
  
    return 0;
}
