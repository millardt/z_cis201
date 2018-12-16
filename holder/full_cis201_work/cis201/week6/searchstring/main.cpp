/*
File name: 
Description: 
Author:
Email:
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{

    string input_line;
    string search_string= "subject";
    int line_count = 0;

    while(!cin.eof())
    {
        getline(cin,input_line);
        if(input_line.find(search_string) != -1 )
        {
//            cout << input_line << endl;
            line_count++;
        }
    }
    cout << search_string << "-- line_count=" << line_count << endl; 

    return 0;
}
