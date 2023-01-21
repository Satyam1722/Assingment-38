#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int>l;
    l.assign({3,5,6,3,6,7});
    
    auto in=l.end();
    in--;
    for(auto it=l.begin();it!=in;it++) 
    {
        auto ij=it;
        ij++;
        while(ij!=l.end())
        {
            if(*it==*ij)
            {
                l.erase(ij);
                ij++;
            }
        }
    }

    for(auto it=l.begin();it!=l.end();it=it++)
    {
        cout<<*it<<" ";
    }

    int n;
    cout<<endl<<"enter what you want to remove : "<<endl;
    cin>>n;

    for(auto it=l.begin();it!=l.end();it++)
    {
        if(*it==n)
        {
            l.erase(it);
            break;
        }
    }

    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}