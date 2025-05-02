#include <iostream>
#include<fstream>
using namespace std;
ifstream fin1("Criminali1");
ifstream fin2("Criminali2");

int BS(int v[], int st, int dr,int x)
{
   int mij =(st+dr)/2;
   int poz;
   if(st==dr)
   {
        return st;
   }
   else
   {
        if(v[mij] <= x){
            poz = BS(v,st,mij,x);
        }
        else{
            poz = BS(v,mij+1,dr,x);
        }
   }
   return poz;
}





void interclasare(int v[], int st1, int st2, int dr1, int dr2)
{
    int i = st1;
    int j = st2;
    int k = st1;
    int size = (dr2 - st2) + 1 + (dr1 - st1) + 1;
    int t[size];
    int l;
    for (k = 0; k < size; k++)
    {
        if (i > dr1)
        {
            t[k] = v[j];
            j++;
        }
        else if (j > dr2)
        {
            t[k] = v[i];
            i++;
        }
        else if (v[i] <= v[j])
        {
            t[k] = v[i];
            i++;
        }
        else
        {
            t[k] = v[j];
            j++;
        }
    }

    for (k = 0, l = st1; k < size; k++, l++)
    {
        v[l] = t[k];
    }
}

void sortvec(int v[], int st, int dr)
{
    int mij = (dr + st) / 2;
    if (st == dr)
    {
        return;
    }
    sortvec(v, st, mij);
    sortvec(v, mij + 1, dr);
    interclasare(v, st, mij + 1, mij, dr);
}
int main()
{
    int n, v[100], i, x;
    cout<<"Ce tag are criminalul MISS FAIRY?"<<endl;
    cin>>x;
    fin1 >> n;
    for (i = 0; i < n; i++)
    {
        fin1 >> v[i];
    }
    cout<<endl;
    cout<<endl;
    sortvec(v,0,n-1);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";

    cout<<endl;
    cout<<"Pozitia Criminalului este: "<<endl;
    int poz = BS(v,0,n-1,x);
    cout<<poz;
    
    
}