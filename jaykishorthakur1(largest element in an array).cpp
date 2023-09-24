// largest element in an array
 
#include<iostream>
using namespace std;

int largestNumber(int arr[], int n){
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];

        }

    }
    return max;
}

int main(){
    int arr[]={10,667,2753,297,6666,2,7,4,5};
    int size=9;
    int ans= largestNumber(arr, size);
    cout<<"largest number:-"<<ans<<endl;
}


 
//insorted array:-
int isSorted(int n, vector<int> &arr) {
      for(int i=0; i<n-1; i++){
          if(arr[i]>arr[i+1]){
              return 0;
          }
           
      }
      return 1;
}
 
