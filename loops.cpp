#include <bits/stdc++.h>
using namespace std;
 int main(){
//printing 1 to 40 using the while loop
// 	 for(int i=0;i<=40;i++){
// 	     cout<<i<<endl;
// 	 }
// for(int i=1;34<=40;i++){
//     cout<<i<<endl;
// }
// while loop in c++
// syntax;
// while(condition):{
    
// }


// int i=1;
// while(true){
//     cout<<i<<endl;
// }
// }
// do while loop in c++
// syntax:
// do while(condition);
// {
//     c++ statement;
// }
// printing 1 to 40 using the do while loop
// int i=1,num=6;
// do{
//   cout<<num<<"x"<<i<<" = "<<num*i<<endl;
//   i++;
// }
// while(i<=10);
// }
// break statement
// for(int i=1;i<=40;i++){
//     if(i==2){
//         continue;
//     }
//     cout<<i<<endl;
// }
// }
//what is pointers??-----> datatypes which hold the address of other datatypes.
// int a=3;
// int*b=&a;
// //&--->(Address of) operator
// cout<<"The address of a is "<<&a<<endl;
// cout<<"The addresss of a is "<<b<<endl;

// // * --->(value at) Dereference operator
// cout<<"The value at address b is"<<*b<<endl;
// // pointer to pointer
// int**c=&b;
// cout<<"The address of b is<<&b<<endl;
// cout<<"The address of b is "<<c<<endl;
// cout<<"The value at address c is "<<c<<endl;
// cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
// }
// int marks[]={23,45,56,89);
// mathmarks[0]=2278;
// mathmarks[1]=738;
// mathmarks[2]=378;
// mathmarks[3]=578;
// cout<<"These are math marks"<<endl;
// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;
// cout<<"These are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<"These are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// }
#include <bits/stdc++.h>
using namespace std;

// int main() {
// /]/ 	  int marks[4]={56,67,89,43};
// 	  int mathsMarks[4];
// 	  mathsMarks[0]=2278;
// 	  mathsMarks[1]=2279;
// 	  mathsMarks[2]=2288;
// 	  mathsMarks[3]=2178;
// 	  for(int i=0;i<4;i++){
// 	  cout<<"The value of marks "<<i<< "is"<<mathsMarks[i]<<endl;
// 	  }
	  
	  
// }
// quiz:do it from do while loop
//  int marks marks,m1=89,m2=90,m3=78,m4=67;
//  do while(marks<=100){
//      cout<<marks<<endl; 
//  }
//  } 
// struct employee
// {
// /* data */
// int eId = 1;
// char favChar;
// float salary;
// };

// int main(){
//     struct employee harry;
//     struct employee shubham;
//     struct employee rohandas;
//     harry.eId = 1;
//     harry.favChar = 'C';
//     harry.salary = 120000000;
//     cout<<"The value is "<<harry.eId<<endl;
//     cout<<"The value is "<<harry.favChar<<endl;
//     cout<<"The value is "<<harry.salary<<endl;
    
// }
// typedef struct employee{
//     /* data */
//     int eId;
//     char favchar;
//     float salary;
// };

// union money
// {
//     /* data */
//     int rice;
//     char car;
//     float pounds;
// };
// int main(){
//     enum Meal{ breakfast, lunch , dinner};
//      Meal m1=lunch;
//     cout<<m1<<endl;
//     cout<<breakfast<<endl;
//     // cout<<lunch<<endl;
//     // cout<<dinner<<endl;
// }
// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }
// int main(){
//     int num1,num2;
//     cout<<"Enter the first number"<<endl;
//     cin>>num1;
//     cout<<"Enter the  second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is"<<sum(num1,num2);
// }
// int sub(int a,int b,int c){
//     int d=a-b-c;
//     return d;
// }
j
class student{
    public:
    int roll;
    float age;
    void show()
    {
        cout<<roll<<endl;
        cout<<age<<endl;
    }
};
int main(){
    student s;
    s.roll=20;
    s.age=15;
    s.show();
}
#include <bits/stdc++.h>
using namespace std;

// class student{
//     public:
//     int x,y;
//     int add()
//     {
//         return(x+y);
       
//     }
// };
// int main(){
//     student s;
//     cin>>s.x;
//     cin>>s.y;
//     int a=s.add();
// }
// cout<<a+b;

//wap to find out the addition and substraction of two no??
// class student{
//     public:
//     int x,y;
//     int add(){
//         return(x+y);
//     }
//     int sub(){
//             return(x-y);
//         }
//     };
//     int main(){
//         student s;
//         cin>>s.x;
//         cin>>s.y;
//         int a=s.add();
//         int b=s.sub();
    
//     cout<<a<<endl;
//     cout<<b<<endl;
// }
// wap to find out the addition of two numbers
// class student{
//     public:
//     int c;
//     int add(int x,int y){ 
//formal parameters x and y will be taking values from actual parameters num1 and num2
//         c=x+y;
//         return(c);
//     }
// };
// wap to find out the addition of two number and addition of three no??
class student{
    public:
    int d;
    
}#include <bits/stdc++.h>
using namespace std;

  int main() {
// int a,b,c;
// cin>>a>>b>>c;
// if(a==b && b!=c && a!=c){
//     cout<<"Yes";
// }
// else{
//     cout<<"No";
// }
// }
//wap to print all prime no upto n
//wap to input the salary of an employee if the salary is in 1 digit print A,if it is in 2 two digit print b,if it is in 3 digit print c,if it is in 4 digit print d
// // //wap to input cost price of product and selling price of product print profit we have to fint out the condition for proit and loss 
//  int salary;
//  cin>>salary;
//  if(salary<10){
//      cout<<"A";
//  }
//   else if(salary<100 && salary<=10){
//       cout<<"B";
//   }
//   else if(salary<1000 && salary<=100){
//          cout<<"C";
//   else if(salary<10000 && salary<=1000){
//         cout<<"D";
//     }
//     else{
//         cout<<"Invalid";
//     }
    
// }
// int cp,sp;
// cin>>cp>>sp;
// if(sp>cp){
//     cout<<"Profit"<<endl;
//     cout<<sp-cp;
// }
// else if(cp>sp){
//     cout<<"Loss";
//     cout<<cp-sp;
// }
// else{
//     cout<<"no profit no loss";
// }
// }
//wap to fint out the total delay in the form of hours and minutes where total  delay is given only in minutes
//wap to print the table of a given no upto n
//wap to print the table of a given no upto n

// int main() {
    
//     int num,m,n;
//     cin>>num;
//     cin>>n;
   
//     for(m=1;m<=n;m++){
//         cout<<num<<"*"<<m<<"="<<num*m<<endl;
//     }
// }
//wap to input a sales of the salesman,a salesman get a commision of 5% o a sell he makes
// if the sell is below 5000 and the commision of 8% on the sales thet exceeds 5000 or equal to 5000 to get together with rs 250  find out the commision of the salesman
//wap to fint out the biggest of the four number
// int a,b,c,d;
// cin>>a>>b>>c>>d;
//  if(a>b && a>c && a>d){
//      cout<<"a is biggest";
//  }
//  else if(b>a && b>c && b>>d){
//      cout<<"b is biggest";
//  }
//  else if(c>a && c>b && c>d){
//      cout<<"c is biggest";
//  }
//  else if(d>a )
// int a,b,c,d;
// cin>>a>>b>>C>>d;
// int n;
// cin>>n;
int i=1,s=0;
while(i<=10){
    s=s+i;
   
    i=i+2;
}
cout<<s<<endl;
}
int m;
cin>>m;
int a[m];

for(int i=0;i<m;i++){
    cin>>a[i];
}
int max=a[0];
int min=a[0];
for(int i=0;i<m;i++){
    if(max<a[i]){
        max=a[i];
    }
    if(min>a[i]){
        min=a[i];
    }
}
cout<<max<<endl<<min;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    //binary search
    int m;
    cin>>m;
    int a[m];
    int low=0;
    int high=m-1;
    int mid,c;
    int target;
    cin>>target;
    for(int i=0;i<m;i++){
        cin>>a[m];
    }
    while(a[m]>0){
        mid=(low+high)/2;
        if(mid==target){
            cout<<"target is found";
            c=1;
            break;
        }
       else if(mid>target){
            high=mid-1;
        }
        else(mid<target){
            low=mid+1;
        }
        
    }
    if(c=0){
        cout<<"target is not found";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    
        
    return ans;
}
int main() {
    int even[13]={1,2,3,3,3,3,3,3,3,3,3,4,5};
    cout<<"First Occurence of 3 is at index "<<firstOcc(even,13,3)<<endl;
    cout<<"Last Occurence of 3 is at index "<<lastOcc(even,13,3);
    
    return 0;

}
//peak mountain
#include <bits/stdc++.h>

using namespace std;
class solution{
    public:
    int peakmountainindexarray(vector<int>&arr){
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
            
    }
    return s;
    }
};
int main(){
    int arr[7]={2,3,4,5,6,1,9};
    int ans= peakmountainindexarray(vector<int>&arr);
    cout<<ans;
}



       
#include <bits/stdc++.h>
using namespace std;
void countingsort(int a[],int n,int place){
    int count[10]=(0);
    for(int i=0;i<n;i++){
        count[(a[i]/place)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[ ]]
    }
}
void radixsort(int a[],int n){
    int k=a[0];
    for(int i=1;i<n;i++){
        k=max(a[i],k);
        }
        for(int place=1;k/place>0;place=place*10){
            countingsort(a,n,place);
        }
        
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    
	}
	redixsort(a,n);

}
#include <bits/stdc++.h>
using namespace std;
void bucketsort(float arr[],int size){
    vector<vector<float>>bucket(size,vector<float>());
    //step1
    
    
    //step2: inserting elements into bucket
    for(int i=0;i<size;i++){
        int index=arr[i]*size;
        bucket[index].push_back(arr[i]);
    } 
    //step 3 : sorting individual bucket
    for(int i=0;i<size;i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    //step4:combining elements from bucketsort
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }
}

int main() {
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size=sizeof(arr)/sizeof(arr[0]);
    bucketsort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    
}
return 0;
}




		
	
	






    




 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 








