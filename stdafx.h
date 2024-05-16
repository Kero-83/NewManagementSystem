#ifndef STDAFX_H
#define STDAFX_H
#include <bits/stdc++.h>
#include <set>
#include <QDialog>
#include <QVector>
#include <QMainWindow>
#include <QString>
#define String string
using namespace std;


bool isValidChar(char ch);
void buildKeys(String str , unordered_set<string> &keywords);
const unordered_set<string> notValidWords = {"an", "a", "the", "and"};

#endif // STDAFX_H
