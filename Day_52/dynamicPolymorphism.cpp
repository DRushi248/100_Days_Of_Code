#include<iostream>
using namespace std;

class Animal {
public: 
    virtual void sound() {
        cout << "Animal making sound" << endl;
    }

    virtual ~Animal() {
        cout << "~Animal dtor" << endl;
    }
};

class Dog : public Animal {
public: 
    void sound() override { //override writing is not necessary
        cout << "Dog barking" << endl;
    }

    ~Dog() {
        cout << "~Dog dtor" << endl;
    }
};

class Cat : public Animal {
public: 
    void sound() {
        cout << "Cat Meowing" << endl;
    }

    ~Cat() {
        cout << "~Cat dtor" << endl;
    }
}; 

class Parrot : public Animal {
public:
    void sound() override {
        cout << "Parrot mitthu mitthu" << endl;
    }

    ~Parrot() {
        cout << "~Parrot dtor" << endl;
    }
};

void sound(Animal *animal) {
    animal->sound(); //this line is polymorphic
    // animal->sound is behaving as per required object allocated at runtime
    // this sound is not animal sound this sound is decided at runtime
}

int main() {
    // Dog *dog = new Dog();
    // dog->sound();

    Animal *animal = new Dog();
    sound(animal);

    // animal = new Cat();
    // sound(animal);

    // animal = new Parrot();
    // sound(animal);

    delete animal;

    return 0;
}