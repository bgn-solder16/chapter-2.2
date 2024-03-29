#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter main string : ";
    cin>>s;
    string x;
    cout<<"Enter substring : ";
    cin>>x;
    string y;
    int p;
    cout<<"Enter position : ";
    cin>>p;
    for(int i=0;i<p;i++)
    {
        y[i]=s[i];
    }
    for(int i=p-1,j=0;i<p+x.size()-1,j<x.size();i++,j++)
    {
        y[i]=x[j];
    }
    for(int i=p+x.size()-1,j=p-1;i<s.size()+x.size(),j<s.size();i++,j++)
    {
        y[i]=s[j];
    }
    for(int i=0;i<s.size()+x.size();i++)
    {
        cout<<y[i]<<" ";
    }
    return 0;
}
