#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{

    int a;
    cin>>a;
    while(a-->0)
    {
        int b,c;
        cin>>b>>c;
        if(b-c==1 || b-c==-1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(gcd(b,c)!=1)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int total=0;
            while(gcd(b,c)==1)
            {
                total++;
                b++;
                c++;
            }
            cout<<total<<endl;
            
        }


    }
}