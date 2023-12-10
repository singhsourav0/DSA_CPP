#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int n, int key){
    for (int i ; i<n; i++){
    if (arr[i] == key){
    return i;
    }
   }
    return -1;
  }
 
int main(){
int n;
cout<<"No. of Elements: ";
cin>>n;
int arr[n];
for (int i = 0; i<n; i++) {
   cout<<"enter "<<i+1<<"No. Element: ";
   cin>>arr[i];
}
int key;
cout<<"enter element which you want to search: ";
cin>>key;

cout<<LinearSearch(arr, n, key)<<endl;
return 0;
}

