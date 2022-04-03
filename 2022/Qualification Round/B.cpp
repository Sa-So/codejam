#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int S[n];
        int maxi = 0;

        for(int i=0;i<n;i++){
            cin>>S[i];
            maxi=max(S[i],maxi);
        }
        sort(S,S+n);
        int ans = n;
        int k = 1;
        for(int i=0;i<n;i++){
            while(S[i]<k && i<n){
                ans--;
                i++;
            }
            k++;
        }
        // int ans=0;

        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}
/*
4
5
2 2 2 2 3
6
5 4 5 4 4 4
10
*/
/*
Case #1: 3
Case #2: 5
Case #3: 9
Case #4: 1
*/
