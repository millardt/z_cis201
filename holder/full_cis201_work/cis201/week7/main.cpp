#include<iostream>
#include<cmath>

using namespace std;

void scope_test(int x);

// int y = 30; // dont do this

int main ()

//int y =30; bad form

//file scope - global scope
{
//local scope
    int x = 20;
    int y = 30;

    scope_test(x);
    
    return 0;
}

void scope_test(int x)
{
    x = 10;
    int y = 10;
    cout << x << endl;
    cout << y << endl;
//    cout << ::y << endl; //horrible idea to use this
}
