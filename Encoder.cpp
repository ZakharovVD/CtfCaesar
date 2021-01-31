#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);  setlocale(LC_CTYPE, "rus");

    vector<char> z{ 'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я' };
    vector<char> nz{ 'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я' };

    string s1; getline(cin, s1);
    /*
    string rots; getline(cin, rots);
    rots = rots.substr(3);
    int rot = (atoi(rots.c_str()));

    if (rot < 0)rot = 33 + rot % 34;
    else rot %= 34;
    */
    int l = 33;
    for (int rot = 0; rot < l; rot++) {
        string s = s1;
        for (int j = 0; j < s.size(); j++) {
            for (int i = 0; i < l; i++) {
                if (s[j] == z[i]) {
                    s[j] = z[(i + rot) % l];
                    break;
                }
            }
            for (int i = 0; i < l; i++) {
                if (s[j] == nz[i]) {
                    s[j] = nz[(i + rot) % l];
                    break;
                }
            }
        }
        cout << "rot" << rot << " " << s << endl;
    }

    return 0;
}