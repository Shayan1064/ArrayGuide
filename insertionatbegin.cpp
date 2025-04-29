#include <iostream>
using namespace std;
void insertion(int array[],int size,int item){
for (int i = size; i > 0; i--)
{
   array[i]=array[i-1];
}
array[0]=item;
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
insertion(array,count,element);



}