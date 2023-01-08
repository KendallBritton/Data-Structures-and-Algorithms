// Pretest - Code your solution

#include <iostream>
#include <vector>

using namespace std;

vector<string> removeStopWords(const vector<string>& s, const vector<string>& stop) {
// Your code here - Do not include any cout/cin in your code
vector<string> s1 = s;
vector<string> stop1 = stop;
        for(int i = 0; i < s1.size(); i++){
            for(int j = 0; j < stop1.size(); j++){
                if(s1[i] == stop1[j]){
                     s1.erase(s1.begin() + i);
                    i--;
                }
            }
        }
return s1;
}