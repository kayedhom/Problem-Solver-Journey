Question:

Implement a simple text editor. The editor initially contains an empty string, S. Perform Q operations of the following 4 types:

append (W) — Append string W to the end of S.
delete (k) — Delete the last k characters of S.
print (k) — Print the k-th character of S.
undo () — Undo the last (not previously undone) operation of type 1 or 2, reverting S to the state it was in prior to that operation.
Hint:

It is guaranteed that the sequence of operations given as input is possible to perform.

Example:

S= ‘abcde’

ops = [‘1 fg’, ‘3 6’, ‘2 5’, ‘4’, ‘3 7’, ‘4’, ‘3 4’]


The results should be printed as

f
g
d



