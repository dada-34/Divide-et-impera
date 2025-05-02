#include <iostream>
using namespace std;

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
    int v[100], n, i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];

    sortvec(v, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}