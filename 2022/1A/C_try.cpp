#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int e,w;
        cin>>e>>w;
        // 1-w
        // e lines
        // j items => jth weight how many times !
        // 4,o
        int A[e][w];
        int gsum = 0;
        int sumi = 0;
        for(int i=0;i<e;i++){
            sumi = 0;
            for(int j=0;j<w;j++){
                cin>>A[i][j];
                sumi+=A[i][j];
            }
            cout<<sumi<<" ";
            gsum += sumi;
        }
        cout<<sumi<<" ";
        gsum+=sumi;
        cout<<":"<<gsum<<endl;
        // 1 1
        for(int i=0;i<e-1;i++){
            // sumi = 0;
            for(int j=0;j<w;j++){
                int diff = A[i+1][j]-A[i][j];
                
            }
        }


    }
}
