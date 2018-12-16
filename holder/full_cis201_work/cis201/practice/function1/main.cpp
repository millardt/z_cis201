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

int a_count(string s)
{
    int count = 0;
    cout << s << endl;
    for(int i=0;i<s.length();i++)
    {
        cout << "at i=" << i << " the character = " << s.at(i) << endl;
        if(s.at(i) == 'a' || s.at(i) == 'A')
            count += 1;
    }
    return count;
}

int main()
{
    string s = "AAAaaabbbccccc";
    cout << "number of a's is : " << a_count(s) << endl;

    return 0;
}
