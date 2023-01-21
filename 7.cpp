#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int>l;
    l.assign({3,5,6,3,6});
    
    l.push_back(99);
    l.push_front(1000);

    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}