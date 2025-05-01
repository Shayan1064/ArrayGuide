#include <iostream>
using namespace std;
int search(int array[],int count,int element){
    for (size_t i = 0; i < count; i++){
        if (array[i]==element){
            return i;
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
    cout<<"The element found at index "<<search(array,count,element);
}
