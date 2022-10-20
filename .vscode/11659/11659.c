#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    int arr[100000]={0,};
    int S[100000]={0,};

    scanf("%d %d\n", &n,&m);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        S[i+1] = S[i]+arr[i];
    }

    //더하기
    for(int i=0; i<m; i++){
        int a=0;
        int b=0;
        int res=0;
        scanf("%d %d", &a,&b);
        
        res = S[b] - S[a-1];
        printf("%d\n", res);
    }
    return 0;
}
