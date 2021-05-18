#include <bits/stdc++.h>
using namespace std;

//Array of 26 character
int frequency[26];

int hashfunc(char c)
{
    return (c - 'a');
}

void countString(string s)
{
    for(int i = 0; s.length(); ++i)
    {
        int index = hashfunc(s[i]);
        frequency[index]++;
    }
    for(int i = 0; i < 26; ++i)
    {
        cout << (char)(i+'a') << " " << frequency[i] << endl;
    }
}

int main()
{
    cout << "Hello world";
    countString("aaabcdd"); 
    return 0;
}
