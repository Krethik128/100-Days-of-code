#include <iostream>
using namespace std;
string func(string &s, int idx, int n)
{
    if (idx == n)
        return "";
    string curr = "";
    curr += s[idx];
    return ((s[idx] == 'a') ? "" : curr) + func(s, idx + 1, n);
}
int main()
{
    string s = "abscda";
    int n = s.size();
    string result = func(s, 0, n);
    cout << "Result : " << result << endl;

    return 0;
}