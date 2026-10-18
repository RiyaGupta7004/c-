#include <bits/stdc++.h>
using namespace std;

int main(){
    // int arr[10]={23,122,41,67} ;
    // cout<<"address of first memory block is "<<arr<<endl;//print address of first element ofan array5y    
    // cout<<arr[0]<<endl;
    // cout<<"address of first memory block is "<<&arr[0]<<endl; 
    // cout<<"4th"<<endl<<*arr<<endl;
    //  cout<<"4th"<<endl<<*arr+1<<endl;
    // cout<<"6th"<<endl<<*(arr)+1<<endl;
    //  cout<<"6th"<<endl<<*(arr+1)<<endl;
    //  cout<<"8th"<<*(arr+2)<<endl;
    //  int i=3;
    //  cout<<i[arr]<<endl;
    // int temp[10]={1,2};
    // cout<<"1st"<<sizeof(temp)<<endl;
    // cout<<"1st"<<sizeof(*temp)<<endl;
    //  cout<<"2nd"<<sizeof(&temp)<<endl;
    
    
    // int *ptr=&temp[0];
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;
    // 
//   int arr[10];
// //   arr=arr+1;
//   cout<<arr<<endl;
//     int *ptr=&arr[0];
//     cout<<ptr<<endl;
//     ptr=ptr+13;
//     cout<<ptr<<endl;
// 

return 0;
    

}
#include <bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<"address"<<*p<<endl;
}
void update(int *p){
    p=p+1;
    cout<<"inside"<<p<<endl;
    *p=*p+1;
}
 int getSum(int arr[],int n){
     cout<<sizeof(arr)<<endl;
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=arr[i];
     }
     return sum;
 }

int main(){
    int value=5;
    int *p=&value;
    print(p);
    cout<<"Before"<<*p<<endl;
    update(p);
    cout<<"After"<<*p<<endl;
    int arr[5]={1,2,3,4,5};
    cout<<"Sum is "<<getSum(arr+3,3)<<endl;
    

return 0;
    
}