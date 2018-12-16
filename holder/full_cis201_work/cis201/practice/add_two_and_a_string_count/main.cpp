/*
File name: add_two / string_counter
Description: this is just some practice by trying to recreate the example from professor's
Also this program work: yay :D
add_two function
Author: Troy Millard
Email: naglet@student.vvc.edu
*/

#include<iostream>
#include<string>

using namespace std;

int add_two(int a, int b)
{
    int result = a + b;
    return result;
}

int subtract_two(int a, int b)
{
    int result = a - b;
    return result;
}

int a_count (string s)
{
    int count = 0;
    cout << s << endl;
    for(int i=0;i<s.length();i++)
    {
        cout << "at i=" << "the string gets = " << s.at(i) << endl;
        if(s.at(i) == 'a' || s.at(i) == 'A')
            count += 1;
    }
    return count;
}

int main ()

{
    cout << "this is a add_two and a string_counter" << endl;
 
    string s = "aaaaaAAAAkldsjgg"; //9 a
    cout << "and there are :" << a_count(s) << "a"<< endl;

    cout << add_two(1,2) << endl;
    cout << subtract_two(3,1) <<endl;

return 0;
}
