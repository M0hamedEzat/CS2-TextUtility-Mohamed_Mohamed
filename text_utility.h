
#ifndef TEXT_UTILITY_H
#define TEXT_UTILITY_H

#include <cstring>
#include <cctype>

namespace TextUtility {

    int wordCount(const char* text);
    
    int characterCount(const char* text);
    
    int vowelCount(const char* text);
    
    int consonantCount(const char* text);
    
    void reverseString(char* text);
    
    bool isPalindrome(const char* text);
    
    void toUpperCase(char* text);

    void toLowerCase(char* text);
    
    int substringCount(const char* text, const char* substring);
    
    bool isVowel(char c);
    
    void cleanString(const char* source, char* destination);
}

#endif // TEXT_UTILITY_H