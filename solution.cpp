#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    vector<char> inp;
    int x,y,x;
    cin>>x>>y>>z;
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>inp[i];
    }
    
    char initdir = "";
    cin>>initdir;
    
    
    for(int i=0; i<n; i++){
        if(initdir[i]=='f'){
            x++;
        }
        else if(initdir[i]=='b'){
            x++;
        }
        else if(initdir[i]=='l'){
            y++;
        }
        else if(initdir[i]=='r'){
            y++;
        }
        else if(initdir[i]==u){
            z++;
        }
        else z++;
    }
    
    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<"N";
    return 0;
}
