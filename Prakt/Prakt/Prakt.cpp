#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

string removeVowels(string a )
{
    a.erase(remove(a.begin(), a.end(), 'а'), a.end());
    a.erase(remove(a.begin(), a.end(), 'е'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ё'), a.end());
    a.erase(remove(a.begin(), a.end(), 'о'), a.end());
    a.erase(remove(a.begin(), a.end(), 'у'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ы'), a.end());
    a.erase(remove(a.begin(), a.end(), 'и'), a.end());
    a.erase(remove(a.begin(), a.end(), 'я'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ю'), a.end());
    a.erase(remove(a.begin(), a.end(), 'э'), a.end());
 
    return a;
}

string removeConsonants(string a)
{
    a.erase(remove(a.begin(), a.end(), 'б'), a.end());
    a.erase(remove(a.begin(), a.end(), 'в'), a.end());
    a.erase(remove(a.begin(), a.end(), 'г'), a.end());
    a.erase(remove(a.begin(), a.end(), 'д'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ж'), a.end());
    a.erase(remove(a.begin(), a.end(), 'з'), a.end());
    a.erase(remove(a.begin(), a.end(), 'й'), a.end());
    a.erase(remove(a.begin(), a.end(), 'к'), a.end());
    a.erase(remove(a.begin(), a.end(), 'л'), a.end());
    a.erase(remove(a.begin(), a.end(), 'м'), a.end());
    a.erase(remove(a.begin(), a.end(), 'н'), a.end());
    a.erase(remove(a.begin(), a.end(), 'п'), a.end());
    a.erase(remove(a.begin(), a.end(), 'р'), a.end());
    a.erase(remove(a.begin(), a.end(), 'с'), a.end());
    a.erase(remove(a.begin(), a.end(), 'т'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ф'), a.end());
    a.erase(remove(a.begin(), a.end(), 'х'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ц'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ч'), a.end());
    a.erase(remove(a.begin(), a.end(), 'ш'), a.end());
    a.erase(remove(a.begin(), a.end(), 'щ'), a.end());

    return a;
}



int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int i;
    string word;

    cin >> word;
    
    cout << "1.Слово выводится задом наперед.\n2.Вывести слово без гласных.\n3.Вывести слово без согласных.\n4.Рандомно раскидывать буквы заданного слова." << endl;

    cin >> i;
    
    if (i == 1)
    {
        reverse(word.begin(), word.end());
        cout << word;
    }
    else if (i == 2)
    {
        word = removeVowels(word);
        cout << word;
    }
    else if (i == 3)
    {
        word = removeConsonants(word);
        cout << word;
    }
    else if (i == 4)
    {
        std::random_shuffle(word.begin(), word.end());
        cout << word;
    }

}
