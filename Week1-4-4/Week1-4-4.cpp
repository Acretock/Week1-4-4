#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char f = 'f';
    cin >> s;
    int c = -2;
    if (s.find_first_of(f) != string::npos)
    {
        s.erase(s.find_first_of(f), 1);
        c++;
    }
    if ((s.find_first_of(f) != string::npos))
    {
        c = s.find_first_of(f)+1;
    }
    cout << c;
}
