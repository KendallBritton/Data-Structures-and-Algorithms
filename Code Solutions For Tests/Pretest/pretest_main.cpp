// Pretest - test

#include <iostream>
#include <vector>

using namespace std;

vector<string> removeStopWords(const vector<string>& s, const vector<string>& stop);

int main() {
    vector<string> stop_words = {"a", "an", "be", "in", "is", "of", "or", "that", "the", "to"};
    // Test 1. Output should be - not question 
    vector<string> line1 = {"to", "be", "or", "not", "to", "be", "is", "the", "question"} ;
    vector<string> result1  = removeStopWords(line1, stop_words);
    for(int i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << endl;
    
    // Test 2. Output should be - all gin joints all towns all world she walks into mine 
    vector<string> line2 = {"of", "all", "the", "gin", "joints", "in", "all", "the", "towns", "in", "all", "the", "world", "she", "walks", "into", "mine"} ;
    vector<string> result2  = removeStopWords(line2, stop_words);
    for(int i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << endl;
}