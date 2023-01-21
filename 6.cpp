#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int>l;
    l.assign({3,5,6,3,6});
    
    cout<<"first element is : "<<l.front()<<endl;
    cout<<"last element is : "<<l.back()<<endl;
    
    return 0;
}