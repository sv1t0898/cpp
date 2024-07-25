#include <iostream>
int main() {

    system("chcp 65001"); // раскоментировать для завуска в windows

    std::cout << "Задание 1. Полёт нормальный!\n";

    int heigth;
    int speed;

    std::cout << "Высота:";
    std::cin >> heigth;
    std::cout << "Скорость:";
    std::cin >> speed;

    if ((speed >= 750 && speed <= 850) && (heigth >= 9000 && heigth <= 9500)) {
        std::cout << "Полет нормальный.\n";
    }else {
        std::cout << "Вернитесь в эшелон\n";
    }

    std::cout << "____________________________________________________________\n";

    std::cout << "Задание 2. Майские!\nЗадание 3. Майские — усложнение\n";

    int day;
    int monday = 0;
    std::string startWeek;
    std::cout << "Начало недели? -> ";
    std::cin >> startWeek;
    std::cout << "Введите день ";
    std::cin >> day;

    if (startWeek == "вт") monday=1;
    else if (startWeek == "ср") monday=2;
    else if (startWeek == "чт") monday=3;
    else if (startWeek == "пт") monday=4;
    else if (startWeek == "сб") monday=5;
    else if (startWeek == "вс") monday=6;
    else monday=0;

    if (day == monday-6 || day == monday-6+7 || day == monday-6+7*2 || day == monday-6+7*3) {
        std::cout << "Выходной.Суббота\n";
    }else if (day == monday-7 || day == monday-7+7 || day == monday-7+7*2 || day == (monday)-7+7*3) {
        std::cout << "Выходной.Воскресенье\n";
    }else if (day >= 1 && day <= 5 || day >= 8 && day <= 10 ) {
        std::cout << "Выходной\n";
    }
    else {
        std::cout << "Нет\n";
    }

    std::cout << "____________________________________________________________\n";

    std::cout << "Задание 4. Банкомат — 2\n";

    int cash;
    std::cout << "Введите сумму для получения: ";
    std::cin >> cash;
    if (cash <= 150000) {
        int kupyury = 0;
        std::string result;
        if (cash / 5000 >= 1) {
            kupyury = cash/5000;
            cash -= 5000*kupyury;
            result = std::to_string(kupyury) + " по 5000, ";
        }if(cash / 2000 >= 1) {
            kupyury = cash/2000;
            cash -= 2000*kupyury;
            result += std::to_string(kupyury) + " по 2000, ";
        }if(cash / 1000 >= 1) {
            kupyury = cash/1000;
            cash -= 1000*kupyury;
            result += std::to_string(kupyury) + " по 1000, ";
        }if(cash / 500 >= 1) {
            kupyury = cash/500;
            cash -= 500*kupyury;
            result += std::to_string(kupyury) + "  по 500, ";
        }if(cash / 200 >= 1) {
            kupyury = cash/200;
            cash -= 200*kupyury;
            result += std::to_string(kupyury) + " по 200, ";
        }if(cash / 100 >= 1) {
            kupyury = cash/100;
            cash -= 100*kupyury;
            result += std::to_string(kupyury) + " по 100, \n";
        }if (cash != 0) {
            std::cout << "Выдача: " << result << "\n";
            std::cout << "Остаток в размере "<< cash << " выдать не получится, минимальная сумма выдачи 100.\n";
        }else {
            std::cout << "Выдача: " << result << ".\n";
        }
    }else {
        std::cout << "Максимальная сумма выдачи 150000.\n";
    }

    std::cout << "____________________________________________________________\n";

    std::cout << "Задание 5. Усложнение задачи про кирпич\n";

    int a, b, c, m, n, k;
    std::cout << "Прараметры коробки AxBxC";
    std::cin >> a >> b >> c;
    std::cout << "Прараметры коробки MxNxK";
    std::cin >> m >> n >> k;

    if (a < m && b < n && c < k ) std::cout << "Можно.";
    else if (b < m && c < n && a < k ) std::cout << "Можно.";
    else if (c < m && a < n && b < k ) std::cout << "Можно.";
    else if (a < m && c < n && b < k ) std::cout << "Можно.";
    else if (b < m && a < n && c < k ) std::cout << "Можно.";
    else if (c < m && b < n && a < k ) std::cout << "Можно.";
    else std::cout << "Нельзя";

    std::cout << "____________________________________________________________\n";

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
