#include <iostream>
#include <cstring>

using namespace std;

bool isletter(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}


int main()
{
    char text[1000000];
    cin.getline(text, 1000000); // using getline to enter strings with spaces
    int n = strlen(text);
    char words[500][500];
    int words_size = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || !isletter(text[i - 1])) && isletter(text[i]))
        {
            char word[60];
            for (int j=0; j<60; j++) word[j] = 0;
            int word_size = 0;

            for (; i < n; i++)
            {
                word[word_size++] = text[i];
                if (i == n - 1 || !isletter(text[i + 1]))
                {
                    break;
                }
            }

            if (word[0] == word[word_size - 1])
            {
                for (int j=0; j<word_size; j++)
                {
                    words[words_size][j] = word[j];
                }
                words_size++;
            }
        }
    }

    char *ans[100000];
    int ans_size = 0;

    for (int i = 0; i < words_size; i++)
    {
        bool ok = true;
        for (int j = 0; j < ans_size; j++)
        {
            if (!strcmp(words[i], ans[j]))
            {
                ok = false;
                break;
            }
        }
        if (ok) ans[ans_size++] = words[i];
    }

    if (ans_size == 0) cout << "The are no words with equal first and last letters.";
    else cout << "There are " << ans_size << " unique word(s) with equal first and last letters: " << endl;

    for (int i = 0; i < ans_size; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
