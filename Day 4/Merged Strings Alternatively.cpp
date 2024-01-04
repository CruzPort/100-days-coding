
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int i = 0, j = 0;
        
        while(i < word1.length() && j < word2.length()) {
            merged += word1[i++]; // Add from word1 and increment i
            merged += word2[j++]; // Add from word2 and increment j
        }

        while(i < word1.length()) {
            merged += word1[i++];
        }

        while(j < word2.length()) {
            merged += word2[j++];
        }
        return merged;
    }
};