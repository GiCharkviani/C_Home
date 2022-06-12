#include <iostream>

using namespace std;

int main()
{
    int *int_ptr {nullptr};
    int_ptr = new int; // allocating memory on heap
    cout << int_ptr << endl;
    *int_ptr = 1994;
    cout << "Data on heap after inserting: "<< *int_ptr << endl;
    delete int_ptr; // cleaning memory on heap
    cout << "Data on heap after clearing: "<< *int_ptr << endl;


    size_t size{0};
    double *temp_ptr {nullptr};
    cout << "How many temps? ";
    cin >> size;
    temp_ptr = new double[size]; // allocating size on memory
    cout << temp_ptr << endl;
    delete [] temp_ptr; // deleteing all size on memory. if not deleting, memory leak happens


    cout << endl;
    return 0;
}