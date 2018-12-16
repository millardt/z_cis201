include<iostream>
include<cctype>

using namespace sd;

int main()
{
    char response;

    do
    {
        cout << "Do you want to continue? (Y/N)";
        cin >> response;
        response = toupper(response);
        if(response != 'Y' && response != 'N')
            cout <<"invalid response";
    }
    while (response == 'Y' || response != 'N');

    cout;
    return 0;
}
