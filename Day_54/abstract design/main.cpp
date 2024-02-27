#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird) {
    bird->eat();
    bird->fly();
    bird->eat();
}

int main() {

    // Bird *bird = new sparrow();
    // Bird *bird = new eagle();
    Bird *bird = new pigeon();
    birddoesSomething(bird);

    // Bird *b2 = new Bird(); //any abstract class or c++ interface we can't create a object; 

    return 0;
}