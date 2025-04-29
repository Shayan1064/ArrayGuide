#include <iostream>
using namespace std;
int binaryseach(int array[],int count,int element){
int low=0;
int high=count;
while (low<=high)
{
    int mid=(low+high/2);
    if (element==array[mid])
    {
        return mid;
    }
    if (element>array[mid])
    {
        low=mid+1;
    }else{
        high=mid-1;
    }
    
}

}
int main(){
    int count;
    cout<<"Enter the size of an array"<<endl;
    cin>>count;

    int array[count];
    cout<<"Enter the elements into array"<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>array[i];
    }
    int element;
    cout<<"Enter the element you want to insert"<<endl;
    cin>>element;
    cout<<"The search is found at index "<<binaryseach(array,count,element);
}