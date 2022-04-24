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
        // int mini[n];
        vector<int> mini(n,INT_MAX);
        vector<int> maxi(n,0);

        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                cin>>A[i][j];
                if(A[i][j]<mini[i]){
                    mini[i]=A[i][j];
                }
                if(A[i][j]>maxi[i]){
                    maxi[i]=A[i][j];
                }
            }


            sort(A[i],A[i]+p);
            // if(i%2==0){
            //     reverse(A[i],A[i]+p);
            // }
        }
        // . . 
        // desc. asc
        // asc desc
        // asc asc
        // desc desc.
        /*
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                cout<<A[i][j]<<" ";
            }
        }
        */

        // choose 0th to be asc.
        long long ans1 = 0,ans2 = 0;

        int order = 1;// asc

        for(int i=0;i<n-1;i++){
            if(order == 1 && abs(maxi[i]-mini[i+1])>abs(maxi[i]-maxi[i+1])){
                // maxi of 2nd set is closer to mini[i] than it's min
                reverse(A[i+1],A[i+1]+p);
                // desc. cause maxi closer.
                order = -1;

            }
            // else if(order==1){
            //     order = 1;
            // }
            else if(order==-1 && abs(mini[i]-mini[i+1])>abs(mini[i]-maxi[i+1])){
                // desc.
                // maxi 2nd is closer.
                reverse(A[i+1],A[i+1]+p);
                order= -1;
            }
            else if(order==-1){
                // reverse(A[i+1],A[i+1]+p);
                // order = -1;
                order = 1;
            }
            // cout<<order<<":";

        }

        // long long ans1 = 0;
        long long val = 0;
        for(int i=0;i<n;i++){

            for(int j=0;j<p;j++){
                // cin>>A[i][j];
                // if(j==0 && i!=0){
                //     // i==1
                //     // diff val than 0
                //     presses += abs(A[i][j]-val);
                // }
                ans1 += abs(A[i][j]-val);
                val = A[i][j];
            }

            // sort(A[i],A[i]+p);
        }
        // ans = presses;
        /*
        cout<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                cout<<A[i][j]<<" ";
            }
            cout<<"::";
        }
        */

        for(int i=0;i<n;i++){
            sort(A[i],A[i]+p);
            // if(i%2==0){
            //     reverse(A[i],A[i]+p);
            // }
        }


        // desc.
        order = -1;
        reverse(A[0],A[0]+p);

        for(int i=0;i<n-1;i++){
            if(order == 1 && abs(maxi[i]-mini[i+1])>abs(maxi[i]-maxi[i+1])){
                // maxi of 2nd set is closer to mini[i] than it's min
                reverse(A[i+1],A[i+1]+p);
                // desc. cause maxi closer.
                order = -1;

            }
            // else if(order==1){
            //     order = 1;
            // }
            else if(order==-1 && abs(mini[i]-mini[i+1])>abs(mini[i]-maxi[i+1])){
                // desc.
                // maxi 2nd is closer.
                reverse(A[i+1],A[i+1]+p);
                order= -1;
            }
        
            else if(order==-1){
                order = 1;
            }
            

        }


        // for(int i=0;i<n-1;i++){
        //     if(abs(mini[i]-mini[i+1])>abs(mini[i]-maxi[i+1])){
        //         // maxi of 2nd set is closer to mini[i] than it's min
        //         reverse(A[i+1],A[i+1]+p);
        //         // desc.

        //     }
        //     else{
        //         // asc.
        //         // 
        //     }

        //     // for(int j=0;j<p;j++){
        //     //     if()   
        //     // }
        // }

        // long long presses = 0;
        val = 0;
        for(int i=0;i<n;i++){

            for(int j=0;j<p;j++){
                // cin>>A[i][j];
                // if(j==0 && i!=0){
                //     // i==1
                //     // diff val than 0
                //     presses += abs(A[i][j]-val);
                // }
                ans2 += abs(A[i][j]-val);
                val = A[i][j];
            }

            // sort(A[i],A[i]+p);
        }
        // ans = presses;
        // 
        // sort()
        // switch from 1st customer to second .
        // a. -> b-c
        // (b-a) => minimize.
        //.       -  -  
        //    -         -
        // -                -
        // -
        //.  _
        //.    _
        //  p p p p p p       
        //  assuming that the larger portions 
        // are closer
        ///                 ----
        //                          ---
        //.       ---
        //.   ---
        // --
        ans = min(ans1,ans2);
        // cout<<ans1<<" "<<ans2<<endl;
        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}
