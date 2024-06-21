#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour_str = "12";
    
    string input_hours = s.substr(0,2); 
    string input_period= s.substr(8,2);
    
    unsigned long AM = s.find("A");
    unsigned long PM = s.find("P");
    int hours = stoi(input_hours,0,10);
    
    if(input_period == "PM" && hours != 12){
         hours +=12;
         hour_str = to_string(hours);
    }
    else if (input_period == "AM" && hours == 12)
    {
      hours=0;
    }
    //Converting hours to string with HH style
    hour_str = (hours < 10) ? "0" + to_string(hours) : to_string(hours);
    
    // Replace the hours part in the input string
    s.replace(0,2,hour_str);
    
    // Remove AM/PM part
    s.erase(8,2);

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
