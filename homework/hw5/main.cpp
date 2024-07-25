#include <iostream>

int main() {


    // std::cout << "Задание 1. Полёт нормальный!\n";
    //
    // int heigth;
    // int speed;
    //
    // std::cout << "Высота:";
    // std::cin >> heigth;
    // std::cout << "Скорость:";
    // std::cin >> speed;
    //
    // if ((speed >= 750 && speed <= 850) && (heigth >= 9000 && heigth <= 9500)) {
    //     std::cout << "Полет нормальный.\n";
    // }else {
    //     std::cout << "Вернитесь в эшелон\n";
    // }
    //
    // std::cout << "____________________________________________________________\n";

    // std::cout << "Задание 2. Майские!\nЗадание 3. Майские — усложнение\n";
    //
    // int day;
    // int monday = 0;
    // std::string startWeek;
    // std::cout << "Начало недели? -> ";
    // std::cin >> startWeek;
    // std::cout << "Введите день ";
    // std::cin >> day;
    //
    // if (startWeek == "вт") monday=1;
    // else if (startWeek == "ср") monday=2;
    // else if (startWeek == "чт") monday=3;
    // else if (startWeek == "пт") monday=4;
    // else if (startWeek == "сб") monday=5;
    // else if (startWeek == "вс") monday=6;
    // else monday=0;
    //
    // if (day == monday-6 || day == monday-6+7 || day == monday-6+7*2 || day == monday-6+7*3) {
    //     std::cout << "Выходной.Суббота\n";
    // }else if (day == monday-7 || day == monday-7+7 || day == monday-7+7*2 || day == (monday)-7+7*3) {
    //     std::cout << "Выходной.Воскресенье\n";
    // }else if (day >= 1 && day <= 5 || day >= 8 && day <= 10 ) {
    //     std::cout << "Выходной\n";
    // }
    // else {
    //     std::cout << "Нет\n";
    // }
    //
    // std::cout << "____________________________________________________________\n";

    // std::cout << "Задание 4. Банкомат — 2\n";
    //
    //
    //
    // std::cout << "____________________________________________________________\n";
    //
    // std::cout << "Задание 5. Усложнение задачи про кирпич\n";
    //
    // int a, b, c, m, n, k;
    // std::cout << "Прараметры коробки AxBxC";
    // std::cin >> a >> b >> c;
    // std::cout << "Прараметры коробки MxNxK";
    // std::cin >> m >> n >> k;
    //
    // if (a < m && b < n && c < k ) std::cout << "Можно.";
    // else if (b < m && c < n && a < k ) std::cout << "Можно.";
    // else if (c < m && a < n && b < k ) std::cout << "Можно.";
    // else if (a < m && c < n && b < k ) std::cout << "Можно.";
    // else if (b < m && a < n && c < k ) std::cout << "Можно.";
    // else if (c < m && b < n && a < k ) std::cout << "Можно.";
    // else std::cout << "Нельзя";
    //
    // std::cout << "____________________________________________________________\n";

    std::cout << "Задание 6. Грустное совершеннолетие\n";

    int visitorBirthdayDay;
    int visitorBirthdayMonth;
    int visitorBirthdayYear;
    int dataDay;
    int dataMonth;
    int dataYear;
    std::cout << "Введите дату рождения(ДД ММ ГГГГ)";
    std::cin >> visitorBirthdayDay >> visitorBirthdayMonth >> visitorBirthdayYear;
    std::cout << "Введите дату(ДД ММ ГГГГ)";
    std::cin >> dataDay >> dataMonth >> dataYear;


    if (visitorBirthdayDay - dataDay <= 0 && visitorBirthdayMonth - dataMonth <=0 && visitorBirthdayYear - dataYear <= -18) {
        std::cout << "Можно.\n";
    }else {
        std::cout << "Нельзя.\n";
    }




    std::cout << "____________________________________________________________\n";

    return 0;
}
