#include<stdio.h>
int main(){
    int arr[] = {1,3,5,7,8,9,11};
    int k = 0;
    scanf("%d",&k);
    int a = sizeof(arr)/sizeof(arr[0]); 
    int left=0 ,right=a-1;
    while (left<=right)
    {
    int min = (left+right)/2;
    if(arr[min]<k){
        left=min+1;
    }
    else if(arr[min]>k){
        right=min-1;
    }
    else{
        printf("下标为：%d",min);
        break;
    }
    }  
    if(left>right)  printf("找不到！");
    return 0;
}