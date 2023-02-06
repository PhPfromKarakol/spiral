// solved by __abdykerimov__

#include <bits/stdc++.h>

#define int long long
#define all(s) s.begin(), s.end()
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

using namespace std;

main()
{
    int num;
    cin >> num;
    int const n = num;
    int arr[n][n];
    int i = 0, j, k = 0, p = 1;

while (i < n * n)
{
    k++;
    for (j = k - 1; j < n - k + 1; j++)
    {
        arr[k - 1][j] = p++;
        i++;
    }
    for (j = k; j < n - k + 1; j++)
    {
        arr[j][n - k] = p++;
        i++;
    }
    for (j = n - k - 1; j >= k - 1; j--)
    {
        arr[n - k][j] = p++;
        i++;
    }

    for (j = n - k - 1; j >= k; j--)
    {
        arr[j][k - 1] = p++;
        i++;
    }

 }

for (int t = 0; t < n; t++)
{
    for (int q = 0; q < n   ; q++)
    {
        cout << setw(4) << arr[t][q];
    }
    cout << endl;
}

}
