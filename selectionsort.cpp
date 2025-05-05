#include <iostream>
using namespace std;
void selectionsort(int array[],int count){
for (int i = 0; i < count-1; i++)
{
    int small=i;
    for (int j = i+1; j < count; j++)
    {
        if (array[j]<array[small])
        {
            small=j;
        }   
    }
    swap (array[i],array[small]);
}
}
void printarray(int array[],int size){
    for (int i = 0; i < size; i++)
{
    cout<<array[i]<<" ";
}
}
int main(){
    int size=5;
    int array[]={2,5,4,3,1};
selectionsort(array,size);
printarray(array,size);
}