#include <string>
#include <stdexcept>

int distancia_hamming(const std::string& cadena1, const std::string& cadena2) {

    if (cadena1.length() != cadena2.length()) {
        throw std::invalid_argument("Las cadenas deben tener la misma longitud");
    }

    int distancia = 0;

    for (size_t i = 0; i < cadena1.length(); i++) {
        if (cadena1[i] != cadena2[i]) {
            distancia++;
        }
    }

    return distancia;
}
