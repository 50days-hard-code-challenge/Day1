//second largest element in an array
 

#include<iostream>
#include <climits>
using namespace std;

int largestNumber(int arr[], int n){
     int max= INT_MIN;
     int secondmax= INT_MIN;
     for(int i=0; i<n; i++){
        if(arr[i]>max){
            secondmax=max;
            max= arr[i];
        }
        else{
            if(arr[i]>secondmax and arr[i]<max){
                secondmax= arr[i];
            }
        }
     }
     return secondmax;
}

int main(){
    int arr[]={10,667,2753,297,6666,2,7,4,5};
    int size=9;
    int ans= largestNumber(arr, size);
    cout<<"largest number:-"<<ans<<endl;
}

