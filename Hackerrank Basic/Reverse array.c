/*

Q)  Print array in reverse order.
Note: Try solving this using recursion. Do not use any inbuilt functions/libraries for your main logic.

Input Format:
First line of input contains N - the size of the array and second line contains the elements of the array.


Constraints:
1 <= N <= 100
0 <= ar[i] <= 10^18


Output Format:
Print the given array in reverse order.


Sample Input 0:
5
2 19 8 15 4


Sample Output 0:
4 15 8 19 2


Explanation 0:
Self Explanatory

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    long a[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%ld",&a[i]);    
    }
    for(int i=n;i!=0;i--){
        printf("%ld ",a[i]);
    }
}