#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        string s;
        cin>>s;
        string ans="";
        int n=s.length();

        // // for(int i=0;i<n;i++){

        // // }
        // // int maxi = 0;
        // // if(s[i]==s[i-1]) => prev diff element !

        // int prev = 0;
        // char prevc=s[n-1]; 
        // ans+=prevc;

        // for(int i=n-2;i>0;i--){
        //     // ans+=s[i];
        //     if(s[i]<s[i+1]){
        //         ans+=s[i];
        //         ans+=s[i];
        //         prevc=s[i];
        //     }
        //     else if(s[i]==s[i+1]){
        //         if(s[i]<prevc){
        //             ans+=s[i];
        //             ans+=s[i];
        //         }
        //     }
        //     // if(s[i]!=prevc){
        //     //     maxi=s[i];
        //     // }
        //     // if(maxi>s[i-1]-'A'){
        //     //     ans+=s[i-1];
                
        //     // }
            // if(i==1){
            //         ans+=s[i-1];
            // }
        // }

        
        // int flag = 0;
        // bool A[n];
        vector<bool> A(n,false);

        for(int i=n-1;i>0;i--){
            ans+=s[i];
            if(s[i]>s[i-1]){
                ans+=s[i-1];
                A[i-1]=true;
            }
            else if(s[i]==s[i-1]){
                if(A[i]){
                    ans+=s[i-1];
                    A[i-1]=true;
                }
            }
            
        }
        ans+=s[0];
        reverse(ans.begin(),ans.end());

        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}
