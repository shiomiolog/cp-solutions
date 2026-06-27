#include <atcoder/dsu>
#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int e = 0;
    int w = 0;

    for (int i = 0; i < S.length() + 1; i++)
    {
        if (S[i] == 'E')
        {
            e++;
        }
        else if (S[i] == 'W')
        {
            w++;
        }
    }

    if (e > w)
    {
        cout << "East" << endl;
    }
    else
    {
        cout << "West" << endl;
    }
}