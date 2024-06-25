#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


#include <algorithm>
#include <string>
/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
 bool isPalindrome(string s){
     string rev = s;
     reverse(rev.begin(), rev.end());
     return s == rev;
 }

int palindromeIndex(string input) {
    int Start=0, End=input.size() - 1;
    
    for(Start,End; Start < End; Start++, End--){
        if(input[Start] != input[End]) break;
    }
    
    
    if(Start >= End) return -1;

    string s1 = input, s2 = input;
    s1.erase(s1.begin() + Start);
    if(isPalindrome(s1)) return Start;
    
    s2.erase(s2.begin() + End);
    if(isPalindrome(s2)) return End;
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


/*

Given a string of lowercase letters in the range ascii[a-z], determine the index of a character that can be removed to make the string a palindrome. There may be more than one solution, but any will do. If the word is already a palindrome or there is no solution, return -1. Otherwise, return the index of a character to remove.


Sample Input

STDIN   Function
-----   --------
3       q = 3
aaab    s = 'aaab' (first query)
baa     s = 'baa'  (second query)
aaa     s = 'aaa'  (third query)
Sample Output

3
0
-1


Explanation

Query 1: "aaab"
Removing 'b' at index 3 results in a palindrome, so return 3.

Query 2: "baa"
Removing 'b' at index 0 results in a palindrome, so return 0.

Query 3: "aaa"
This string is already a palindrome, so return -1 . Removing any one of the characters would result in a palindrome, but this test comes first.



*/