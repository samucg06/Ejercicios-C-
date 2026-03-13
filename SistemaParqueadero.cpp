class SistemaParqueadero {
private:
 int espacios[4];
public:
 SistemaParqueadero(int grande, int mediano, int pequeno) {
 espacios[1] = grande;
 espacios[2] = mediano;
 espacios[3] = pequeno;
 }
 bool agregarCarro(int tipoCarro) {
 if (espacios[tipoCarro] > 0) {
 espacios[tipoCarro]--;
 return true;
 }
 return false;
 }
};
