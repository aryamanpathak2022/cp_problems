#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
       string last;
       int num_seq;
       unordered_map<int,int> already_considered;

        // Your code for processing each test case goes here
        for(int i=0;i<n;i++)
        {
            if(strcomp(s[i],last))
            {
            if (already_counted.find(s[i]) != already_counted.end()) 
            {
                continue       
            }
            else if(already_counted.find(last) != already_counted.end())
            {
                num_seq++;
                already_considered.insert(s[i],1);
            }
            else{
                num_seq++;
                already_considered.insert(s[i],1);
                num_seq++;
                 already_considered.insert(last,1);

            }
            else{
            
            }
            if(s[i]=='1')
            {
                last="1";
            }
            else
            {
                last="0";
            }


        }

        // cout << min_ops << " " << num_seq % MOD << endl;
        cout<<num_seq % MOD << endl;
    }
    return 0;
}
