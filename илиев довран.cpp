
#include <iostream>
#include <vector>
#include <string>

// ����� ��� ������������� ���������
class Animal {
public:
    Animal(const std::string& name, const std::string& species)
        : name(name), species(species) {}

    // ����� ��� ��������� ���������� � ��������
    std::string getInfo() const {
        return "Name: " + name + ", Species: " + species;
    }

private:
    std::string name;
    std::string species;
};

// ����� ��� ������������� ��������
class Zoo {
public:
    // ����� ��� ���������� ��������� � �������
    void addAnimal(const Animal& animal) {
        animals.push_back(animal);
    }

    // ����� ��� ����������� ���� �������� � ��������
    void displayAnimals() const {
        for (const auto& animal : animals) {
            std::cout << animal.getInfo() << std::endl;
        }
    }

private:
    std::vector<Animal> animals;
};

int main() {
    // ������� ������� ��������
    Animal lion("Leo", "Lion");
    Animal elephant("Ellie", "Elephant");
    Animal giraffe("Gerry", "Giraffe");

    // ������� ������ ��������
    Zoo zoo;

    // ��������� �������� � �������
    zoo.addAnimal(lion);
    zoo.addAnimal(elephant);
    zoo.addAnimal(giraffe);

    // ���������� ���� �������� � ��������
    zoo.displayAnimals();

    return 0;
}
