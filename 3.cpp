#include <iostream>
using namespace std;

int main()
 {

    int a;

    cout << "Enter array size: ";
    cin >> a;

    int array[a][a], trp[a][a];

    
    cout << "Enter array elements:"<<endl;

    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }

    
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            trp[j][i] = array[i][j];
        }
    }

    cout << "array transpose matrix:"<<endl;

    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            cout << trp[i][j] << " ";
        }
        cout << endl;
    }

}
