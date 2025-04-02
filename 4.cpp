#include <iostream>
using namespace std;

int main()
{

    int r,c;

    cout << "Enter row size of array : ";
    cin >> r;
    cout << "Enter column size of array: ";
    cin >> c;

    int array[r][c];

    
    cout << "Enter array elements:"<<endl;

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cout << "array[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }

    
    cout << "Sum of row:"<<endl;

    for (int i = 0; i < r; i++) 
    {
        int rowSum = 0;

        for (int j = 0; j < c; j++) 
        {
            rowSum += array[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    
    cout << "Sum of column:"<<endl;
    
    for (int j = 0; j < c; j++) 
    {
        int columSum = 0;
        
        for (int i = 0; i < r; i++) 
        {
            columSum += array[i][j];
        }
        cout << "Column " << j + 1 << ": " << columSum << endl;
    }

}
