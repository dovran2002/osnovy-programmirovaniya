#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
public:
    Animal(const std::string& animalName) : name(animalName) {}
    virtual void sound() = 0;
};

class Tiger : public Animal {
public:
    Tiger(const std::string& tigerName) : Animal(tigerName) {}
    void sound() override {
        std::cout << "The tiger " << name << " hunt." << std::endl;
    }
};

class Bear : public Animal {
public:
    Bear(const std::string& bearName) : Animal(bearName) {}
    void sound() override {
        std::cout << "The bear " << name << " likes to sleep in winter." << std::endl;
    }
};

class Snake : public Animal {
public:
    Snake(const std::string& snakeName) : Animal(snakeName) {}
    void sound() override {
        std::cout << "The snake " << name << " sheds its skin." << std::endl;
    }
};

int main() {
    Tiger tiger("Arslan");
    Bear bear("Vinny");
    Snake snake("Bane");

    tiger.sound();
    bear.sound();
    snake.sound();

    return 0;
}