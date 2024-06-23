Given an array of n distinct integers, transform the array into a zigzag sequence by permuting the array element. A sequence will be called a zigzag sequence if the first k elements in the sequence are in increasing order and the last k elements are in decreasing order, where k=(n+1)/2. You need to find the lexicographically smallest zigzag sequence of the given array.

Let’s assume the array is given at following.

Example: a = [2,3,5,1,4]

If we permute the array as [1,4,5,3,2], the result is a zigzag sequence. so the given function findZigZagSequence to return the appropriate zigzag sequence for the given input array.

But we have to find the lexicographically smallest zigzag sequence of the given array. here is another valid zigzag sequence [1,2,5,4,3] < [1,4,5,3,2].

So the answer should be [1,2,5,4,3].

Thanks to explaination::https://medium.com/@andyjiang0312/solution-of-zigzag-sequence-challenge-38c6df4ae5a8