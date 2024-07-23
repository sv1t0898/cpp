#include <iostream>

int main() {

    std::cout << "Задача 1. Симулятор маршрутки.";

    int passanger;
    int pasangerCabin = 0;
    int rate = 20;
    int cashRegister = 0;

    std::string busStop1 = "Улица программистов";
    std::string busStop2 = "Проспект алгоритмов";
    std::string busStop3 = "Набережная ошибок";
    std::string busStop4 = "Переулок снипетов";

    std::cout << "Прибываем на остановку «" << busStop1 << "». В салоне пассажиров: " << pasangerCabin << ".\n";
    std::cout << "Сколько пассажиров вышло на остановке? ->";
    std::cin >> passanger;
    pasangerCabin -= passanger;
    std::cout << "Сколько пассажиров зашло на остановке? ->";
    std::cin >> passanger;
    pasangerCabin += passanger;
    cashRegister += rate * passanger;
    std::cout << "-----------Едем---------\n";
    std::cout << "Прибываем на остановку «" << busStop2 << "». В салоне пассажиров: " << pasangerCabin << ".\n";
    std::cout << "Сколько пассажиров вышло на остановке? ->";
    std::cin >> passanger;
    pasangerCabin -= passanger;
    std::cout << "Сколько пассажиров зашло на остановке? ->";
    std::cin >> passanger;
    pasangerCabin += passanger;
    cashRegister += rate * passanger;
    std::cout << "-----------Едем---------\n";
    std::cout << "Прибываем на остановку «" << busStop3 << "». В салоне пассажиров: " << pasangerCabin << ".\n";
    std::cout << "Сколько пассажиров вышло на остановке? ->";
    std::cin >> passanger;
    pasangerCabin -= passanger;
    std::cout << "Сколько пассажиров зашло на остановке? ->";
    std::cin >> passanger;
    pasangerCabin += passanger;
    cashRegister += rate * passanger;
    std::cout << "-----------Едем---------\n";
    std::cout << "Прибываем на остановку «" << busStop4 << "». В салоне пассажиров: " << pasangerCabin << ".\n";
    std::cout << "Всего заработали: " << cashRegister << ".\n";
    std::cout << "Зарплата водителя: " << cashRegister * 0.25 << ".\n";
    std::cout << "Расходы на топливо: " << cashRegister * 0.20 << "\n";
    std::cout << "Налоги: " << cashRegister * 0.20 << ".\n";
    std::cout << "Расходы на ремонт машины: " << cashRegister * 0.20 << ".\n";
    std::cout << "Итого доход: " << cashRegister * 0.15 << ".\n";

    std::cout << "__________________________________________________________________\n";

    std::cout << "Задача 2. Обмен местами\n";

    int a = 5;
    int b = 10;
    std::cout << "a = "<< a <<"\n";
    std::cout << "b = "<< b <<"\n";
    std::swap (a,b);
    std::cout << "a = "<< a <<"\n";
    std::cout << "b = "<< b <<"\n";
    int c = a;
    a = b;
    b = c;
    std::cout << "a = "<< a <<"\n";
    std::cout << "b = "<< b <<"\n";

    std::cout << "__________________________________________________________________\n";

    std::cout << "Задача 3. Злостные вредители\n";

    int startLen = 100;
    int nigthDecrease = 20;
    int dailyGrowth = 50;
    int result;
    float days = 2;

    result = (startLen + (dailyGrowth - nigthDecrease) * days) + dailyGrowth/2;
    std::cout << result << ".\n";



    std::cout << "__________________________________________________________________\n";

    std::cout << "Задача 4 (дополнительная). Повышаем градус сложности*\n";

    int a = 345234;
    int b = 234;
    std::cout << "a = "<< a <<"\n";
    std::cout << "b = "<< b <<"\n";
    a += b;
    b = a - b;
    a -= b;
    std::cout << "a = "<< a <<"\n";
    std::cout << "b = "<< b <<"\n";

    std::cout << "__________________________________________________________________\n";


}
