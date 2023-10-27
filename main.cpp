#include <iostream>
#include <vector>

using namespace std;

struct Student{
    //ваш код
};

class Group{
    private:
        vector<Student> students;
        string name;
    public:
        Group(string); //Конструктор принимает имя группы
        void add_student(/*Поля определяющие студента*/); //Функция добавления студента
        double average_age(); //Функция подсчета среднего возраста всех студентов
        double average_mark(); //Функция подсчета среднего балла по 3 предметам
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

