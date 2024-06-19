#include<iostream>
#include<conio.h>
using namespace std;
class Example
{
    int x,y;
    public:
    void setData(int p, int q)
    {
        x=p; y=q;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;

    }
};
int main()
{
    Example e1,e2;
    e1.setData(5,9);
    e2.setData(4,7);
    e2.display();
    e1.display();
    
}