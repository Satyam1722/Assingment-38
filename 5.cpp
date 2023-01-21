#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int>l;
    int n;
    cout<<"how many element you want to understand : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        l.push_back(t);
    }
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}