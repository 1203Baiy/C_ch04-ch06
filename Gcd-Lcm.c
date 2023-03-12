#include<stdio.h>
void Gcd(int x,int y){
    int Lcm = x*y;
    int t;
    while(t=x%y)
    {
        x = y;
        y = t;
    }
    printf("Gcd:%d\n",y);
    printf("Lcm:%d\n",Lcm/y);
}

int main(){
    int m = 0;
    int n = 0;
    scanf("%d %d",&m,&n);
    Gcd(m,n);
    return 0;
}