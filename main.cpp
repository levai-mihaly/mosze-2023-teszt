#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // _ typo 
    std::cout << "1-100 ertekek duplazasa" << '\n';  // '' helyett "" és ; hiánya
    for (int i = 0; i < N_ELEMENTS; i++) // for loop javítása
    {
        b[i] = (i + 1) * 2; // 1-100-ig duplazzuk az ertekeket, nem 0-99-ig 
    }
    for (int i = 0; i < N_ELEMENTS; i++) // for loop javítása 
    {
        std::cout << i + 1 << ". Ertek: " << b[i] << '\n'; // ; hiánya, tömb elemeinek kiírása
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) // for loop javítása
    {
        atlag += b[i]; // ; hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "valami" << std::endl;
    return 0;
}
