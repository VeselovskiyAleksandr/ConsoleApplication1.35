// ConsoleApplication1.35.3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 35. Задача 3.

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
using namespace std;

int main()
{
	const string extension = ".png";
auto recursiveGetFileNamesByExtension = [](filesystem::path p, const string extension){
		unique_ptr<vector <filesystem::directory_entry>>ptr(new vector<filesystem::directory_entry>{});
		for (auto& p : filesystem::recursive_directory_iterator("C:\\Users\\Александр\\Documents\\text for program"))
		{
			if (filesystem::path(p).extension() == extension) {
				ptr->push_back(p);
			}
		}
		return *ptr;
	};
	filesystem::path p("C:/Users/Александр/Documents/text for program");
	for (auto& p : filesystem::recursive_directory_iterator("C:\\Users\\Александр\\Documents\\text for program"))
	{
		if (filesystem::is_regular_file(p)) {
			cout<<p << "\n" << " It's file; extension: " << filesystem:: path(p).extension()<<"\n";

		}
		else {
			cout << "It's catalog" << "\n";
		}
	}
			recursiveGetFileNamesByExtension(p, extension);
			cout << "\n" <<"Files with the extension .png: " << "\n";
	auto result= recursiveGetFileNamesByExtension(p, extension);
		for(auto it: result)
			cout << it << " " << "\n";
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
