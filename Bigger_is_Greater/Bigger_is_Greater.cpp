#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

string biggerIsGreater(string w) {
    bool exist =false;
    int index =0;
    string cop =w;
    int len = w.length();
    int i=0;
    for(i=len-1;i>0; i-- ){
        if(cop[i]>cop[i-1])
            break;
        }
        
        if(i == 0)
            return "no answer";
        
    int next_smaller=i;
    
    for(int j=i + 1 ; j<len ; j++){
        if(cop[j]<cop[next_smaller] && cop[j] > cop[i - 1]){
            next_smaller=j;
        }
    }
    
    swap(cop[next_smaller],cop[i-1]);
    index=i-1;
    string sub1=cop.substr(index+1,len-index);
    string sub0=cop.substr(0,index+1);
    sort(sub1.begin(),sub1.end());
    
    string Ret = sub0+sub1;
    
    return Ret;
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

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
