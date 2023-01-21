#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    list<int> l1;

    l1.push_back(3);
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(9);
    l1.push_back(78);
    list<int> l2;
    l2.assign(l1.begin(),l1.end());

    for(auto it=l2.begin();it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

}