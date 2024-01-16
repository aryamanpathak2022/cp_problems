#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count1=0;
    int count2=0;
    int len=str.length();
    for(int i=0;i<len-1;i++){
        if((str[i]=='1')&&(str[i+1]=='1')){
            count1++;
            count2=0;
        }
        else if ((str[i]=='0')&&(str[i+1]=='1')){
            count1++;
            count2=0;
        }
        else if ((str[i]=='0')&&(str[i+1]=='0')){
            count2++;
            count1=0;
        }
        else if ((str[i]=='1')&&(str[i+1]=='0')){
            count2++;
            count1=0;
        }
        if(count1>=7||count2>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}