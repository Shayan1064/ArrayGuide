#include <iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int indexx=start-1,pavit=arr[end];
    for (int i = start; i < end; i++)
    {
        if (arr[i]<=pavit)
        {
            indexx++;
            swap(arr[i],arr[indexx]);
        }
        
    }
    indexx++;
    swap(arr[end],arr[indexx]);
    return indexx;
}

void quickSort(int arr[],int st,int end){
    if (st<end)
    {
        int pavitIndex=partition(arr,st,end);
        quickSort(arr,st,pavitIndex-1);
        quickSort(arr,pavitIndex+1,end);
        }
    }
    


int main(){
    int arr[]={8,6,4,11,5};
    // int start,End;
    // cout<<"Start"<<endl;
    // cin>>start;
    // cout<<"End"<<endl;
    // cin>>End;
quickSort(arr,0,4);
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}

}