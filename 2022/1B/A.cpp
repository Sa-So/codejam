#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int ans = 0;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int st = 0,en = n-1;
        int mini = 0;
        while(st<=en){
            // A[st]==A[en]
            // then prob.
            // 3 5. ,,, 4 3
            // 3 2 .... 1 3 
            // 3 4 .... 1 3
            if(A[st]>A[en]){
                
                if(A[en]>=mini)
                {    
                    ans++;
                    mini = A[en];
                }
                en--;
                // A[n-1]
            }
            else {
                
                if(A[st]>=mini)
                {    
                    ans++;
                    mini = A[st];
                }
                st++;
            }
            // cout<<st<<" "<<en<<endl;
        }
        
        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}
