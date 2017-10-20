#include <iostream>

int main()
{
    {// Homework06-1 pointer arithmetics

    // The size of v array is 20bytes.
    // Therefor, the size of the int in this computer architecture is 4 byte
    int v[5] = {1,2,3,4,5};
    std::cout << "Size of int v[5]: " << sizeof(v) << std::endl;
    
    // v is a constant pointer value
    std::cout << "v:\t" << v << std::endl;
    // Therefore, int* variable may hold the pointer value
    int *pv = v;
    std::cout<< "pv:\t" << pv <<std::endl;
    // Also, v[0] is an integer space. Therefor, &v[0] returns the same address with v
    std::cout<< "&v[0]:\t" << &v[0] << std::endl;
    // pv + 1 means the next item of the array.
    std::cout << "pv+1:\t" << pv+1 << std::endl;
    std::cout << "&v[1]:\t" << &v[1] << std::endl;
    std::cout << "pv[1]:\t" << &pv[1] << std::endl;
    
    
    // int** ppv is a pointer variable for int* variable
    // You cannot put &v to ppv because, v is a constant array address value.
    // Note that int* and int[] are different.
    int** ppv = &pv;
    std::cout << "ppv:\t" << ppv << std::endl;
    std::cout << "ppv+1:\t" << ppv+1 << std::endl;
    }
    std::cout << std::endl;
    {// Homework06-2 two dimensional array allocation/deallocation
    
        // two dimensional array allocation: 10 by 10
        // User may allocate int* array to int** pointer variable using new keyword
        int** pp_array;
        // Here, we have arrays of int*. That means, pp_array[0] is an int* variable.
        pp_array = new int*[10]; // allocating rows
        // We assign int array to pp_array[]
        for(int i = 0; i < 10; i++)
            pp_array[i] = new int[10]; // allocationg columns
        
        // initalization of two dimensional array
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                pp_array[i][j] = i*10 + j;
            }
        }
        
        // accessing elements
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                std::cout << pp_array[i][j] << " ";
            }
            std::cout<< std::endl;
        }
        
        // Deallocaiton
        // Deallocation is always backward.
        for(int i = 0; i < 10; i++)
            delete[] pp_array[i]; // deallocating columns
        delete[] pp_array; // deallocating rows
    }
}