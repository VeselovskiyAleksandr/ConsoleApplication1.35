// ConsoleApplication1.35.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 35. Задача 2.

#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
#include<memory>
using namespace std;

int main()
{
    vector<int> vect= { 2, 4, 5, 6, 7, 9, 11, 14, 2, 6, 3, 7, 4, 1, 1 };
      auto result=[](vector<int> vect)
      {
      map<int, int> itemCount;
      for (auto item : vect)
          ++itemCount[item];
      for (auto item : itemCount)
          cout << " Value: " <<item.first << " " << "   number of repetitions: " << item.second << "\n";
      unique_ptr<vector <int>>ptr(new vector<int>{});
      unordered_set<int> v;
      v.insert(vect.begin(), vect.end());
      for (auto i = v.begin(); i != v.end(); ++i) 
          ptr->push_back(*i);
      cout << "\n ";
            return *ptr;
      };
      auto lamda_result = result(vect);
          cout << "List of unique values: ";
      for (auto item : lamda_result) 
          cout << item << " ";
      return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
    