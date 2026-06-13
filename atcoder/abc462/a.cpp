#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string S, tmp;
    cin >> S;

    for (int i = 0; i < S.length(); i++)
    {
        if (isdigit(S[i]) == 1)
        {
            tmp += S[i];
        }
    }

    cout << tmp << endl;
}