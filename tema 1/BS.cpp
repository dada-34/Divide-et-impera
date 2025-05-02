#include <iostream>
using namespace std;

int BS(int v[100], int st, int dr, int x)
{
    int mij = (dr + st) / 2;
    int p = -1;
    int p1, p2;
    if (st == dr)
    {
        if (v[st] == x)
            p = dr;
    }

    else
    {
        p1 = BS(v, st, mij, x);
        p2 = BS(v, mij + 1, dr, x);
        if (p1 != -1 && p2 != -1)
        {
            if (p1 > p2)
                p = p2;
            else
                p = p1;
        }
        else if (p1 != -1)
            p = p1;
        else
            p = p2;
    }
    return p;
}
int main()
{
    int v[100], n, x, px;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> x;
    px = BS(v, 0, n - 1, x);
    cout << px << endl;
}
