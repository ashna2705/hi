#include <stdio.h>
int main() {
    int a[100]; int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=0;k<n;k++){
                if(a[i]+a[j]==a[k] && i!=k && i!=j && j!=k){
                    c++;
                    printf("%d + %d = %d\n",a[i],a[j],a[k]);
                }
        }
        }
    }
    printf("No of triplets= %d\n",c);
    return 0;
}