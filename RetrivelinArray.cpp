#include <iostream>
using namespace std;
int retrivel(int array[],int count,int index){
for (int i = 0; i < count; i++)
{
    if (array[i]==index)
    {
        return i;
    }
    
}
return -1;
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
    cout<<"Enter an element you want to retrive "<<endl;
    int element;
    cin>>element;
    cout<<"The element is at index "<<retrivel(array,count,element);
}