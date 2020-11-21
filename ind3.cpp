#include <iostream>

using namespace std;

void fail()
{
    cout << "Strings are not anagrams.";
    exit(0);
}

int strlen(char *str)
{
    for (int i = 0; i < 1000000; i++)
    {
        if (str[i] == NULL) return i;
    }
    return 1000000;
}

int main()
{
    cout << "Enter the first string: ";
    char str[1000000];
    cin >> str;
    int n = strlen(str);

    cout << "Enter the second string: ";
    char str1[100000];
    cin >> str1;
    int m = strlen(str1);


    if (n != m)
    {
        fail();
    }

    int cnt[257];
    int cnt1[257];
    for (int i = 0; i < 256; i++)
    {
        cnt[i] = 0;
        cnt1[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cnt[str[i]]++;
        cnt1[str1[i]]++;
    }


    for (int i = 0; i < n; i++)
    {
        if (cnt[str[i]] != cnt1[str[i]])
        {
            fail();
        }
    }

    cout << "Strings are anagrams!";


    return 0;
}
