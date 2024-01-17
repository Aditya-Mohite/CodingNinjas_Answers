// If original string and its reverse string are identical then it is Palindrome String
// 12321 is palindrome 

#include <bits/stdc++.h> 

bool isValid(char ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

char toLower(char ch)
{
    if(ch>='A' && ch<='Z') 
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
    else 
    {
        return ch;
    }
}

bool checkPalindrome(string s)
{
    string temp = "";

    for(int i=0; i<s.size(); i++) 
    {
        if(isValid(s[i])) 
        {
            temp.push_back(s[i]);
        }
    }

    int i = 0;
    int j = temp.size()-1;

    while(i<j) 
    {
        if(toLower(temp[i])==toLower(temp[j])) 
        {
            i++;
            j--;
        }
        else 
        {
            return false;
        }
    }
    return true;
}
