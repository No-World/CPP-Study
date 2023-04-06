#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string p1, p2;
        cin >> p1 >> p2;
        if (p1 == p2)
            cout << "Tie\n";
        else if ((p1 == "Rock" && p2 == "Scissors") || (p1 == "Scissors" && p2 == "Paper") || (p1 == "Paper" && p2 == "Rock"))
            cout << "Player1\n";
        else
            cout << "Player2\n";
    }
    return 0;
}