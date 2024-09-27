#include <iostream>

int main() {
    double hargaAsli = 150000;
    double persentaseDiskon = 12.5;

    double jumlahDiskon = hargaAsli * (persentaseDiskon / 100);
    double hargaAkhir = hargaAsli - jumlahDiskon;

    std::cout << "harga  : " << hargaAsli << std::endl;
    std::cout << "Diskon : " << persentaseDiskon << std::endl;
    std::cout << "Besarnya diskon dari harga : " << jumlahDiskon << std::endl;
    std::cout << "Harga setelah diskon : " << hargaAkhir << " ribu" << std::endl;

    return 0;
}