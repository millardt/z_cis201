lude<iostream>

using namespace std;

int main ()

{
  
  double size, volume=16.0;
  size = sqrt(sqrt(volume)) / 3;
  cout.setf(ios::fixed)
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << size;
  
  return 0;
  }
