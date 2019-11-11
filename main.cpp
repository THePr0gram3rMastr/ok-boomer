#include <iostream>


int main(int argc, char** argv) {

    std::cout << *argv << std::endl;

    //char pointer points to memory address of string literal "Cian"
    char* name = "Cian";

    /*char double pointer points to memory address of char pointer "name" that points to the memory address of string
    literal "Cian" */
    char** point = &name;

    //output each element of the char array by dereferencing name+(element)
    for(int i = 0; i < 4; i++) {
        std::cout << *(name+i) << std::endl;
    }

    //using a declaration statement to define x as integer variable, assigning "10" to x
    int x = 10;

    //declare integer pointer "pointer" and assign the memory address of x to it
    int* pointer = &x;

    //output memory address integer pointer "pointer" points to
    std::cout << pointer << std::endl;

    //output data stored at the memory address integer pointer "pointer", points to
    std::cout << *pointer << std::endl;

    //pointer + 4 bytes
    std::cout << pointer+1 << std::endl;

    //declare integer array of size 12 bytes (3 ints)
    int data[3];

    //for each element of "data", assign i to it
    for(int i = 0; i < 4; i++) {
        data[i] = i;
    }

    //output each element of data by dereferencing data+(element)
    for(int i = 0; i < 4; i++) {
        std::cout << *(data+i) << std::endl;
    }

    /*allocate 40 bytes on the heap, integer pointer "heapAllocate" will point to the address of this heap allocated
    array */
    int* heapAllocate = new int[10];

    //assign i to each element of heap allocated array "heapAllocate" and output each element to the console
    for(int i = 0; i < 10; i++) {
        *(heapAllocate+i) = i;

        std::cout << heapAllocate[i] << std::endl;
    }

    //declare a struct "PlayerData" that stores age, name and player score
    struct PlayerData {
        unsigned int age;
        char* name;
        float score;
    } player;

    //assign 50 to unsigned int "age"
    player.age = 50;
-
    if(player.age >= 18 && player.age < 50) {
        std::cout << "Access Granted Yeet" << std::endl;
    } else if(player.age >= 50) {
        std::cout << "okay boomer" << std::endl << "nice try" << std::endl;
    }

    return 0;
}
