#include <iostream>
#define  LOG(x) std::cout<<x<<std::endl
int main() {
    /* pointers are just integers, stores memory adress
     * type* means that that memory adress expected to store "type" type of data
     * typles pointer := void*
     */
    int var=8;

    //ptr stores the memory address of var
    void* ptr=&var;
    int* ptr2;
    //*ptr dereferencing
    *ptr2=9;
    LOG(ptr2);
    LOG(&(*ptr2));
    LOG(*ptr2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}