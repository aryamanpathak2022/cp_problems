#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        double s1;
        int p1_x,p1_y,p2_x,p2_y,p3_x,p3_y,p4_x,p4_y;
        cin>>p1_x>>p1_y>>p2_x>>p2_y>>p3_x>>p3_y>>p4_x>>p4_y;
        // s1=sqrt(pow((p1_x-p2_x),2)+pow((p1_y-p2_y),2));
        // s2=sqrt(pow((p2_x-p3_x),2)+pow((p2_y-p3_y),2));
        // s3=sqrt(pow((p3_x-p4_x),2)+pow((p3_y-p4_y),2));
        // s4=sqrt(pow((p4_x-p1_x),2)+pow((p4_y-p1_y),2));
        int ans;
        if(p1_x==p2_x)
        {
           ans=pow((p1_x-p2_x),2)+pow((p1_y-p2_y),2);


        }
        else if(p1_x==p3_x)
        {
           ans=(pow((p1_x-p3_x),2)+pow((p1_y-p3_y),2));
        }
        else if(p1_x==p4_x)
        {
           ans=(pow((p1_x-p4_x),2)+pow((p1_y-p4_y),2));
        }
        else if(p2_x==p3_x)
        {
           ans=(pow((p2_x-p3_x),2)+pow((p2_y-p3_y),2));
        }
        else if(p2_x==p4_x)
        {
           ans=(pow((p2_x-p4_x),2)+pow((p2_y-p4_y),2));
        }
        else if(p3_x==p4_x)
        {
           ans=(pow((p3_x-p4_x),2)+pow((p3_y-p4_y),2));
        }
        else
        {
           ans=(pow((p1_x-p2_x),2)+pow((p1_y-p2_y),2));
        }
        printf("%d\n",ans);
        
    
}
}