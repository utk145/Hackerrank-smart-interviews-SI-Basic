/*

Q) Given a matrix of size N x M, print row-wise sum, separated by a newline.

Input Format:
First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.


Constraints:
1 <= N, M <= 100
-106 <= ar[i] <= 10^6


Output Format:
Print row-wise sum of the matrix, separated by a newline.


Sample Input 0:
2 3
5 -1 3
19 8 -5


Sample Output 0:
7
22


Explanation 0:
Self Explanatory.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long a[100][100];
    int i,j,n,m;
    
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%ld",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        int sum=0;
        for(j=1;j<=m;j++){
            sum=sum+a[i][j];
        }
    
    printf("%d\n",sum);
}
}