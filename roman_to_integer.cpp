// Given a roman numeral, convert it to an integer.

 

// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

// time complexity - O(n)
class Solution {
public:
int romanToInt(string s) {
    unordered_map<char,int> roman = {
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
    };
    int total = 0;
    int prev = 0;
    for(int i = s.length()-1;i>=0;i--){
        int curr = roman[s[i]];
        if(curr < prev){
            total -= curr;
        }
        else{
            total += curr;
        }
        prev = curr;
    }
    return total;
}
};
 