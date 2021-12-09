#include<iostream>
using namespace std;
// struct Arr{
//     int arr
// };


void insert(int val,int index);
void reverse(int*);
void leftShift(int*);
void leftRotate(int*);
void rightShift(int*);
void rightRotate(int*);
int binarySearch(int*,int,int,int);
int isSorted();
void insertInSort();
void negOnLeft();
int main(){
    int arr[]={4,8,10,15,21,24,27,29,33,34,37,39,41,43};
    int res=binarySearch(arr,0,15,24);
    cout<<"Result => "<<res<<endl;
    return 0;

}

int binarySearch(int* arr,int l,int h,int key){
    while(l>=h){int mid=(l+h)/2;
    if(key==arr[mid]) return mid;
    else if(key<arr[mid]) h=mid-1;
    else l=mid+1;
}
return -1;
} 
