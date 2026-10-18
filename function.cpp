#include <iostream>
using namespace std;
//sum of numbers
int sum(int a,int b){
int s=a+b;
return s;
}
int main(){
    cout<<sum(100+17)<<endl;
    return 0
}
//min of two numbers
int minOfTwo(int a,int b) {//parameters
   if(a<b){
       return a;
   }
   else{
       return b;
   }
}
   int main(){
       cout<< "min = "<< minOfTwo(9,11)<<endl; //arguments
       return 0;
   }
   //sum of numbers from 1 to n
int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
    
}
int main(){
    cout<<sumN(67)<<endl;
    cout<<sumN(89)<<endl;
    cout<<sumN(86)<<endl;
    return 0;
}
//factorial of n
int factorialN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
    
}
int main(){
    cout<<factorialN(9)<<endl;
    cout<<factorialN(8)<<endl;
}
//bionomial coefficient
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
     }
     return fact;
     }
     int nCr(int n,int r){
         int fact_n=factorial(n);
         int fact_r=factorial(r);
         int fact_nmr=factorial(n-r);
         return fact_n /(fact_r*fact_nmr);
    
     }
     int main(){
         cout<< nCr(7,2)<<endl;
         return 0;
     }
     int max_Num(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[8]={1,2,45,65,76,890,54,9};
    cout<<max_Num(arr,8)<<endl;
}
int factorial(int n){
   int s=1;
   for(int i=1;i<=n;i++){
       s=s*i;
       }
   return s;
}
int main(){
    cout<<factorial(9)<<endl;
}