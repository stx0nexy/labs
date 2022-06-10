#include <iostream>
#include <string.h>
using namespace std;
int main()
{
        char words[]= "Techniques which are used to win customers include coupons,\n samples, money back, competitions etc. Many of these techniques are over a hundred years old. \n";
        cout << words;
        char iskl[13];
        cout << "Enter Leter :\n";
        gets_s(iskl);
        int counter = 0, i = 0, j = 0;
        int startwords, endwords;
        int len = strlen(words);

        for (i = 0; words[i];)
        {
            while (words[i] == ' ') i++;
            startwords = i;
            while (words[i] != ' ' && words[i] != '\0') i++;
            while (words[i] == ' ') i++;
            endwords = i;
            for (j = 0; iskl[j]; j++)
            {
                if (words[startwords] == iskl[j])
                {
                    memmove(&words[startwords], &words[endwords], len - endwords + 1);
                    i -= endwords - startwords;
                    len -= endwords - startwords;
                    break;
                }
            }
        }
    
    cout << "Line view after deleting words:\n";
    puts(words);

    return 0;
}
