#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


int main()
{
    srand(time(0));
    // declare counters
    int one=0,two=0,three=0,four=0,five=0,six=0;

    for(int i=0;i<MAXROLLS>;i++);
   {
    int die = rand() % SIDES + SHIFT;
    if(die == 1)
    {
        one++;
    }
    else if(die == 2)
    {
        two++;
    }
    else if(die == 3)
    {
        three++;
    }
    else if(die == 4)
    {
        four++;
    }else if(die == 5)
    {
        five++;
    }else if(die == 6)
    {
        six++;
    }else
    {
        cout << "theres a problem with the random number" << endl;
    }
   }

   cout << "% of one rolls" << one/ static_cast<double>(MAXROLLS) << endl;
   cout << "% of two rolls" << two/ static_cast<double>(MAXROLLS) << endl;
   cout << "% of three rolls" << three/ static_cast<double>(MAXROLLS) << endl;
   cout << "% of four rolls" << four/ static_cast<double>(MAXROLLS) << endl;
   cout << "% of one rolls" << five/ static_cast<double>(MAXROLLS) << endl;
   cout << "% of one rolls" << six/ static_cast<double>(MAXROLLS) << endl;
 
//    int rnumber = rand() % 6+1; //range set to 6 "0-5" ex dice roll

//    cout << rnumber << endl;

    return 0;

}
