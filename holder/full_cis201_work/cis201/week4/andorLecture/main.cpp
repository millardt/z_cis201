#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int testval = 0;
    
    if (( 10 <= testval) && (testval <= 100 ))
    {
        cout << "the test is between 10 and 100";
    } else
    {
        cout << "the test was not between 10 and 100 \n";
    }
    return 0;
}
