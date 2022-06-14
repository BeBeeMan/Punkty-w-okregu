#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int x;
    int y;
    int r;
    float dys;
    string done="";
    cin >> x >> y >> r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int xone;
        int yone;
        cin >> xone >> yone;
        dys = sqrt(pow(x - xone, 2) + pow(y - yone, 2));
        if (dys > r)
        {
            done = done + "O";
        }
        else if (dys < r)
        {
            done = done + "I";
        }
        else if (dys == r)
        {
            done = done + "E";
        }
    }
    for (int i = 0; i < done.length(); i++)
    {
        cout << done[i] << endl;
    }
}
