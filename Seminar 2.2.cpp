#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSorta(int x[],int y[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break 
        if (swapped == false)
            break;
    }
}

void bubbleSortb(int x[], int y[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (x[j] < x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break 
        if (swapped == false)
            break;
    }
}

int main()
{
    struct MyStruct
    {
        bool f1;
        char f2;
        int f3;
        long f4;
        double f5;
        long double f6;
    };
    MyStruct a;
    cout << sizeof(a);

    int x[6];
    x[0] = sizeof(a.f1);
    x[1] = sizeof(a.f2);
    x[2] = sizeof(a.f3)
    x[3] = sizeof(a.f4);
    x[4] = sizeof(a.f5);
    x[5] = sizeof(a.f6);
    int y[] = { 1,2,3,4,5,6 };
    char* z[] = { "bool", "char","int","long int","double","long double" };
    cout << "a/b";
    char a;
    cin >> a;
    if (a == 'a')
    {
        bubbleSorta(x, y, 6);
    }
    else
    {
        bubbleSortb(x, y, 6);
    }
    for (int i = 0; i < 6; ++i)
    {
        cout << z[y[i]] << ' ' << x[i] << '/n';
    }
      cout << sizeof(a);
}
