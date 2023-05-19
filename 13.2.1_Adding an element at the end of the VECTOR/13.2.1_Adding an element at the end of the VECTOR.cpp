/*Задание 1. Очередь из роботов
Повторите программу из теоретического материала. Напишите электронную очередь 
для андроидов. Их количество неизвестно заранее. Каждый андроид вводит с 
клавиатуры свой идентификационный номер - целое число. Нужно сохранить их 
номера в векторе в том порядке, в котором они записывались в очередь.*/

#include <iostream>
#include <vector>

void add(std::vector<int>& vec, int val)
{
    vec.push_back(val);
}

int main()
{
    std::cout << "How many Androids?" << '\n';

    std::vector<int> vec{1, 2, 3, 4};

    int number = 0;
    while (number != -1)
    {
        std::cout << "Please enter your number: ";
        std::cin >> number;

        add(vec, number);
    }
    
    /*Первая запись использует цикл for-each (диапазонный for-цикл), 
    который позволяет автоматически обойти все элементы вектора vec без 
    явного указания индексов. В этом случае каждый элемент вектора будет 
    присвоен переменной num, и внутри цикла std::cout << num << " "; будет 
    выводиться значение num, за которым следует пробел.
    
    std::cout << "Androids in queue:\n";
    for (int num : vec)
    {
        std::cout << num << " ";
    }

    */

    /*Вторая запись использует обычный цикл for с переменной i, которая 
    является индексом элемента вектора. Цикл проходит от i = 0 до i < vec.size() - 1, 
    и на каждой итерации выводится значение vec[i] (элемент вектора с индексом i) 
    за которым также следует пробел.*/
    std::cout << "Android queue:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
 
    /*Функционально обе записи выполняют одну и ту же задачу, но используют разные
    методы обхода и вывода элементов вектора. Выбор между ними зависит от ваших 
    предпочтений и требований к коду. Цикл for-each может быть более удобным и наглядным, 
    особенно если не требуется явное использование индексов элементов.*/

    return 0;
}




/*
#include <iostream>
#include <vector>
#include <algorithm> //алгоритм

int main()
{
    std::cout << "How many Androids?" << '\n';
    int n;
    std::cin >> n;

    std::vector<int> androidNumber(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> androidNumber[i];
    }

    std::cout << "Sort Android: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << androidNumber[i] << ", ";
    }

    sort(androidNumber.begin(), androidNumber.end()); // от наименьшего к большему (#algorithm)

    std::cout << "Sort vector: " << '\n';
    for (const auto& num : androidNumber)
    {
        std::cout << num << ", ";
    }
}
*/