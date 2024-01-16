#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test-->0)
    {
       int n;
    cin>>n;
    string real;
    string required;
    cin>>real;
    cin>>required;
    int arr[n];
   
    for(int i=0;i<n;i++)
    {
       if(real[i]==required[i])
       {
              arr[i]=0;
             
         }
         else
         {
              arr[i]=1;
         
       }

    }
    int number_of_1s=0;
    int number_of_0s=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1 && real[i]=='1')
        {
            number_of_1s++;
        }
        else if(arr[i]==1 && real[i]=='0')
        {
            number_of_0s++;


        }

    }
    cout<<max(number_of_0s,number_of_1s)<<endl;
    }
    
   
}