#include <iostream>



int main() {
    //system("chcp 65001"); // раскоментировать для завуска в windows
    std::cout << "Задание 1. Минимум из двух чисел\n";
    
    int numA;
    int numB;
    std::cout << "Введите первое число:";
    std::cin >> numA;
    std::cout << "Введите второе число:";
    std::cin >> numB;
    
    if (numA > numB) {
        std::cout << "Наименьшее число: "<< numB <<".\n";
    }else if (numA == numB) {
        std::cout << "Числа равны!\n";
    }else {
        std::cout << "Наименьшее число: "<< numA <<".\n";
    }
    
    std::cout << "____________________________________________________________________";
    
    std::cout << "Задание 2. Складываем в уме\n";
    
    int numC;
    int numD;
    int numI;
    std::cout << "Введите первое число:";
    std::cin >> numC;
    std::cout << "Введите второе число:";
    std::cin >> numD;
    std::cout << "Введите их сумму:";
    std::cin >> numI;
    
    if (numI == (numD + numC)) {
        std::cout << "Верно!\n";
    }else {
        std::cout << "Ошибка! Верный результат:" << numC + numD << ".\n";
    }
    
    std::cout << "____________________________________________________________________";
    
    std::cout << "Задание 3. Проверка на чётное число\n";
    
    int numF;
    
    std::cout << "Введите число: ";
    std::cin >> numF;
    std::cout << "-----Проверяем-----\n";
    if (numF%2 == 0) {
        std::cout << "Число " << numF << " — чётное\n";
    }else {
        std::cout << "Число " << numF << " — НЕ чётное\n";
    }
    
    std::cout << "____________________________________________________________________";
    
    std::cout << "Задание 4. Калькулятор опыта\n";
    
    int experience;
    std::cout << "Введите число очков опыта:";
    std::cin >> experience;
    
    if (experience >= 1000 and experience < 2500) {
        std::cout << "Ваш уровень: 2\n";
    }else if (experience >= 2500 and experience < 5000) {
        std::cout << "Ваш уровень: 3\n";
    }else if (experience >= 5000) {
        std::cout << "Ваш уровень: 4\n";
    }else {
        std::cout << "Ваш уровень: \n";
    }
    std::cout << "____________________________________________________________________";
    
    std::cout << "Задание 5. Кратность числа\n";
    
    int numG;
    int numH;
    
    std::cout << "Введите первое число: ";
    std::cin >> numG;
    std::cout << "Введите второе число: ";
    std::cin >> numH;
    std::cout << "-----Проверяем-----\n";
    if (numG%numH == 0) {
        std::cout << "Да,  "<< numG <<" делится на "<< numH <<" без остатка.\n";
    }else {
        std::cout << "Нет,  "<< numG <<" не делится на "<< numH <<" без остатка.\n";
    }
    
    std::cout << "____________________________________________________________________";
    
    std::cout << "Задание 6. Улучшим барберов\n";

    int man;
    int barbers;

    std::cout << "Сколько проживает мужчин в городе? ->";
    std::cin >> man;
    std::cout << "Сколько барберов в городе? ->";
    std::cin >> barbers;

    if ((man/30)/8 <= barbers) {
        std::cout << "Барберов в городе достаточно.\n";
    }else {
        std::cout << "Барберов не хватает, нужно еще "<< (man/30)/8 - barbers  <<".\n";
    }
    //????????????????????????????????
    std::cout << "____________________________________________________________________";
    
    std::cout << "Задание 7. Меню ресторана\n";
    
    int dayWeek;
    std::cout << "Введите день недели (от 1 до 7):";
    std::cin >> dayWeek;
    
    if (dayWeek == 1) {
        std::cout << "Меню сегодня (пн): \n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else if (dayWeek == 2) {
        std::cout << "Меню сегодня (вт): \n";
        std::cout << "Харчо суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else if (dayWeek == 3) {
        std::cout << "Меню сегодня (ср): \n";
        std::cout << "Борщь суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else if (dayWeek == 4) {
        std::cout << "Меню сегодня (чт): \n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else if (dayWeek == 5) {
        std::cout << "Меню сегодня (пт): \n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else if (dayWeek == 6) {
        std::cout << "Меню сегодня (сб): \n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else if (dayWeek == 7) {
        std::cout << "Меню сегодня (вс): \n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре \n";
        std::cout << "Морс\n";
    }else {
        std::cout << "Дней в неделе 7 попробуй еще.\n";
    }
    
    std::cout << "____________________________________________________________________";

    std::cout << "Задание 8. Зарплата (дополнительное задание)\n";
    
    int firstEmployee;
    int secondEmployee;
    int thirdEmployee;
    int higthPrice;
    int differencePrice;
    
    std::cout << "Введите зарплату первого сотрудника:\n";
    std::cin >> firstEmployee;
    std::cout << "Введите зарплату второго сотрудника:\n";
    std::cin >> secondEmployee;
    std::cout << "Введите зарплату третьего сотрудника:\n";
    std::cin >> thirdEmployee;
    std::cout << "-----Считаем-----\n";
    
    int averangePrice = (firstEmployee + secondEmployee + thirdEmployee)/3;
    
    if (firstEmployee > secondEmployee && secondEmployee > thirdEmployee) {
        std::cout << "Самая высокая зарплата в отделе: "<< firstEmployee <<" рублей.\n";
        higthPrice = firstEmployee;
    }else if (firstEmployee < secondEmployee && secondEmployee > thirdEmployee) {
        higthPrice = secondEmployee;
        std::cout << "Самая высокая зарплата в отделе: " << secondEmployee << " рублей.\n";
    }else {
        std::cout << "Самая высокая зарплата в отделе: " << thirdEmployee << " рублей.\n";
        higthPrice = thirdEmployee;
    }
    
    if (firstEmployee < secondEmployee && secondEmployee < thirdEmployee) {
        differencePrice = higthPrice - firstEmployee;
        std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: "<< differencePrice <<" рублей.\n";
    }else if (firstEmployee > secondEmployee && secondEmployee < thirdEmployee) {
        differencePrice = higthPrice - secondEmployee;
        std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << differencePrice << " рублей.\n";
    }else {
        differencePrice = higthPrice - thirdEmployee;
        std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе:" << differencePrice << " рублей.\n";
    }
    
    std::cout << "Средняя зарплата в отделе: " << averangePrice << " рублей.\n";
    
    std::cout << "____________________________________________________________________";

    std::cout << "Задание 9. Прогрессивный налог (дополнительное задание)\n";
    
    int income;
    
    std::cout << "Введите свой доход:";
    std::cin >> income;
    
    if (income < 10000) {
        std::cout << income*0.13 << "\n";
    }else if (income >= 10000 and income < 50000) {
        std::cout << (income - 10000)*0.2 + 1300 << "\n";
    }else if (income >= 50000) {
        std::cout << 15000 + 8000 + 1300 << "\n";
    }
    std::cout << "____________________________________________________________________";

    return 0;
}

