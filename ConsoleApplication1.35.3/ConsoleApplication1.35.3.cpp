// ConsoleApplication1.35.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <boost/program_options.hpp>
#include <iostream>
namespace opt = boost::program_options;
#include <iostream>

int main(int argc, char* argv[])
{
	// Создаем опции, описывающие переменную, и даем ей текстовое описание
// «All options».
	opt::options_description desc("All options");
	desc.add_options()
		("apples", opt::value<int>(), "how many apples do you have")
		("oranges", opt::value<int>(), "how many oranges do you have")
		("help", "produce help message");
	// Переменная для хранения аргументов нашей командной строки
	opt::variables_map vm;
	// Парсинг и сохранение аргументов
	opt::store(opt::parse_command_line(argc, argv, desc), vm);
	// Эта функция должна вызываться после парсинга и сохранения.
	opt::notify(vm);
	if (vm.count("help")) {
		std::cout << desc << "\n";
		return 1;
	}
	std::cout << "Fruits count: "
		<< vm["apples"].as<int>() + vm["oranges"].as<int>()
		<< std::endl;
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
