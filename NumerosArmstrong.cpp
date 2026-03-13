#include <cmath>

bool esArmstrong(int numero) {

    int original = numero;
    int suma = 0;
    int digitos = 0;
    int temp = numero;

    // contar los dígitos
    while (temp > 0) {
        digitos++;
        temp /= 10;
    }

    temp = numero;

    // calcular la suma de los dígitos elevados
    while (temp > 0) {
        int digito = temp % 10;
        suma += pow(digito, digitos);
        temp /= 10;
    }

    return suma == original;
}
