'''
Q) Given an integer N, check whether it's an Armstrong number or not.
Note: Armstrong number is a number that is equal to the sum of cubes of its digits.


Input Format:
First and only line of input contains a integer - N.


Constraints:
0 <= N <= 109


Output Format:
Print "Yes" if the number is an Armstrong number, "No" otherwise.


Sample Input 0:
153

Sample Output 0:
Yes

Explanation 0:
13 + 53 + 33 = 153

'''

n=input()
cube=0
for i in n:
    cube+= (int(i))**3

if cube==int(n):
    print("Yes")
else:
    print("No")



