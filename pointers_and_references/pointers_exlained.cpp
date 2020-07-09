#include <iostream>

int main(){

    // 1st example - pointer to value on the stack
    int x = 10;
    int* ptr_x {&x};
    std::cout << "Address of x = " << &x << 
        " and value of x = " << x << std::endl;
    std::cout << "Address of ptr_x = " << ptr_x << 
        " and value of ptr_x = " << *ptr_x << std::endl;
    std::cout << "Size of pointer = " << sizeof(ptr_x) << std::endl;
    std::cout << "Size of integer = " << sizeof(x) << std::endl;

    // 2nd example - pointer to value on the heap
    int* ptr_y = new int;
    *ptr_y = 7;
    std::cout << "Address of ptr_y = " << ptr_y << 
        " and value of ptr_y = " << *ptr_y << std::endl;
    delete ptr_y;

    // 3nd example - pointer to value on the heap with initlization
    int* ptr_z {new int(8)};
    std::cout << "Address of ptr_z = " << ptr_z << 
        " and value of ptr_z = " << *ptr_z << std::endl;
    delete ptr_z;

    // 4th example - pointer to an array on the heap
    int* ptr_arr {nullptr};
    ptr_arr = new int[3];
    *ptr_arr = 1;
    *(ptr_arr + 1) = 2;
    std::cout << "Array on the heap : ";
    for (int i {0}; i < 3; i++)
        std::cout << *(ptr_arr+i) << " " << ptr_arr+i << " "; // 1 2 0
    std::cout << std::endl;
    std::cout << "Size of pointer = " << sizeof(ptr_arr) << std::endl;
    delete [] ptr_arr;

    // 5th example - pointer to an array on the heap with initialization
    int* ptr_arr2 = new int[3]{2, 4, 7};
    std::cout << "Array on the heap with initlization: ";
    for (int i {0}; i < 3; i++)
        std::cout << *(ptr_arr2+i) << " "; 
    std::cout << std::endl;
    delete [] ptr_arr2;

    // 6th example - pointer to an array on the heap with copying data from a stack array
    int arr_stack [3]{1, 3, 5};
    int* ptr_arr3 = new int[3];
    std::cout << "Array on the heap with copying data from a stack array: ";
    for (int j {0}; j < 3; j++){
        *ptr_arr3 = arr_stack[j];
        std::cout << *ptr_arr3 << " "; 
        if (j != 2)
            ptr_arr3++;
        else
            ptr_arr3 = ptr_arr3 - 2;    // returning pointer to initial position
    }
    std::cout << std::endl;
    delete [] ptr_arr3;
    return 0;
}