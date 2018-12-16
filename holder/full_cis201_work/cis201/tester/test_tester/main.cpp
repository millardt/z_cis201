#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()

{
int cnt = 0;

int myarray[4][5];

for (int i = 0; i < 5; i++)

{

   for (int j = 0; j < 4; j++)

      {

            myarray[j][i] = cnt;

                  cnt++;

                     }

                     }
cout << myarray[1][2];
            return 0;

            }
