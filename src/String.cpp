//
// Created by Olcay Taner YILDIZ on 24.01.2025.
//

#include "String.h"
#include <regex>
#include <sstream>
#include <fstream>

/**
 * Replaces all occurrences of from with to in an input string.
 * @param str Input string
 * @param from Replacement string
 * @param to Replaced string
 * @return A copy of the input string where all occurrences of from is replaced with to.
 */
string String::replaceAll(string str, const string &from, const string &to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

/**
 * Removes leading and trailing spaces from an input string.
 * @param str Input string
 * @return Returns a copy string with leading and trailing spaces removed.
 */
string String::trim(const string &str) {
    int start = -1, end = -1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') {
            start = i;
            break;
        }
    }
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] != ' ') {
            end = i;
            break;
        }
    }
    return str.substr(start, end - start + 1);
}

/**
 * Splits a given string with respect to empty string and returns the split parts as a vector.
 * @param line Given string
 * @return Split parts as a vector
 */
vector<string> String::split(const string &line) {
    std::istringstream stringStream(line);
    vector<string> tokens{istream_iterator<string>{stringStream}, istream_iterator<string>{}};
    return tokens;
}

/**
 * Checks if a given large string ends with the given small suffix string.
 * @param largeString String for which suffix search is done.
 * @param smallString The suffix string
 * @return true if the character sequence smallString is a suffix of the character sequence largeString; false
 * otherwise.
 */
bool String::endsWith(const string &largeString, const string &smallString) {
    if (largeString.size() < smallString.size()) {
        return false;
    }
    return largeString.find(smallString, largeString.size() - smallString.size()) ==
           largeString.size() - smallString.size();
}

/**
 * Splits a given string with respect to a given separator string and returns the split parts as a vector.
 * @param line Given string
 * @param separator Separator string
 * @return Split parts as a vector
 */
vector<string> String::split(const string &line, const string &separator) {
    size_t current, previous = 0;
    vector<string> tokens;
    current = line.find_first_of(separator);
    while (current != string::npos) {
        tokens.push_back(line.substr(previous, current - previous));
        previous = current + 1;
        current = line.find_first_of(separator, previous);
    }
    tokens.push_back(line.substr(previous, current - previous));
    return tokens;
}

/**
 * Checks if a given large string starts with the given small prefix string.
 * @param largeString String for which prefix search is done.
 * @param smallString The prefix string
 * @return true if the character sequence smallString is a prefix of the character sequence largeString; false
 * otherwise.
 */
bool String::startsWith(const string &largeString, const string &smallString) {
    return largeString.rfind(smallString, 0) == 0;
}

map<string, string> String::readHashMap(const string& fileName){
    string line;
    map<string, string> result;
    ifstream inputFile;
    inputFile.open(fileName, ifstream :: in);
    while (inputFile.good()) {
        getline(inputFile, line);
        vector<string> tokens = split(line);
        if (tokens.size() == 2) {
            result.emplace(tokens[0], tokens[1]);
        }
    }
    inputFile.close();
    return result;
}
