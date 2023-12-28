#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int Calculate(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 - num2;
    default:
        return 0;
    
    }
}

int main() {
    
    string fileName;
    string textname;
    cout << "Enter the filename: ";
    std::cin >> textname;
    fileName = "C:/Users/ardic/source/repos/ConsoleApplication8/" + textname;

    
    ifstream inputFile(fileName);

   

    
    string line;
    while (getline(inputFile, line)) {
        istringstream iss(line);

        int num1, num2;
        char operation;
        iss >> num1 >> operation >> num2;
        int result = Calculate(num1, num2, operation);
        cout << result << std::endl;
        
      
    }
    inputFile.close();

    return 0;
}