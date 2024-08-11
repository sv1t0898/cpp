#include <iostream>

int main() {
    // std::cout << "Задание 1. Запасы продовольствия\n";
    //
    // int buskweat = 100;
    //
    // std::cout << "Всего гречки было на начало подсчёта: "<< buskweat << "кг.\n";
    //
    // for (int i = 1; buskweat > 0 ; ++i) {
    //     buskweat -= 4;
    //     std::cout << "После "<< i <<" месяца у вас в запасе останется "<< buskweat <<" кг гречки.\n";
    // }
    //
    // std::cout << "-----------------------------------------------------------------\n";
    //
    // std::cout << "Задание 2. Кофемашина\n";
    //
    // int whater = 0;
    // int milk = 0;
    // int change = 0;
    // int cupLatte = 0;
    // int cupAmericano = 0;
    //
    // std::cout << "Введите количество воды в мл:";
    // std::cin >> whater;
    // std::cout << "Введите количество молока в мл:";
    // std::cin >> milk;;
    //
    //
    //
    // while (true) {
    //     std::cout << "Выберите напиток (1 — американо, 2 — латте):\n";
    //     std::cin >> change;
    //     if (change == 1 || change == 2) {}
    //     else continue;
    //
    //
    //     if (change == 1) {
    //         if (whater < 300) {
    //             std::cout << "Не хватает воды.\n";
    //         }else {
    //             whater -= 300;
    //             ++ cupAmericano;
    //             std::cout << "Ваш напиток готов\n";
    //         }
    //     }else {
    //         if (whater < 270) {
    //             std::cout << "Не хватает воды.\n";
    //         }else if (milk < 30) {
    //             std::cout << "Нехватает молока.\n";
    //         }else {
    //             whater -= 270;
    //             milk -= 30;
    //             ++ cupLatte;
    //             std::cout << "Ваш напиток готов\n";
    //         }
    //     }
    //     if (milk < 30 && whater < 300) {
    //         std::cout << "***Отчёт*** \n";
    //         std::cout << "Ингредиентов осталось:\n";
    //         std::cout << "\t\tВода: " << whater << " мл.\n";
    //         std::cout << "\t\tМолоко: " << milk << " мл.\n";
    //         std::cout << "Кружек американо приготовлено: " << cupAmericano << "\n";
    //         std::cout << "Кружек латте приготовлено: " << cupLatte << "\n";
    //         break;
    //     }
    // }

    // std::cout << "-----------------------------------------------------------------\n";
    //
    // std::cout << "Задание 3. Красный Марс\n";
    //
    // int x = 0;
    // int y = 0;
    //
    // while (true) {
    //     std::cout << "[Программа]: Марсоход находится на позиции "<< x <<", "<< y <<", введите команду:\n[Оператор]:";
    //     std::string step;
    //     std::cin >> step;
    //     if (step == "a" || step == "w" || step == "s" || step == "d"){}
    //     else if (step == "q"){ break;}
    //     else continue;
    //
    //     if (step == "a" && x > 0) {--x;}
    //     else if (step == "d" && x < 15) {++x;}
    //     else if (step == "w" && y < 20) {++y;}
    //     else if (step == "s" && y > 0) {--y;}
    // }
    //
    //
    //
    // std::cout << "-----------------------------------------------------------------\n";

    // std::cout << "Задание 4. Рамка\n";
    //
    // int heigth = 0;
    // int width = 0;
    // std::cin >>  width >> heigth;
    //
    // for (int i = 0; i < width; ++i) {
    //     std::cout << "|";
    //     for (int n = 0; n < heigth; ++n) {
    //         if (i == 0 || i == width - 1) {
    //             std::cout << "-";
    //         }else {
    //             std::cout << " ";
    //         }
    //     }
    //     std::cout << "|\n";
    // }
    //
    //
    //
    // std::cout << "-----------------------------------------------------------------\n";

    std::cout << "Задание 5. Координатные оси\n";

    int x = 60;
    int y = 30;

    for (int i = 0; i < y; ++i) {
        for (int n = 0; n < x; ++n) {
            if (n == x/2) {
                std::cout << "|";
            }else if(i == y/2){
                std::cout << "-";
            }else {std::cout << " ";}
            if (n == x/2 && i == y/2) {
                std::cout << "+";
            }
        }
        std::cout << "\n";
    }



    std::cout << "-----------------------------------------------------------------\n";

    std::cout << "Задание 6. Важные объявления\n";



    std::cout << "-----------------------------------------------------------------\n";

    std::cout << "Задание 7. Биолаборатория* (дополнительное задание)\n";



    std::cout << "-----------------------------------------------------------------\n";

    std::cout << "Задание 8. Ёлочка* (дополнительное задание)\n";



    std::cout << "-----------------------------------------------------------------\n";

    return 0;
}
