#include <iostream>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s);
};

int Solution::lengthOfLastWord(string s)
{
    int result = 0;
    int i = s.size() - 1;
    while (i >= 0 && s[i] == ' '){
        --i;
    };
    while (i >= 0 && s[i] != ' ')
    {
        ++result;
        --i;
    };
    return result;
}

int main()
{
    Solution leetcode;
    string catPrahse = "Meow say cat ";
    cout << leetcode.lengthOfLastWord(catPrahse) << endl;
    return 0;
}
