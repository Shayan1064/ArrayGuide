#include <iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter the Array size"<<endl;
    cin>>count;
    int arr[count];
    cout<<"Enter Array elements"<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int position;
    cout<<"Enter the position at which you want deletion"<<endl;
    cin>>position;
    cout<<"Elements after deletion"<<endl;
for (int i = position+1; i < count; i++)
{
    arr[i-1]=arr[i];
    
}
count--;
for (int i = 0; i < count; i++)
{
    cout<<arr[i];
}

}