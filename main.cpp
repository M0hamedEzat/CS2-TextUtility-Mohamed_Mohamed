#include <iostream>
#include <cstring>
#include "text_utility.h"

using namespace std;
using namespace TextUtility;

void printSeparator() {
    cout << "=" << string(50, '=') << "=" << endl;
}

void testFunction(const string& functionName) {
    cout << "\nTesting " << functionName << ":" << endl;
    cout << string(30, '-') << endl;
}

int main() {
    cout << "TEXT UTILITY LIBRARY DEMONSTRATION" << endl;
    printSeparator();
    
    // Test strings
    char testStr1[] = "Hello World! How are you today?";
    char testStr2[] = "A man a plan a canal Panama";
    char testStr3[] = "racecar";
    char testStr4[] = "The quick brown fox jumps over the lazy dog";
    char testStr5[] = "Programming in C++ is fun and challenging";
    
    // Test Word Count
    testFunction("Word Count");
    cout << "Text: \"" << testStr1 << "\"" << endl;
    cout << "Word count: " << wordCount(testStr1) << endl;
    
    cout << "\nText: \"" << testStr4 << "\"" << endl;
    cout << "Word count: " << wordCount(testStr4) << endl;
    
    // Test Character Count
    testFunction("Character Count");
    cout << "Text: \"" << testStr1 << "\"" << endl;
    cout << "Character count: " << characterCount(testStr1) << endl;
    
    cout << "\nText: \"" << testStr5 << "\"" << endl;
    cout << "Character count: " << characterCount(testStr5) << endl;
    
    // Test Vowel and Consonant Count
    testFunction("Vowel and Consonant Count");
    cout << "Text: \"" << testStr1 << "\"" << endl;
    cout << "Vowel count: " << vowelCount(testStr1) << endl;
    cout << "Consonant count: " << consonantCount(testStr1) << endl;
    
    cout << "\nText: \"" << testStr4 << "\"" << endl;
    cout << "Vowel count: " << vowelCount(testStr4) << endl;
    cout << "Consonant count: " << consonantCount(testStr4) << endl;
    
    // Test String Reversal
    testFunction("String Reversal (In-place)");
    char reverseTest[] = "Hello World";
    cout << "Original: \"" << reverseTest << "\"" << endl;
    reverseString(reverseTest);
    cout << "Reversed: \"" << reverseTest << "\"" << endl;
    
    char reverseTest2[] = "Programming";
    cout << "\nOriginal: \"" << reverseTest2 << "\"" << endl;
    reverseString(reverseTest2);
    cout << "Reversed: \"" << reverseTest2 << "\"" << endl;
    
    // Test Palindrome Check
    testFunction("Palindrome Check");
    cout << "Text: \"" << testStr2 << "\"" << endl;
    cout << "Is palindrome: " << (isPalindrome(testStr2) ? "Yes" : "No") << endl;
    
    cout << "\nText: \"" << testStr3 << "\"" << endl;
    cout << "Is palindrome: " << (isPalindrome(testStr3) ? "Yes" : "No") << endl;
    
    char palindromeTest[] = "Madam";
    cout << "\nText: \"" << palindromeTest << "\"" << endl;
    cout << "Is palindrome: " << (isPalindrome(palindromeTest) ? "Yes" : "No") << endl;
    
    // Test Case Conversion
    testFunction("Case Conversion");
    char caseTest[] = "Hello World! This is a Test.";
    cout << "Original: \"" << caseTest << "\"" << endl;
    
    char upperTest[100];
    strcpy(upperTest, caseTest);
    toUpperCase(upperTest);
    cout << "Uppercase: \"" << upperTest << "\"" << endl;
    
    char lowerTest[100];
    strcpy(lowerTest, caseTest);
    toLowerCase(lowerTest);
    cout << "Lowercase: \"" << lowerTest << "\"" << endl;
    
    // Test Substring Count
    testFunction("Substring Occurrence Count");
    const char* mainText = "The cat in the hat sat on the mat";
    const char* substring1 = "at";
    const char* substring2 = "the";
    const char* substring3 = "dog";
    
    cout << "Main text: \"" << mainText << "\"" << endl;
    cout << "Substring \"" << substring1 << "\" occurs: " 
         << substringCount(mainText, substring1) << " times" << endl;
    cout << "Substring \"" << substring2 << "\" occurs: " 
         << substringCount(mainText, substring2) << " times" << endl;
    cout << "Substring \"" << substring3 << "\" occurs: " 
         << substringCount(mainText, substring3) << " times" << endl;
    
    testFunction("Comprehensive Test");
    char comprehensiveTest[] = "Programming C++ 2024!";
    cout << "Test string: \"" << comprehensiveTest << "\"" << endl;
    cout << "Words: " << wordCount(comprehensiveTest) << endl;
    cout << "Characters: " << characterCount(comprehensiveTest) << endl;
    cout << "Vowels: " << vowelCount(comprehensiveTest) << endl;
    cout << "Consonants: " << consonantCount(comprehensiveTest) << endl;
    cout << "Is palindrome: " << (isPalindrome(comprehensiveTest) ? "Yes" : "No") << endl;
    cout << "Occurrences of 'r': " << substringCount(comprehensiveTest, "r") << endl;
    cout << "Occurrences of 'ing': " << substringCount(comprehensiveTest, "ing") << endl;
    
    printSeparator();
    cout << "All tests completed successfully!" << endl;

    char plaintext[100];
    char keyword[100];
    char ciphertext[100];
    char decrypted[100];
    
    // Get user input
    cout << "Enter text to encrypt: ";
    cin >> plaintext;
    cout << "Enter keyword: ";
    cin >> keyword;
    
    // Encrypt
    encrypt(plaintext, keyword, ciphertext);
    cout << "Original: " << plaintext << endl;
    cout << "Encrypted: " << ciphertext << endl;
    
    // Decrypt
    decrypt(ciphertext, keyword, decrypted);
    cout << "Decrypted: " << decrypted << endl;

    
    return 0;
}