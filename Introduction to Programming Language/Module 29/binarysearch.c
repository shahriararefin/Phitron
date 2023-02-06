#include<stdio.h>
int main(){

    int min,max,key,mid;

    int n;
    scanf("%d", &n);


    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    min=0;
    max=n-1;
    mid=(min+max)/2;

    int key;
    scanf("%d", &key);

    

    return 0;
}