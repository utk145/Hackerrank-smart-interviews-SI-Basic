'''
Q) Given a string, print all the letters present at odd index, followed by the letters present at even index.


Input Format:
Input contains a string S, consisting of ascii characters.


Constraints:
1 <= len(S) <= 100


Output Format:
Print letters present at odd index, followed by the letters present at even index.


Sample Input 0:
afdg5tg

Sample Output 0:
fgtad5g

Explanation 0:
Self Explanatory

'''

s=input()
for i in s:
    m=s[0::2]
    n=s[1::2]
print(n+m)
