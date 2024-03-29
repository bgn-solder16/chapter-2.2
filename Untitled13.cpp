
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


/*task3

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter main string : ";
    cin>>s;
    int x;
    cout<<"Enter length : ";
    cin>>x;
    string y;
    int p;
    cout<<"Enter deleting position : ";
    cin>>p;
    for(int i=0;i<p-1;i++)
    {
        y[i]=s[i];
    }
    for(int i=p+x-1,j=p-1;i<s.size();i++,j++)
    {
        y[j]=s[i];
    }
    for(int i=0;i<s.size()-x+1;i++)
    {
        cout<<y[i];
    }
    cout<<endl;
    return 0;
}


task4

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
    for(int i=p+x.size()-1;i<s.size();i++)
    {
        y[i]=s[i];
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<y[i]<<" ";
    }
    return 0;
}*/
