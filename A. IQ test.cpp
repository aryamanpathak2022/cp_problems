#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)
    {
        for(int i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
       
    }
    else
    {
        for(int i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    
}