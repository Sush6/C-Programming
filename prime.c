#include<stdio.h>
void checkPrime(int N){
    int flag=1;
    for(int i=2;i<=N/2;i++){
        if(N%i==0){
            flag=0;
            break;
        }
        else{
            flag=1;
            break;
        }
    } 
    if(flag){
        printf("The Number is a  Prime Number\n");
    }
    else{
        printf("The Number is  not a Prime Number");
    }
    return;
}
int main(){
    int N=7;
   checkPrime(N);
    return 0;
}