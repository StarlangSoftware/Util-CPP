//
// Created by Olcay Taner YILDIZ on 24.01.2025.
//

#ifndef UTIL_STRING_H
#define UTIL_STRING_H

#include <string>
#include <map>
#include <vector>
using namespace std;

class StringUtils {
public:
    static bool startsWith(const string& largeString, const string& smallString);
    static bool endsWith(const string& largeString, const string& smallString);
    static map<string, string> readHashMap(const string& fileName);
    static vector<string> split(const string& line, const string& separator);
    static vector<string> split(const string& line);
    static string replaceAll(string str, const string& from, const string& to);
    static string trim(const string& str);
};


#endif //UTIL_STRINGUTILS_H
