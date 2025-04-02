#include <iostream>
using namespace std;

int main()
 {

    int user;
    
    cout << "Enter array size: ";
    cin >> user;

    int array[user];


    cout << "Enter array elements: "<<endl;

    for (int i = 0; i < user; i++)
     {
        cin >> array[i];
    }

    cout << "Negative array elements:";

    for (int i = 0; i < user; i++) 
    {
        if (array[i] < 0) 
        {
            cout << array[i] << " ";
        }
    }

}