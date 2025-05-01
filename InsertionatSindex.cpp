#include <iostream>
using namespace std;
void insertion(int array[],int size,int item,int index){
if (index<0 && index >size)
{
   cout<<"Invalid index"<<endl;
}
for (int i = size; i > index; i--)
{
array[i]=array[i-1];
}
array[index]=item;
size++;
cout<<"Upgraded array"<<endl;
for (int i = 0; i < size; i++)
{
    cout<<array[i];
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
    cout<<"Enter you index"<<endl;
    int index;
    cin>>index;
insertion(array,count,element,index);



}