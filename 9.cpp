#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    list <int>l;
    l.assign({3,5,5,6,3,6,7});
    
   for(auto it=l.begin();it!=l.end();it++)
   {
        int temp=*it;
        it++;
        while(*it==temp)
        {
            l.erase(it);
            it++;
        }
        --it;
   }
  

    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"hello world"<<endl;
    
    return 0;
}