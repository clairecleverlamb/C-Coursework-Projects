#include <iostream>
#include <cstring> 

using namespace std;

// 1. This function returns the last index where the target char can be found in the string. 
// it returns -1 if the target char does not appear in the string.  
// For example, if s is “Giants” and target is ‘a’ the function returns 2.

int lastIndexOf(const char *s, char target){
    int lastIndex = -1;
    int i = 0; 

    while (s[i] != '\0'){
        if(s[i] == target){
            lastIndex = i; 
        }
        i++;
    }
    return lastIndex;
}


// 2.  This function alters any string that is passed in. 
// It should reverse the string. If “flower” gets passed in it should be reversed in place to “rewolf”.  
// To be clear, just printing out the string in reverse order is insufficient to receive credit, 
// you must change the actual string to be in reverse order.


void reverse(char *s){
    int len = strlen(s);
    for (int i = 0; i < len/2; i++){
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i ] = temp;
    }
}

// 3.  This function finds all instances of the char ‘target’ in the string  
// and replaces them with ‘replacementChar’.  It also returns the number 
// of replacements that it makes.  If the target char does not appear in the string 
// it returns 0 and does not change the string.  
// For example, if s is “go giants”, target is ‘g’, and replacement is ‘G’, the function should change s to “Go Giants” and return 2.

int replace( char *s, char target, char replacementChar){
    int count = 0;
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] == target) {
            s[i] = replacementChar;
            count++;
        } 
        i++;
    }
    return count;
}
 

// 4.  This function returns the index in string s where the substring 
// can first be found. For example if s is “Skyscraper” and substring is “ysc” the function would return 2.  
// It should return -1 if the substring does not appear in the string.

int findSubstring(const char *s, const char substring[]) {
    int sLen = strlen(s);
    int subLen = strlen(substring);
    if (subLen > sLen) return -1;

    for(int i = 0; i <= sLen - subLen; i++){
        int match = 1;
        for (int j = 0; i <= sLen - subLen; i++) {
            if (s[i + j] != substring[j]) {
                match = 0; 
                break;
            }
        }
        if (match) return i;
    }
    return -1; 
}
 

// 5. This function returns true if the argument string is a palindrome. 
// It returns false if it is not.  A palindrome is a string that is spelled the same as its reverse.  
// For example “abba” is a palindrome. So is “hannah”, “abc cba”, and “radar”.

bool isPalindrome(const char *s){
    int len = strlen(s);
    for (int i = 0; i < len/2; i++){
        if (s[i] != s[len -1 - i]){
            return false;
        }
    }
    return true;
}

 

// 6. Extra Credit, up to 10 extra points.  This function should reverse the words in a string.
//   A word can be considered to be any characters, including punctuation, 
//   separated by spaces (only spaces, not tabs, \n etc.).  
//   So, for example, if s is “The Giants won the Pennant!” the function should change s to “Pennant! the won Giants The”

void reverseWords(char *s){
    reverse(s);
    int i = 0; 
    int len = strlen(s);
    while (i < len){
        while (s[i] == ' ' && i < len) i++;
        if (i >= len) break;

        int start = i;
        while (s[i] != ' ' && s[i] != '\0') i++;
        int end = i - 1;
        
        while (start < end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
}





/// testing main()
int main() {
    // Test lastIndexOf
    cout << "Testing lastIndexOf:" << endl;
    const char* s1 = "Giants";
    cout << "lastIndexOf(\"" << s1 << "\", 'a') = " << lastIndexOf(s1, 'a') << " (expected 2)" << endl;
    cout << "lastIndexOf(\"" << s1 << "\", 'z') = " << lastIndexOf(s1, 'z') << " (expected -1)" << endl;
    cout << endl;

    // Test reverse
    cout << "Testing reverse:" << endl;
    char s2[] = "flower";
    cout << "Before reverse: " << s2 << endl;
    reverse(s2);
    cout << "After reverse: " << s2 << " (expected rewolf)" << endl;
    cout << endl;

    // Test replace
    cout << "Testing replace:" << endl;
    char s3[] = "go giants";
    cout << "Before replace: " << s3 << endl;
    int count = replace(s3, 'g', 'G');
    cout << "After replace: " << s3 << " (expected Go Giants)" << endl;
    cout << "Number of replacements: " << count << " (expected 2)" << endl;
    cout << endl;

    // Test findSubstring
    cout << "Testing findSubstring:" << endl;
    const char* s4 = "Skyscraper";
    const char* sub = "ysc";
    cout << "findSubstring(\"" << s4 << "\", \"" << sub << "\") = " << findSubstring(s4, sub) << " (expected 2)" << endl;
    cout << "findSubstring(\"" << s4 << "\", \"xyz\") = " << findSubstring(s4, "xyz") << " (expected -1)" << endl;
    cout << endl;

    // Test isPalindrome
    cout << "Testing isPalindrome:" << endl;
    const char* s5a = "abba";
    const char* s5b = "abc ba";
    cout << "isPalindrome(\"" << s5a << "\") = " << (isPalindrome(s5a) ? "true" : "false") << " (expected true)" << endl;
    cout << "isPalindrome(\"" << s5b << "\") = " << (isPalindrome(s5b) ? "true" : "false") << " (expected false)" << endl;
    cout << endl;

    // Test reverseWords
    cout << "Testing reverseWords:" << endl;
    char s6[] = "The Giants won the Pennant!";
    reverseWords(s6);
    cout << "After reverseWords: " << s6 << " (expected Pennant! the won Giants The)" << endl;

    return 0;
}

/* sample outcomes 
Testing lastIndexOf:
lastIndexOf("Giants", 'a') = 2 (expected 2)
lastIndexOf("Giants", 'z') = -1 (expected -1)

Testing reverse:
Before reverse: flower
After reverse: rewolf (expected rewolf)

Testing replace:
Before replace: go giants
After replace: Go Giants (expected Go Giants)
Number of replacements: 2 (expected 2)

Testing findSubstring:
findSubstring("Skyscraper", "ysc") = -1 (expected 2)
findSubstring("Skyscraper", "xyz") = -1 (expected -1)

Testing isPalindrome:
isPalindrome("abba") = true (expected true)
isPalindrome("abc ba") = false (expected false)

Testing reverseWords:
Before reverseWords: The Giants won the Pennant!
After reverseWords: Pennant! the won Giants The (expected Pennant! the won Giants The)
*/