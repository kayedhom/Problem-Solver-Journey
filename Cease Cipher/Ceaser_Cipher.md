We need to define an alphabet variable containing a-z and A-Z.
Then we loop through each character.
Each character in the loop we check is at what index of the alphabet variable.
Once found then we shift to the right / sum based on the number of shifts specified, for example:
alphabet = ‘abcdefghijklmnopqrstuvwxyz’
alphabetUpper = ‘ABCDEFGHIJKLMNOPQRSTUVWXYZ’
The letter H is in the alphabetUpper variable at index 7, when shifted to the right by 2 letters then we can add the index with 2 so that it becomes 9 where the 9th index of alphabetUpper is J.
After that, each letter result that is shifted is stored in a variable to be returned.
If the letter is at the end and after sliding it exceeds the alphabet letter then the letter will return to the first letter, namely, a and A. To solve this we can use modulus, so that when the index exceeds the total alphabet letter it will return to the initial index.