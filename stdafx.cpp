#include "stdafx.h"

bool isValidChar(char ch) {
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') && (ch != '.'));
}

void buildKeys(String str , unordered_set<string> &keywords) {
    int cur = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(!isValidChar(str[i]) && cur == i)
        {
            cur++;
            continue;
        }
        if(!isValidChar(str[i]) || i == str.size() - 1)
        {
            if(i == str.size() - 1 && isValidChar(str[i]))
            {
                i++;
            }
            String subStr = str.substr(cur, i - cur);
            for(int j = 0; j < subStr.size(); j++)
            {
                subStr[j] = tolower(subStr[j]);
            }
            if(subStr.size() > 2 && !notValidWords.count(subStr))
            {
                keywords.insert(subStr);
            }
            cur = i + 1;
        }
    }
}
