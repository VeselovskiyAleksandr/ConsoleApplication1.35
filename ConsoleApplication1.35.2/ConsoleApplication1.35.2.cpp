// ConsoleApplication1.35.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 35. Задача 2. У меня на компьютере.

#include <iostream>
#include <memory>
#include <vector>
#include<algorithm>
#include <unordered_set>
#include <map>
using namespace std;

//auto uniqueValies = [](vector<int>vr) {
  //  unordered_set<int> v;
    //v.insert(vr.begin(), vr.end());            //  второй вариант решения
   // unique_ptr<unordered_set<int>> ptr;
   // return v;
//};

int main()
{
    vector<int> vect= { 2, 4, 5, 6, 7, 9, 11, 14, 2, 6, 3, 7, 4, 1, 1 };
 //   for (auto item : vect)
   // {                       //  цикл отавил для примера       
     //   ++itemCount[item];
   // }
   // for (auto item : itemCount) {
     //   cout << item.first << " " << item.second << "\n";
    //}
      auto result=[](vector<int> vect) {
          map<int, int> itemCount;
          for (auto item : vect)
              ++itemCount[item];
          for (auto item : itemCount)
              cout << " Value: " << item.first << " " << "   number of repetitions: " << item.second << "\n";
          unique_ptr<vector <int>>ptr(new vector<int>{});
          unordered_set<int> v;
          v.insert(vect.begin(), vect.end());
          for (auto i = v.begin(); i != v.end(); ++i) {
              ptr->push_back(*i);
          }
          cout << "\n ";
          return *ptr;
        };
  //  auto lamda_result = uniqueValies(vect);   //  второй вариант решения
      auto lamda_result = result(vect);
   for (auto item : lamda_result)         
        cout << item << " ";


//	vector< int > v = { 2, 4, 5, 6, 7, 9, 11, 14,2, 6, 3, 7, 4, 1, 1 };
//	auto end = remove_if(v.begin(), v.end(), [](int x) { return x <9; });
//	for_each(v.begin(), end, [](int x) { std::cout << x << " "; });

  //  std::vector<int> numbers{  };
    // Фильтруем элементы, перемещая уцелевшие элементы в начало массива
  //  auto newEnd = std::remove_if(numbers.begin(), numbers.end(), [](int num) {
   //     return num > 3;
  //      });
    // Удаляем все элементы, следующие после
 //   numbers.erase(newEnd, numbers.end());
 //   for (int num : numbers)
     
  //  {
//   cout << " (";
 //       std::cout << num;
 //       cout << ") ";
 //   }


//     std::vector<int> myInts{ 2,2,7,8,3,7,2,3,46,7,2,1 };
 //     std::map<int, unsigned> uniqueValues;
      //Get unique values and their count
 //     for (int val : myInts)
  //        ++uniqueValues[val];
      //Output:
  //    for (const auto& val : uniqueValues)
  //        std::cout << val.first << " occurs " << val.second << " times." << std::endl;
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
    