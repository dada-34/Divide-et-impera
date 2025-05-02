#include <iostream>
using namespace std;

int valMax(int v[], int st, int dr)
{
    int mij = (st + dr) / 2;
    if (st == dr)
        return v[st];

    int max1 = valMax(v, st, mij);
    int max2 = valMax(v, mij + 1, dr);
    if (max1 > max2)
        return max1;
    return max2;
}

int main()
{
    int v[100], n, i;
    int max;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    max = valMax(v, 0, n - 1);
    cout << max << endl;
    return 0;
}