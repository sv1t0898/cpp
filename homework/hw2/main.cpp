#include <iostream>
int main() {
    int sum = 36000;
    int numentrance = 4;
    int numapart = 60;
    int price = sum/(numentrance*numentrance);

    std::cout << "Приветствуем вас в калькуляторе квартплаты!\n\n";
    std::cout << "Введите сумму, указанную в квитанции: " << sum << "\n";
    std::cout << "Сколько подъездов в вашем доме? " << numentrance << "\n";
    std::cout << "Сколько квартир в каждом подъезде? " << numapart << "\n";
    std::cout << "-----Считаем-----\n";
    std::cout << "ЗКаждая квартира должна платить по "<< price << ".\n";
}