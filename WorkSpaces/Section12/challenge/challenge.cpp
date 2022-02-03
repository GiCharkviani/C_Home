#include <iostream>

using namespace std;
int *apply_all(const int *const ar, size_t size1, const int *const ar2, size_t size2);
void print(const int *arr, size_t size);

int *apply_all(int *const ar, size_t size1, const int *const ar2, size_t size2)
{
    int *new_array = new int;
    int controller{0};

    for (size_t i{0}; i < size2; ++i)
    {
        for (size_t j{0}; j < size1; ++j)
        {
            *(new_array + controller) = *(ar + j) * *(ar2 + i);
            controller++;
        }
    }
    return new_array;
}

void print(int *arr, size_t size)
{
    for (size_t i{0}; i < size; ++i)
        cout << *arr++ << " ";
    cout << endl;
}

int main()
{

    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);
    delete[] results;

    cout << endl;

    return 0;
}