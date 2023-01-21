#include<iostream>
#include<list>
#include<array>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    int l1[5];

    for(int i=0;i<5;i++)
    {
        cin>>l1[i];
    }
    list<int> l2;
    l2.assign(l1,l1+5);

    for(auto it=l2.begin();it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

}