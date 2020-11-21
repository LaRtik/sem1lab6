#include <iostream>
#include <cstring>

using namespace std;


int fact(int n)
{
    int ans = 1;
    for (int i=2; i<=n; i++)
    {
        ans*=i;
    }
    return ans;
}

int main()
{
    char str[1000000];
    cin >> str;
    int n = strlen(str);

    int cnt[257];

    for (int i=0; i<256; i++)
    {
        cnt[i] = 0;
    }

    for (int i=0; i<n; i++)
    {
        cnt[str[i]]++;
    }

    int k = 1;


    for (int i=0; i<256; i++)
    {
        k*=fact(cnt[i]);
    }

    cout << fact(n) / k;

    return 0;
}
