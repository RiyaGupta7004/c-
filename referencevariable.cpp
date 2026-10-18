#include <bits/stdc++.h>
using namespace std;
int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}
int fun(int n){
    int* ptr=&n;
    return ptr;
}
void update(int n){
    n++;
}
void update2(int &m){
    m++;
}

int main() {
	// your code goes here
// 	int i=5;
// 	//create a ref variable
// 	int& j=i;
// 	cout<<i<<endl;
// 	i++;
// 	cout<<j<<endl;
// 	j++;
// 	cout<<i<<endl;
// 	cout<<j<<endl;
int n=5;
cout<<"Before="<<n<<endl;
update(n);
cout<<"After="<<n<<endl;
int m=8;
cout<<"Before="<<m<<endl;
update2(m);
cout<<"After="<<m<<endl;
// func(a);
fun(n);


}
 