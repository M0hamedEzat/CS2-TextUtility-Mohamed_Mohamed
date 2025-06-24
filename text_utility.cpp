/* 

#include <iostream>
#include <string>

#include "text_utility.h"
using namespace std;

int wordCount(string str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int charCount(string str) {
    int count = 0;
    for (char c : str) {
        if (!isspace(c)) {
            count++;
        }
    }
    return count;
}
int vowelConstantCount(string str) {
    int count = 0;
    for (char c : str) {
        char lowerC = tolower(c);
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            count++;
        }
    }
    return count;
}
string reversal(string str) {
    string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}
bool palindrome(string str) {
    string reversedStr = reversal(str);
    return str == reversedStr;
}
string toUpperCase(string str) {
    string upperStr;
    for (char c : str) {
        upperStr += toupper(c);
    }
    return upperStr;
}
string toLowerCase(string str) {
    string lowerStr;
    for (char c : str) {
        lowerStr += tolower(c);
    }
    return lowerStr;
}
int substringCount(string str, string subStr) {
    int count = 0;
    size_t pos = str.find(subStr);
    while (pos != string::npos) {
        count++;
        pos = str.find(subStr, pos + subStr.length());
    }
    return count;
}

*/

// Note: The functions assume that the input strings are valid and do not handle edge cases like null strings or empty strings.
// Additional error handling can be added as needed.


#include "text_utility.h"

namespace TextUtility {
    
    // Word count function
    int wordCount(const char* text) {
        if (text == nullptr || *text == '\0') {
            return 0;
        }
        
        int count = 0;
        bool inWord = false;
        
        for (int i = 0; text[i] != '\0'; i++) {
            if (isalnum(text[i])) {
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }
        
        return count;
    }
// Character count function 
    int characterCount(const char* text) {
        if (text == nullptr) {
            return 0;
        }
        
        int count = 0;
        while (text[count] != '\0') {
            count++;
        }
        
        return count;
    }
 // Function to check if character is vowel
    bool isVowel(char c) {
        char lower = tolower(c);
        return (lower == 'a' || lower == 'e' || lower == 'i' || 
                lower == 'o' || lower == 'u');
    }
    
    // Vowel count function
    int vowelCount(const char* text) {
        if (text == nullptr) {
            return 0;
        }
        
        int count = 0;
        for (int i = 0; text[i] != '\0'; i++) {
            if (isVowel(text[i])) {
                count++;
            }
        }
        
        return count;
    }
    
