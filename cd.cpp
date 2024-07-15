#include<iostream>
using namespace std;
class item
{
    int m,n;
    public:
    item()
    {
        m=100;
        n=20;
    }
 void put();

};
void item ::put()
{
    cout<<m<<n;
}
int main()
{
    item t;
    t.put();
   
}
