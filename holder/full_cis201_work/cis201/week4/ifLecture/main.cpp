#include <iostream>
#include <string>

using namespace std;

int main()
{
    int quantity = 0;

    cout << "Enter Quantity: \n";
    cin >> quantity;

    if (quantity == 10)
    {
        cout << "the quantity is equal to 10 \n";
    }

    else if (quantity > 10)
    
    {
        cout << "Quantity is greater than 10 \n";
    }

    else
    
    {
        cout << "Quantity must be less than 10 \n";
    }
    return 0;
}
