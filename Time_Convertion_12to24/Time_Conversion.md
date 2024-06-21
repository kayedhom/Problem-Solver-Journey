Given a time in 12-hour AM/PM format. convert it to military (24-hour)
time.
Note: on a 12-hour clock is 00:00:00 on a 24-hour
clock.
- on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example
s= '12:01:00 PM'
Return '12:01:00'

s= '12:01:00 AM'
Return '00:01:00'.


Function Description
Complete the timeConversion function in the editor below. It should
return a new string representing the input time in 24 hour format.
timeConversion has the following parameter(s):
• string s: a time in 12 hour format
Returns
• string: the time in 24 hour format

Input Format
A single string s that represents a time in 12-hour clæk format (i.e.:
hh:mm:ssAM or
Constraints
• All input times are valid
Sample Input
07 : 05 : 45PM
Sample Output
19:05:45

Success All the 7 test cases