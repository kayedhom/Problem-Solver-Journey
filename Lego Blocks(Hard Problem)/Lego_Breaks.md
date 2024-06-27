Problem
You have an infinite number of 4 types of lego blocks of sizes given as (depth x height x width):

d	h	w
1	1	1
1	1	2
1	1	3
1	1	4
Using these blocks, you want to make a wall of height n and width m. Features of the wall are:

- The wall should not have any holes in it.
- The wall you build should be one solid structure, so there should not be a straight vertical break across all rows of bricks.
- The bricks must be laid horizontally.

How many ways can the wall be built?

Example

n = 2
m = 3
The height is 2 and the width is 3. There are 9 valid permutations in all.

Function Description

Complete the legoBlocks function in the editor below.

legoBlocks has the following parameter(s):

int n: the height of the wall
int m: the width of the wall
Returns
- int: the number of valid wall formations modulo (10⁹+7)

Input Format

The first line contains the number of test cases t.

Each of the next t lines contains two space-separated integers n and m.

Constraints

1 <= t <= 100
1 <= n,m <= 1000


Help From Discussions and Medium

It needs 3 steps to solve this problem:

Consider all cases only one row
Extend to all rows
Subtract the vertically unstable cases


I found this great answer explaination:

here
https://www.hackerrank.com/challenges/one-week-preparation-kit-lego-blocks/forum/comments/1098199?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-six


