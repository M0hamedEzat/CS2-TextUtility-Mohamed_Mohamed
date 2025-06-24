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
    
    // Helper function to check if character is vowel
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
    
    // Consonant count function
    int consonantCount(const char* text) {
        if (text == nullptr) {
            return 0;
        }
        
        int count = 0;
        for (int i = 0; text[i] != '\0'; i++) {
            if (isalpha(text[i]) && !isVowel(text[i])) {
                count++;
            }
        }
        
        return count;
    }

// String reversal function (in-place)
    void reverseString(char* text) {
        if (text == nullptr) {
            return;
        }
        
        int length = characterCount(text);
        
        for (int i = 0; i < length / 2; i++) {
            char temp = text[i];
            text[i] = text[length - 1 - i];
            text[length - 1 - i] = temp;
        }
    }
    
    // Helper function to clean string for palindrome check
    void cleanString(const char* source, char* destination) {
        int j = 0;
        for (int i = 0; source[i] != '\0'; i++) {
            if (isalnum(source[i])) {
                destination[j++] = tolower(source[i]);
            }
        }
        destination[j] = '\0';
    }
    
    // Palindrome check function
    bool isPalindrome(const char* text) {
        if (text == nullptr) {
            return false;
        }
        
        // Create a cleaned version of the string
        int len = characterCount(text);
        char* cleaned = new char[len + 1];
        cleanString(text, cleaned);
        
        int cleanedLen = characterCount(cleaned);
        bool result = true;
        
        for (int i = 0; i < cleanedLen / 2; i++) {
            if (cleaned[i] != cleaned[cleanedLen - 1 - i]) {
                result = false;
                break;
            }
        }
        
        delete[] cleaned;
        return result;
    }
    
    // Case conversion to uppercase (in-place)
    void toUpperCase(char* text) {
        if (text == nullptr) {
            return;
        }
        
        for (int i = 0; text[i] != '\0'; i++) {
            text[i] = toupper(text[i]);
        }
    }
    
// Case conversion to lowercase (in-place)
    void toLowerCase(char* text) {
        if (text == nullptr) {
            return;
        }
        
        for (int i = 0; text[i] != '\0'; i++) {
            text[i] = tolower(text[i]);
        }
    }
    
    // Substring occurrence count
    int substringCount(const char* text, const char* substring) {
        if (text == nullptr || substring == nullptr || 
            *substring == '\0') {
            return 0;
        }
        
        int count = 0;
        int textLen = characterCount(text);
        int subLen = characterCount(substring);
        
        if (subLen > textLen) {
            return 0;
        }
        
        for (int i = 0; i <= textLen - subLen; i++) {
            bool match = true;
            for (int j = 0; j < subLen; j++) {
                if (text[i + j] != substring[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                count++;
            }
        }
        
        return count;
    }
}
