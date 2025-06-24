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
