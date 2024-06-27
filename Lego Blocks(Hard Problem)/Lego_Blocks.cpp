#include <bits/stdc++.h>

#include <cmath>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'legoBlocks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */




const long long MOD = 1000000007;

vector<long long> row_combinations = {1, 1, 2, 4};

void buildRowCombinations(int m) {
    while (row_combinations.size() <= m) {
        long long new_comb = 
    (row_combinations[row_combinations.size() - 1] +
    row_combinations[row_combinations.size() - 2] +
    row_combinations[row_combinations.size() - 3] +
    row_combinations[row_combinations.size() - 4]) % MOD;
    
    row_combinations.push_back(new_comb);
    }
}

long long pow_mod(long long base, int exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int legoBlocks(int n, int m) {
    buildRowCombinations(m);

    // Step 2: Compute total combinations for constructing a wall of height N of varying widths
    vector<long long> total(m + 1);
    for (int i = 0; i <= m; ++i) {
        total[i] = pow_mod(row_combinations[i], n, MOD);
    }

    // Step 3: Find the number of unstable wall configurations
    vector<long long> unstable = {0, 0};
    for (int i = 2; i <= m; ++i) {
        long long result = 0;
        for (int j = 1; j < i; ++j) {
            long long f = (total[j] - unstable[j] + MOD) % MOD * total[i - j] % MOD;
            result = (result + f) % MOD;
        }
        unstable.push_back(result);
    }

    return (total[m] - unstable[m] + MOD) % MOD;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = legoBlocks(n, m);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
