#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,p;
        cin>>n>>p;
        int A[n][p];
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                cin>>A[i][j];
            }
            sort(A[i],A[i]+p);
            if(i%2==0){
                reverse(A[i],A[i]+p);
            }
        }
        long long presses = 0;
        int val = 0;
        for(int i=0;i<n;i++){

            for(int j=0;j<p;j++){
                // cin>>A[i][j];
                // if(j==0 && i!=0){
                //     // i==1
                //     // diff val than 0
                //     presses += abs(A[i][j]-val);
                // }
                presses += abs(A[i][j]-val);
                val = A[i][j];
            }

            // sort(A[i],A[i]+p);
        }
        ans = presses;
        // 
        // sort()
        // switch from 1st customer to second .
        // a. -> b-c
        // (b-a) => minimize.
        //.       -  -  
        //    -         -
        // -                -
        //  p p p p p p       
        //     

        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}
