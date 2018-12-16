#include <iostream>

using namespace std;

double slope_intercept(double m,double x,int b);

int main()
{
    for (double x = -2.0; x <= 2.0;x += 0.1);
    {
    cout << x
         << "/t"
         << slope_intercept(3/4.0,x,1) 
         << endl;
    }
   return 0;
}

double future_value(double m,double x,int b)
{
    return m * x + b;
}


