#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Функция № 1: Читает строки из текстового файла и сохраняет их в вектор
void readFromFile(const std::string& filename, std::vector<std::string>& lines) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
}

// Функция № 2: Выводит строки из вектора на экран
void printLines(const std::vector<std::string>& lines) {
    // Пустая функция
}

// Функция № 3: Записывает строки из вектора в файл
void writeToFile(const std::string& filename, const std::vector<std::string>& lines) {
    // Пустая функция
}

int main() {
    std::string inputFilename = "input.txt";
    std::string outputFilename = "output.txt";
    std::vector<std::string> lines;

    // Вызов функций
    readFromFile(inputFilename, lines);
    printLines(lines);
    writeToFile(outputFilename, lines);

    return 0;
}
