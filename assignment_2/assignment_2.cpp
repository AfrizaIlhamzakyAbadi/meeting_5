#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    cout << "Reversing Integer Sequence\n";
    cout << "Enter any key but f after entering integer element to input element to the sequence.\n";
    cout << "Type f to finish sequence.\n";
    vector <int> U;
    for (int i{ 0 }; i >= 0; i += 0)
    {
        int u;
        cin >> u;
        char c;
        cin >> c;
        U.push_back(u);
        if (c == 'f')
        {
            break;
        }
    }
    cout << "input : {";
    for (int i{ 0 }; i < U.size(); i++)
    {
        cout << U[i];
        if (i == U.size() - 1)
        {
            cout << "}\n";
        }
        else
        {
            cout << ", ";
        }
    }
    vector <int> V;
    for (size_t i{ 0 }; i < U.size(); i++)
    {
        V.push_back(U[U.size() - i - 1]);
    }
    cout << "output : {";
    for (int i{ 0 }; i < V.size(); i++)
    {
        cout << V[i];
        if (i == V.size() - 1)
        {
            cout << "}";
        }
        else
        {
            cout << ", ";
        }
    }
    return 0;
}