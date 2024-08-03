#include <iostream>



int main() {

     std::cout << "Задание 1. Кукушка";

     int time;
     int i = 1;
     std::cout << "Который час? ";
     std::cin >> time;

     while (i <= time) {
         if (time > 0 && time <= 12) {
             std::cout << i << ".Ку-ку\n";
             ++i;
         }else {
             std::cout << "Введено некореконое время.";
             break;
         }
     }

     std::cout << "___________________________________________________________";

     std::cout << "Задание 2. Слишком большие числа\n";

     int num;
     int i = 0;
     std::cout << "Введите число: ";
     std::cin >> num;

     if (num == 0) {
         ++i;
     }


     while (num != 0) {
         ++i;
         num /= 10;
     }

     std::cout << "Цифр в числе: " << i << "\n";

    std::cout << "___________________________________________________________\n";

     std::cout << "Задание 3. Коллекторы\n";

     std::string name;
     int debt;

     std::cout << "Введите имя должника: ";
     std::cin >> name;
     std::cout << "Введите сумму долга: ";
     std::cin >> debt;

     while(debt != 0 || debt > 0) {
         std::cout << "Верни долг " << name << "!\n";
         std::cout << "Осталость - " << debt << ".\n";

         int payment;
         std::cin >> payment;
         if (debt > payment) {
             debt -= payment;
         }else {
             debt = 0;
             payment -= debt;
             std::cout << "Молодец, на твойм счету осталось - " << payment << ".\n";
         }
     }

     std::cout << "___________________________________________________________\n";

     std::cout << "Задание 4. Счастливый билетик\n";

     int nTicket;
     int a = 0;
     int b = 0;
     int index = 0;
     std::cout << "Введите номер билета:";
     std::cin >> nTicket;

     while (nTicket !=0) {
         ++index;
         if (index <= 3) a += nTicket % 10;
         else b += nTicket % 10;
         nTicket /= 10;
     }

     if (a == b) std::cout << "Билет счастливывй!\n";
     else std::cout << "Повезет в следующий раз!\n";

     std::cout << "___________________________________________________________\n";

     std::cout << "Задание 5. Числа Фибоначчи\n";

     int result = 1;
     int nA = 1;
     int nB = 1;
     int nf;
     int index = 2;
     std::cout << "Введите номер последовательности:";
     std::cin >> nf;

     while (index != nf) {
         if (nf < 3) {
             result = 1;
             break;
         }
         result = nA + nB;
         nA = nB;
         nB = result;
         ++index;
     }

     std::cout << "Число в последовательности:" << result << ".\n";

    std::cout << "___________________________________________________________\n";

     std::cout << "Задание 6. Вклады\n";

     int size = 0;
     int rate = 0;
     int sum = 0;
     int year = 0;

     std::cout << "Введите размер вклада:\n";
     std::cin >> size;
     std::cout << "Введите процентную ставку:\n";
     std::cin >> rate;
     std::cout << "Введите желаемую сумму:\n";
     std::cin >> sum;

     while (size < sum) {
         ++year;
         size += size * rate/100;
     }

     std::cout << " Придётся подождать: "<< year <<" лет\n";

     std::cout << "___________________________________________________________\n";

     std::cout << "Задание 7. Сокращение дроби* (дополнительное задание)\n";

     int numerator;
     int denominator;
     int index = 0;
     int num = 0;
     int den = 0;

     std::cout << "Введите числитель:\n";
     std::cin >> numerator;
     std::cout << "Введите знаменатель:\n";
     std::cin >> denominator;

     while (index < numerator && index < denominator) {
         ++index;
         if (numerator % index == 0) {
             if (denominator % index == 0) {
                 num = numerator / index;
                 den = denominator / index;
             }
         }
     }

     std::cout << "Результат: " << num <<"/" << den << ".\n";

     std::cout << "___________________________________________________________\n";

    std::cout << "Задание 8. Угадай число* (дополнительное задание)\n";

    int num = 64;
    int divider = num;
    std::string answer;

    while(true) {
        std::cout << "Вы загадали " << num << "?.\n";
        std::cin >> answer;
        if (answer == "да") break;
        else {
            std::cout << "Загаданное число больше или меньше чем" << num << "?.\n";
            std::cin >> answer;
            divider /= 2;
            if (answer == "больше") num += divider;
            else if (answer == "меньше") num -= divider;;
        }
    }
    std::cout << num;

    std::cout << "___________________________________________________________\n";

    return 0;
}
