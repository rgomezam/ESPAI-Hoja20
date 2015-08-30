# ESPAI-Hoja20
Ejercicios del curso de C++

Ejercicios capítulo 20

1. Dado el siguiente código:
class CuentaCorriente
{
protected:
string titular;
float saldo;
static int numCuentasTotales;
int numCuenta;
public:
CuentaCorriente(string titular, float saldo);
void getInfo();
static int getNumCuentasTotales();
};
int CuentaCorriente::numCuentasTotales = 0;
int numCuenta = 0;
CuentaCorriente::CuentaCorriente(string titular, float saldo)
{
this->titular = titular;
this->saldo = saldo;
numCuentasTotales++;
numCuenta = numCuentasTotales;
}
void CuentaCorriente::getInfo()
{
cout << "CuentaCorriente: numero de cuenta=" << numCuenta << " , titular="
<< titular << " , saldo=" << saldo << endl;
}
int CuentaCorriente::getNumCuentasTotales()
{
return numCuentasTotales;
}
//************************************************************************
int main() {
CuentaCorriente
CuentaCorriente
CuentaCorriente
CuentaCorriente
c1("Marta ",
c2("Jordi ",
c3("Antonio",
c4("Raquel ",
100);
200);
300);
400);
c1.getInfo();
c2.getInfo();
c3.getInfo();
c4.getInfo();
cout << "Número total de cuentas: " <<
CuentaCorriente::getNumCuentasTotales() << endl;
return 0;
}
Y su salida
CuentaCorriente: numero de
CuentaCorriente: numero de
CuentaCorriente: numero de
CuentaCorriente: numero de
Numero total de cuentas: 4
cuenta=1
cuenta=2
cuenta=3
cuenta=4
,
,
,
,
titular=Marta
titular=Jordi
titular=Antonio
titular=Raquel
,
,
,
,
saldo=100
saldo=200
saldo=300
saldo=400

a. Explica porqué numCuentasTotales es static, y porqué numCuenta NO debe serlo.

b. ¿Porqué getNumCuentasTotales es static?

c. La expresión CuentaCorriente::getNumCuentasTotales () es diferente de la que usamos
habitualmente, por ejemplo c1.getNumCuentasTotales(). ¿Porqué?

d. Habiendo 4 objetos tipo CuentaCorriente, ¿cuántas copias de la variable
numCuentasTotales tenemos? ¿Y cuántas de numCuenta?

2. Dado el siguiente código:
int *redondear(float);
¿Qué estamos haciendo?

a. Un puntero a función que toma como parámetro un float, y retorna un int
b. Una función que recibe un float y retorna un puntero a int.
c. Ninguna de las anteriores
Explica el porqué de tu respuesta.

3. A partir del siguiente código:
void hola(string);
void adios(string);
int main() {
void (*fun) (string);
fun = hola;
fun("Jordi");
fun = adios;
(*fun)("Maria");
return 0;
}
void hola (string nombre)
{
cout << "¡ Hola " << nombre << " !" << endl;
}
void adios(string nombre)
{
cout << "¡ Adiós " << nombre << " !" << endl;
}
Y su salida:
¡ Hola Jordi !
¡ Adiós Maria !

Responde a las siguientes preguntas:

a. ¿Qué diferencia a nivel de ejecución hay en estas 2 sentencias?
fun("Jordi");
(*fun)("Maria");

b. ¿Qué pasaría si declarásemos fun para que reciba un int, asi...?
void (*fun) (int);

c. ¿Cómo añadirías un puntero a una función que se llamara redondear, que reciba un float y
devuelva un int? Escribe sólo la definición de la función.

4. Dado el siguiente código:
void hola(string);
void adios(string);
void conversacion(void (*)(string), void (*)(string), string, string);
int main() {
void (*f1) (string) = hola;
void (*f2) (string) = adios;
conversacion(f1, f2, "Jordi", "Maria");
return 0;
}
void hola (string nombre)
{
cout << "¡ Hola " << nombre << " !" << endl;
}
void adios(string nombre)
{
cout << "¡ Adiós " << nombre << " !" << endl;
}
void conversacion(void (*fun1)(string), void (*fun2)(string), string
mensaje1, string mensaje2)
{
fun1(mensaje1);
fun2(mensaje2);
}

a. Explica su funcionamiento. En especial, detalla cómo estamos llamando a las funciones hola
y adiós, y de que manera se están pasando como parámetro para usarlas en conversación.

b. Reescribe el código anterior usando un typedef que contenga la declaración del puntero a
función.

c. Reescribe el código anterior para que hola y adios esten en una clase aparte que
llamaremos Acciones, y desde el programa principal tengamos un puntero a las funciones
miembro movidas a esta nueva clase.

d. Ahora guarda en un array los punteros a funciones miembro de Acciones, y pásalas a
conversación. Esta función pasará a recibir 2 arrays, uno con los punteros a las funciones, y
otro con los parámetros que recibirán las mismas.

5. Práctica final del capítulo
Haz un programa que permita encriptar un texto del usuario. Habrá 2 mecanismos, uno es
avanzando cada letra en el abecedario de esta forma:
Hola > Ipmb
Y la otra, al revés:
Hola > Gnkz
Para ello crea una clase Encriptado que realizará todo el trabajo.

El usuario podrá escoger el método de codificación, a través de un menú.
También queremos saber el número de codificaciones que se realizan.
Utiliza punteros a funciones en tu aplicación, así como variables static donde lo veas
conveniente.
