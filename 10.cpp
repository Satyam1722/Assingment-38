#include<list>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    list<int> l1,l2,l3;

    l1.push_back(3);
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(9);
    l1.push_back(78);

    l2.push_back(55);
    l2.push_back(5);
    l2.push_back(50);
    l2.push_back(787);
    l2.push_back(76);
    l2.push_back(38);

    for(auto it=l1.begin();it!=l1.end();it++)
    {
        l3.push_back(*it);
    }

    for(auto it=l2.begin();it!=l2.end();it++)
    {
        l3.push_back(*it);
    }

    for(auto it=l3.begin();it!=l3.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

}