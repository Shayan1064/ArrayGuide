#include <iostream>
using namespace std;
void printArray(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<< array[i];
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
    printArray(array,count);
}