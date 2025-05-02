#include<iostream>
using namespace std;

int palid(int v[],int st, int dr){
    int  mij = (st+dr)/2;
    int cnt1,cnt2;
    cnt1 = 0;
    cnt2 = 0;
    if(st==dr){
        int cop = v[st], pal=0;
        while(cop!=0)
        {
            pal = pal*10+cop%10;
            cop /= 10;
        }
        if(pal == v[st])
            return 1;
        else
            return 0;
    }
    else{
        cnt1 += palid(v,st,mij);
        cnt2 += palid(v,mij+1,dr); 
    }
    return cnt1+cnt2;
}


int main(){
    int n,cnt,i;
    cin>>n;
    int v[100];
    for(i=0;i<n;i++)
        cin>>v[i];
    
    cnt = palid(v,0,n-1);
    cout<<cnt;
    

}