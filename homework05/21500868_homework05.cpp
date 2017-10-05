#include <iostream>
#include <stdlib.h>

int main()
{
    {
        char buf[100];
        
        std::cout << "Size of the Memory Chunk: " << sizeof(buf) << std::endl;
        std::cout << "Notice that the we have used the array name" \
                     "'buf' to indicate the staring address" << std::endl;
        std::cout << "Memory Address of Contents:\t" << static_cast<void*>(buf) << std::endl;
        std::cout << "Returns Memory Address:\t\t" << static_cast<void*>(&buf) << std::endl;
        std::cout << "====" << std::endl;
        
        char* pArray = buf;
        std::cout << "Size of the Memory Chunk: " << sizeof(pArray) << std::endl;
        std::cout << "Size of the Memory Chunk is diffent, but the pointer variable stores"\
                     " the starting address of 'buf' array" << std::endl;
        std::cout << "Memory Address of Contents:\t" << static_cast<void*>(pArray) << std::endl;
        std::cout << "Returns Memory Address:\t\t" << static_cast<void*>(&pArray) << std::endl;
     
    }
    
    return 0;
}

        