#include <iostream>
int main() {

    // Задание 1. Улучшаем гонщика
    std::cout << "Задание 1. Улучшаем гонщика\n";
    int lap = 4;
    int engine = 254;
    int wheels = 93;
    int steerinWheel = 49;
    int wind = 21;
    int rain = 17;
    int speed = (engine + wheels + steerinWheel) - (rain + wind);
    std::cout << "===================\n";
    std::cout << "Супер гонки. Круг " << lap << "\n";
    std::cout << "===================\n";
    std::cout << "Шумахер (" << speed << ")\n";
    std::cout << "===================\n";
    std::cout << "Водитель: Шумахер\n";
    std::cout << "Скорость: " << speed << "\n";
    std::cout << "-------------------\n";
    std::cout << "Оснащение\n";
    std::cout << "Двигатель: +" << engine << "\n";
    std::cout << "Колеса: +" << wheels << "\n";
    std::cout << "Руль: +" << steerinWheel << "\n";
    std::cout << "-------------------\n";
    std::cout << "Действия плохой погоды\n";
    std::cout << "Ветер: -" << wind << "\n";
    std::cout << "Дождь: -" << rain << "\n";
    std::cout << "________________________________________________________\n\n";

    std::cout << "Задание 2. Калькулятор стоимости товара\n";
    int price = 13;
    int deliverPrice = 3;
    float sale = price * 0.15;
    float fullPrice = price + deliverPrice - sale;

    std::cout << "Full Price: " <<  fullPrice <<"\n";
    std::cout << "________________________________________________________\n\n";


    std::cout << "Задание 3. Время, время!\n";

    int lensm = 360;
    int timeorder = 4;
    int timepackorder = 6;
    int numClien = lensm/(timeorder+timepackorder);

    std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
    std::cout << "Введите длительность смены в минутах: " << lensm << "\n";
    std::cout << "Сколько минут клиент делает заказ? " << timeorder << "\n";
    std::cout << "Сколько минут кассир собирает заказ? " << timepackorder << "\n";
    std::cout << "-----Считаем-----\n";
    std::cout << "За смену длиной " << lensm << " минут кассир успеет обслужить "<< numClien << " клиентов.\n";
    std::cout << "________________________________________________________\n\n";


    std::cout << "Задание 4. Непонятная квитанция\n";

    int gensum = 360;
    int numentranc = 4;
    int numbersApart = 6;
    int sumApart = gensum/(numentranc*numbersApart);

    std::cout << "риветствуем вас в калькуляторе квартплаты!\n";
    std::cout << "Введите сумму, указанную в квитанции: " << gensum << "\n";
    std::cout << "Сколько подъездов в вашем доме? " << numentranc << "\n";
    std::cout << "Сколько квартир в каждом подъезде?  " << numbersApart << "\n";
    std::cout << "-----Считаем-----\n";
    std::cout << "аждая квартира должна платить по "<< sumApart << ".\n";
    std::cout << "________________________________________________________\n\n";

}