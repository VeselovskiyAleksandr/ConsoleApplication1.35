// ConsoleApplication1.35.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 35. Задача 2.

#include <iostream>
#include <memory>
#include <vector>
#include<algorithm>
#include <unordered_set>
#include <map>
using namespace std;

//auto uniqueValies = [](vector<int>vr) {
//    unordered_set<int> v;
 //   v.insert(vr.begin(), vr.end());         второй вариант решения    
  //  unique_ptr<unordered_set<int>> ptr;
 //   return v;
//};

int main()
{
    vector<int> vect= { 2, 4, 5, 6, 7, 9, 11, 14, 2, 6, 3, 7, 4, 1, 1 };
    map<int, int> itemCount;
  //  for (auto item : vect)
    //{                         цикл отавил для примера       
      //  ++itemCount[item];
    //}
      auto result=[](vector<int> vect) {
            unordered_set<int> v;
  //  auto result = uniqueValies(vect);
 //   for (auto item : result) {             второй вариант решения
 //       cout << item << " ";
  //  }
            v.insert(vect.begin(), vect.end());
 
            return v;
        };
      auto lamda_result = result(vect);
      for (auto item : lamda_result) {
          cout << item << " ";
      }
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
    