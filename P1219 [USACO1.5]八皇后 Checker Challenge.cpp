//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n,cnt=0;
bool lie[20];
bool u[40];
bool v[40];
int a[20];
void pr(){
    for (int i = 1; i<=n; i++) {
        cout<<a[i]<<"  ";
    }
    printf("\n");
}
void dfs(int x){
    if(x>n){
        cnt++;
        if(cnt<4)pr();
        
        return;
    }
    for(int i = 1 ; i<=n; i++) {
        if(!lie[i]&&!u[x-i+n]&&!v[x+i]){
            lie[i] = 1;
            u[x-i+n] = 1;
            v[x+i] = 1;
            a[x] = i;
            dfs(x+1);
            lie[i] = 0;
            u[x-i+n] = 0;
            v[x+i] = 0;
        }
    }
}

int main(){
    cin>>n;
    dfs(1);
    cout<<cnt;
    return 0;
}
