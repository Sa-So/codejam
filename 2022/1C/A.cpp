#include <bits/stdc++.h>
using namespace std;
int ans_find(vector<vector<int>>ch,string ans,string alpha,int &flag){
            while(true){
                string prev = ans;
                for(int i=0;i<26;i++){
                    for(int j=0;j<26;j++){
                        if(i==j && i==ans[ans.length()-1] && ch[i][j]>0){
                            for(int k=0;k<ch[i][j];k++) ans+=alpha[i]+alpha[j]; // hope
                            break;
                        }
                    }
                }
                for(int i=0;i<26;i++){
                    for(int j=0;j<26;j++){
                        if(i==j && i==ans[0] && ch[i][j]>0){
                            string ansi="";
                            for(int k=0;k<ch[i][j];k++) {
                                
                                ansi+=alpha[i]+alpha[j];
                            } // hope
                            ansi+=ans;
                            ans=ansi;
                            break;
                        }
                    }
                }
                int fl1 = 0 , fl2 = 0;
                for(int i=0;i<26;i++){
                    for(int j=0;j<26;j++){
                        if( fl1==1 && i==ans[ans.length()-1] && ch[i][j]>1){
                            flag=-1;
                            break;
                        }
                        else if(fl1==1 && i==ans[ans.length()-1] && ch[i][j]==1){
                            ans+=alpha[i]+alpha[j];
                            fl1=1;
                        }
                        else if(fl1==1 && j==ans[ans.length()-1] && ch[i][j]==1){
                            ans+=alpha[j]+alpha[i];
                            fl1=1;
                        }
                        if(fl2==0 && i==ans[0] && ch[i][j]>1){
                            flag=-1;
                            break;
                        }
                        else if(fl2==0 && i==ans[0] && ch[i][j]==1){
                            ans+=alpha[i]+alpha[j];
                            fl2=1;

                        }
                        else if(fl2==0 && j==ans[j] && ch[i][j]==1){
                            ans+=alpha[j]+alpha[i];
                            fl2=1;
                        }
                        if(fl1==1 && fl2==1){
                            break;
                        }
                    }
                    if(fl1==1 && fl2==1){
                        break;
                    }
                }
                if(ans==prev){
                    for(int i=0;i<26;i++){
                        for(int j=0;j<26;j++){
                            if(ch[i][j]>0){
                                return -1;
                            }
                        }
                    }
                    return 1;
                }
            }
        }
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    // while(t--){
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        string s[n];
        string ans="";
        string imp = "IMPOSSIBLE";
        //
        //
        // 2 strings that have the same letter & one more letter 
        // they will have to be aligned .
        // XXXB BXX
        
        // if a string consists of only 1 letter
        // XXB BBB BXX

        // BA AB => impossible
        // not possible ?
        // int count[n][26];


        // so the extreme strrings 
        // can has the letter that occurs in no other string , 2 or more letters
        // 1 letter => it is possible to have that letter in otherr strings
        // ZZZZZZ ZBX
        // ZZZA 

        vector< vector<int> > count(n,vector<int>(26,0));
        // string 
        // int ch[26][26];
        vector< vector<int> > ch(26,vector<int>(26,0));
        // vector< vector<int> > univ(26,vector<int>(26,0));
        vector<int> un(26,0);
        int flag = 1;

        for(int i=0;i<n;i++){
            cin>>s[i];
            // sort(s[i].begin(),s[i].end());
            ans += s[i];
            int len = s[i].length();
            ch[s[i][0]-'A'][s[i][len-1]-'A']++;
            // for(int j=0;j<s[i].length();j++){
            //     count[i][s[i][j]-'A']++;
            // }
            // JJJ
            // for()
            int st = 0 , en = len-1;
            for(int j=0;j<s[i].length()-1;j++){
                // count[i][s[i][j]-'A']++;
                // if(A)
                if(s[i][j]!=s[i][j+1]){
                    st=j+1;
                    break;
                }
            }
            for(int j=s[i].length()-1;j>=0;j--){
                // count[i][s[i][j]-'A']++;
                if(s[i][j]!=s[i][j-1]){
                    en=j-1;
                    break;
                }
            }

            for(int j=st;j<=en;j++){
                // count[i][s[i][j]-'A']++;
                if(un[s[i][j]-'A']>0){
                    // impossible.
                    flag = -1;
                }
                else{
                    un[s[i][j]-'A']++;
                }
            }
            un[s[i][0]-'A']++;
            un[s[i][len-1]-'A']++;

        }
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                // cout<<ch[i][j]<<" ";
                if(i==j){
                    // middle ones checked,
                    continue;
                }
                if(ch[i][j]>1){
                    flag=-1;
                }
                else if(ch[i][j]>0 && ch[j][i]>0){
                    // ab ba
                    flag=-1;
                }
            }
            // cout<<endl;
        }
        // cout<<ans<<endl;
        //.   ccc  xxxcc cccc ccc cccc cxxx
        // if a letter occurs in >=3 diff strings it cannot be at the ends.
        // & atleast 2 of those strings have more than 1 char.
        
        // AB => ch[0][0]=2 => AB is not in this
        // BA => 
        // ADB CDB=> impossible
        // ADB BDC


        //  XY
        // other strings i find any string starting with X/ ending with X > 1 & no string is XX
        //  XX
        
        // X => XY XZ  MX NX XX
        // 
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string an = "";
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i==j && ch[i][j]>0){
                    for(int k=0;k<ch[i][j];k++) an+=alpha[i]+alpha[j]; // hope

                    break;
                }
            }
        }
        // X => XY  NX 
        // AB
        // CD 
        // FE => EF

        // XR XQ => possible
       //.   ab 
        // impossible we r not traversing jam

        // jX XX xy
        // yx.   xy exists at the same time which is not possible.

        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i==an[0] && ch[i][j]>0){
                    if(ch[i][j]>2){
                        flag=-1;
                        break;
                    }
                    else if(ch[i][j]==1){
                        string ansi="" ;
                        ansi+= alpha[i]+alpha[j];
                        ansi += an;
                        an = ansi;
                    }
                    else if(an[0]==an[an.length()-1]){
                        string ansi="" ;
                        ansi+= alpha[i]+alpha[j];
                        ansi += an;
                        an = ansi;
                        an += alpha[i]+alpha[j];
                        break;// aage & piche ka ho gya.

                        // now we can't search for nx 2 xy s
                    }
                    // for(int k=0;k<ch[i][j];k++) an+=alpha[i]+alpha[j]; // hope
                    // break;
                }
                if(i==an[an.length()-1] && ch[i][j]>0){
                    if(ch[i][j]>2){
                        flag=-1;
                        break;
                    }
                    else if(ch[i][j]==1){
                        string ansi="" ;
                        ansi+= alpha[i]+alpha[j];
                        ansi += an;
                        an = ansi;
                    }
                    else if((an[0]==an[an.length()-1])){
                        string ansi="" ;
                        ansi+= alpha[i]+alpha[j];
                        ansi += an;
                        an = ansi;
                        an += alpha[i]+alpha[j];
                        break;
                        // now we can't search for nx 2 xy s
                    }
                    // for(int k=0;k<ch[i][j];k++) an+=alpha[i]+alpha[j]; // hope
                    // break;
                }
            }
        }
        // new start aur end.
        // start aur end ke => homegenous first.=> heter
        
        

        if(ans_find(ch,an,alpha,flag)==-1 || flag==-1){
            cout<<"Case #"<<tt<<": "<<imp<<endl;    
        }
        else
        cout<<"Case #"<<tt<<": "<<an<<endl;
        
    }
}
