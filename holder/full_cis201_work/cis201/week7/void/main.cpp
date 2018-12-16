#include<iostream>
#include<cmath>

using namespace std;

void get_int(int &x);
void print_string(const string &s);


int main ()
{
/*
    int a=5;
    cout << "a before get_int :" << a << endl; 
    cout << "enter value :";
    get_int(a);
    cout << "a after get_int :" << a << endl;

  return 0;
}*/
string s = "World";

print_string("Hello");

return 0;
}

void print_string(const string s)
{
    cout << s << endl;
}
    void get_int(int &x)
{
    cin >> x;
}

