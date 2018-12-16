#include<iostream>
#include<cassert>
#include<string>
#include<cmath>

/*
try putting in the missing code after teacher uploads this into repository
sleep
*/

using namespace std;
/**
+------+
|      |
|      |
|      |
|      |
+------+


*/


class Box
{

public:
    Box(int width,int height); //constructor with parameters
    void display();
    void set_width(int width);
    void set_height(height);
    int get_width();/////////////////
    int get_height();
    

private:
    int m_width,m_height;
};

Box::Box(int width,int height)
{
    set_width(width);
    set_height(height);    
}
void Box::display()
{
    cout << "width=" << m_witdh<< endl;
    cout << "height=" << m_height<< endl;
    cout << "Box.display()" << endl;
}

void Box::set_width(int width)
{
    assert(width > 0);
    m_width = width;
}

void Box::set_height(int height)
{
    assert(height > 0);
    m_height = height;
}

int Box::get_width()
{
    return m_width;
}

int Box::get_height()
{
    return m_height;
}

void Box::set_height(int height)
{
    m_height = height;
}

int Box::get_width()
{
    return m_width
}

void Box::display()
{
    draw_line("+", "--");



cout << "+"; 
  for(int i=0;i<m_width-1;i++)
    cout << "-";
  cout << "+"; 

for(int row=0;row<m_width-1;row++)
  {
  cout << "-";
  cout << "+" << endl; 
` }


for(int i=0;i<m_width-1;i++)
    cout << "|";
  cout << "+" << endl; 


for(int i=0;i<m_width-1;i++)
    cout << "-";
  cout << "+" << endl; 

cout << "+" << endl; 
}

void Box::drawline(string corner,string mid)
{
  cout << corner; 
  for(int i=0;i<m_width-1;i++)
    cout << mid;
  cout << corner << endl; 


}

int main ()
{
    Box box(6,6);
    box.display();
    
    Box box(6,6).display();
    Box box(2,2)display();
    Box box(10,10)display();

    box.set_width(-7);
    box.set_height(-7);
    
    box.display()

  return 0;
}
