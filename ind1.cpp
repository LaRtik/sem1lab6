#include <iostream>

using namespace std;

int cnt[257];

int main()
{
    int n;
    cout << "Enter the number of elements of string: ";
    cin >> n;
    cout << "Enter the elements of the string: ";
    char arr[n];
    cin >> arr;

    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }

    cout << "Number of [ brackets - " <<  cnt['['] << endl;
    cout << "Number of ] brackets - " <<  cnt[']'] << endl;
    cout << "Number of ( brackets - " <<  cnt['('] << endl;
    cout << "Number of ) brackets - " <<  cnt[')'] << endl;
    cout << "Number of { brackets - " <<  cnt['{'] << endl;
    cout << "Number of } brackets - " <<  cnt['}'] << endl;

    return 0;
}
