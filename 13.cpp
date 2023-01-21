#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    list<char> l1;

    l1.push_back('s');
    l1.push_back('a');
    l1.push_back('t');
    l1.push_back('y');
    l1.push_back('a');
    l1.push_back('m');



    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

}