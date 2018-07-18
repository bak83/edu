#include <iostream>
#include <string>

int main(){ 

int i;
struct Student {
    std::string imie, nazwisko;
    int nr_albumu;
};

Student baza[5];
baza[0] = {"Jan", "Kowalski", 100000};
baza[1] = {"Andrzej", "Drugi", 1333333};
baza[2] = {"Katarzyna", "Trzecia", 122222};
baza[3] = {"Rafał", "Szybki", 1002222};

std::cout << "Baza studentów" << std::endl;

for (i = 0; i < 4; i++){
    std::cout << i+1  << " | Imię: " << baza[i].imie << " | Nazwisko: " << baza[i].nazwisko << " | Numer albumu: " << baza[i].nr_albumu << std::endl;
}

if (i < 5){
    std::cout << "Wprowadź nowego studenta. " << std::endl; 
    std::cout << "Imię studenta: ";
    std::cin >> baza[i].imie;
    std::cout << std::endl; 
    std::cout << "Nazwisko studenta: ";
    std::cin >> baza[i].nazwisko;
    std::cout << std::endl; 
    std::cout << "Numer albumu: ";
    std::cin >> baza[i].nr_albumu;
    std::cout << std::endl; 
    std::cout << i+1  << " | Imię: " << baza[i].imie << " | Nazwisko: " << baza[i].nazwisko << " | Numer albumu: " << baza[i].nr_albumu << std::endl;
}else{
    std::cout << "Baza pełna";
}

return 0;
}

