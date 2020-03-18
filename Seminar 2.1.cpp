#include <fstream>
#include <string>
#include <iostream>
using namespace std;

char* strfind(const char* s, const char* f)
{
    bool gf = true;
    int cs, cf;
    cf = strlen(f);
    cs = strlen(s);
    int i = 0;
    while (i < cf - cs)
    {
        if (s[0] == f[i])
        {
            i++;
            int j = 1;
            while ((s[j] == f[i]) and (i<cf) and (j<cs))
            {
                i++;
                j++;
            }
            if (j == cs)
                return (char *) f + i - cs;
        }
        else
            i++;
    }
    return NULL;
}

int main()
{
    char s[100];
    char text[100];
    cin >> text;
    cin >> s;
    char* t=strfind(s, text);
    if (t != NULL)
        cout << t << endl;
    else
        cout << "not found\n";
}