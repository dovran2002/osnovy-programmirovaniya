
#include <iostream>
#include <vector>
#include <string>

// Класс для представления животного
class Animal {
public:
    Animal(const std::string& name, const std::string& species)
        : name(name), species(species) {}

    // Метод для получения информации о животном
    std::string getInfo() const {
        return "Name: " + name + ", Species: " + species;
    }

private:
    std::string name;
    std::string species;
};

// Класс для представления зоопарка
class Zoo {
public:
    // Метод для добавления животного в зоопарк
    void addAnimal(const Animal& animal) {
        animals.push_back(animal);
    }

    // Метод для отображения всех животных в зоопарке
    void displayAnimals() const {
        for (const auto& animal : animals) {
            std::cout << animal.getInfo() << std::endl;
        }
    }

private:
    std::vector<Animal> animals;
};

int main() {
    // Создаем объекты животных
    Animal lion("Leo", "Lion");
    Animal elephant("Ellie", "Elephant");
    Animal giraffe("Gerry", "Giraffe");

    // Создаем объект зоопарка
    Zoo zoo;

    // Добавляем животных в зоопарк
    zoo.addAnimal(lion);
    zoo.addAnimal(elephant);
    zoo.addAnimal(giraffe);

    // Отображаем всех животных в зоопарке
    zoo.displayAnimals();

    return 0;
}
