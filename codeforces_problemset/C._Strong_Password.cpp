#include <bits/stdc++.h>
using namespace std;

int binary_search(string s,int n,string k)
{
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(s[mid],k))
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;

}

int main() {
    int test_cases;
    cin >> test_cases;
    string range_1,range_2;
    string database;
    int pass_length;
    for(int i=0;i++i<n)
    {
    
    cin >> database;
   
    cin>>pass_length
    cin>>range_1>>range_2;
    for(int m=0;m<len(range_1);m++)
    {
        

    }
    
    }
    return 0;
}
