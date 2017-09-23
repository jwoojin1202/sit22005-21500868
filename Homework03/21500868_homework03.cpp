#include <iostream>

int main(int argc, char** argv)
{
    int i, div;
    int scores[10] = {90, 28, 89, 56, 99, 50, 100, 98, 95, 14};
    char grades[10];
    
    for (i = 0; i < 10; i++){
        
        div = scores[i] / 10;
        switch(div){
            case 10: grades[i] = 'A';
                break;
            case 9: grades[i] = 'A';
                break;
            case 8: grades[i] = 'B';
                break;
            case 7: grades[i] = 'C';
                break;
            case 6: grades[i] = 'D';
                break;
            default: grades[i] = 'F';
                break;
        }
    }
    
    for (i = 1; i <= 10; i++){
        std::cout<< "[" << i << "] ("<< scores[i-1] << "/100) "<< grades[i-1] << std::endl;
    }
}