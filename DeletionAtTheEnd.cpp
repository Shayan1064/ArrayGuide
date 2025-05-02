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
    cout<<"Elements after deletion"<<endl;
    count--;
for (int i = 0; i < count; i++)
{
    cout<<arr[i];
}
}