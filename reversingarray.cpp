#include <iostream>
using namespace std;
void reverse(int array[],int count){

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
    for (int i = 0; i < count; i++)
    {
        cout<<array[i];
    }
    int i=0,j=count-1;
   while (i<j)
   {
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    
   }
   i++;
    j--;
   for (int k = 0; k < count; i++)
   {
    cout<<array[k];
   }
   
}