#include <iostream>
using namespace std;
int main() {
    int* sales = new int[100];
    for (int i = 0; i < 100; ++i) {
        sales[i] = i + 1;  
    }
    cout << "Sales data before resizing :" << endl;
    for (int i = 0; i < 100; ++i) {
        cout << sales[i] << " ";
    }
    cout << endl;
    int* resized_sales = new int[200];
    for (int i = 0; i < 100; ++i) {
        resized_sales[i] = sales[i];
    }
    for (int i = 100; i < 200; ++i) {
        resized_sales[i] = i + 1;  
    }
    
    cout << "Sales data after resizing :" << endl;
    for (int i = 100; i < 200; ++i) {
        cout << resized_sales[i] << " ";
    }
    cout << endl;
    delete[] sales;       
	sales=resized_sales;
    delete[] resized_sales;
    return 0;
}


	
