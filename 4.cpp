#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int>l;
    l.assign({3,5,6,3,6});
   
    for(auto it=l.rbegin();it!=l.rend();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}