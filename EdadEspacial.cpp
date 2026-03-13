class EdadEspacial {
private:
    long segundos;
    const double SEGUNDOS_ANO_TIERRA = 31557600.0;

public:
    EdadEspacial(long s) : segundos(s) {}

    long edad_segundos() const {
        return segundos;
    }

    double en_tierra() const {
        return segundos / SEGUNDOS_ANO_TIERRA;
    }

    double en_mercurio() const {
        return en_tierra() / 0.2408467;
    }

    double en_venus() const {
        return en_tierra() / 0.61519726;
    }

    double en_marte() const {
        return en_tierra() / 1.8808158;
    }

    double en_jupiter() const {
        return en_tierra() / 11.862615;
    }

    double en_saturno() const {
        return en_tierra() / 29.447498;
    }

    double en_urano() const {
        return en_tierra() / 84.016846;
    }

    double en_neptuno() const {
        return en_tierra() / 164.79132;
    }
};
