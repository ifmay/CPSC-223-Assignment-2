#include "LinkedList.h"
#include <iostream>

void testInsertion() {
    LinkedList<int> list;
    list.insert(5);
    list.insert(105);
    
    int testNum = 1;

    try{
        if(list.search(5)){
            std::cout << "TEST[" << testNum << "]...PASSED" << std::endl;
        }else{
            throw testNum;
        }
    }catch(int testNum){
        std::cout << "TEST[" << testNum << "]...FAILED" << std::endl;
    }
}

void testRemoval() {
    LinkedList<int> list;
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.remove(10);

    int testNum = 2;

    try{
        if(!list.search(10)){
            std::cout << "TEST[" << testNum << "]...PASSED" << std::endl;
        }else{
            throw testNum;
        }
    }catch(int testNum){
        std::cout << "TEST[" << testNum << "]...FAILED" << std::endl;
    }
}

void testSearch() {
    LinkedList<int> list;
    list.insert(5);
    list.insert(10);
    list.insert(15);

    int testNum = 3;

    try{
        if(list.search(5) && list.search(10) && list.search(15)){
            std::cout << "TEST[" << testNum << "]...PASSED" << std::endl;
        }else{
            throw testNum;
        }
    }catch(int testNum){
        std::cout << "TEST[" << testNum << "]...FAILED" << std::endl;
    }
}

void testDisplay(){
    std::cout << "TESTDISPLAY:" << std::endl;
    LinkedList<int> list;
    list.insert(1);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(5);
    list.insert(8);
    list.display();
}

void testDisplay2(){
    std::cout << "TESTDISPLAY2:" << std::endl;
    LinkedList<int> list;
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(5);
    list.insert(8);
    list.display();
    list.remove(3);
    list.display();
    list.remove(5);
    list.display();

}

void testDisplay3(){
    std::cout << "TESTDISPLAY3:" << std::endl;
    LinkedList<int> list;
    list.insert(1);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(5);
    list.insert(8);
    list.display();
    list.remove(1);
    list.remove(1);
    list.insert(1);
    list.display();

}

int main() {
    testInsertion();
    testRemoval();
    testSearch();
    testDisplay();
    testDisplay2();
    testDisplay3();

    //you add three more tests, modeled after try-catch
    //github actions will match against pass fail syntax
    //used above. Model your tests 4, 5, and 6 after those.

    return 0;
}
