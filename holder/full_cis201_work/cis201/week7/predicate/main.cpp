#include <iostream>
#include <cmath>

using namespace std;

bool is_even(int n);

int main()
{
    for (int n = 2;n < 10;n++);
   {
        if(is_even(n))
        cout << n << "is odd" << endl;
        else 

    }
   {
    return 0;
}

bool is_even(int n)
{
    return n % 2 == 0;
}
bool is_odd(int n)
{
    return ! is_even(n);
}

// SEVERALY UNFINISHED CODE
}


