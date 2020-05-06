/* 
- Archivo fuente (contiene código fuente) es comprensible para el programador y el compilador, pero no para el computador.
- Archivo objeto (contiene lenguaje máquina) no es  comprensible para el programador, pero si para el compilador y para el computador, 
aunque no es ejecutable aún.
- Archivo ejecutable toma los archivos fuente, sus respectivos archivos objeto, librerias, etc. necesarios para la ejecución del programa

- Errores de sintaxis (expresiones erróneas o incompletas, variables que no existen, palabras claves mal escritas)
- Avisos o advertencias (no impiden la compilacion y ejecucion, pero pueden no dar los resultados esperados)
- Errores de enlazado (falta alguna librería, no se definió alguna funcion)
- Errores de ejecución (errores dificiles de resolver, generalmente se necestian depuradores)
- Errores de diseño   (errores del programador, como errores de algoritmos)

-Tipo de datos 
void = sin tipo (es una funcion que hace su trabajo y no devuelve valores)
int = entero
float = coma flotante
double = coma flotante de doble precisión 
char = es alfanumérico, puede contener un caracter, un número o un signo
bool = V o F
enum = enumerado (permite definir un conjunto de constantes y las variables toman solo valores contenidos en el conjunto) 

-Modificadores(permiten ajustar ligeramente las características de los tipos de datos)
short = acorta la variable a la mitad
long = aumenta la variable al doble
signed = con signo 
unsigned = sin signo

-Funciones (las funciones pueden ser static o extern)
si se necesita un valor de retorno para la funcion este puede ser void, sino por defecto sera int
tipo nombre(lista de declaración de parámetros);
{
cuerpo de la función, es lo que se ejecutará cada vez que se llame a la función
}

-Operadores aritméticos 
+ = adición
- = sustracción 
* = multiplicación 
/ = división 
% = resto de la división
c++, ++c; incremento unitario
c--, --c; decremento unitario 

-Operadores de asignación 
=, *=, /=, %=, +=, -=, <<=, >>=, &=, ^=, |=

-Operadores de igualdad 
==, !=

-Operadores relacionales
<, >, <=, >=

-Operadores lógicos
&& = and 
|| = or 
!  = not

-Estructuras cada elemento o cada variable que definia dentro de la estructura tiene definido un espacio en la memoria
en cambio la union usa solo un espacio de memoria que comparten las variables, si guardo un valor de variable y luego 
otro se pierde el valor anterior

struct(v1,v2,vn)
union(v1,v2,vn) 
 
metodos s/salida procedimientos(recibe parametros como datos y hace lo que uno le dice, ejemplo, una suma y no devuelve el resultado, 
printf tambien es un procedimiento)

metodos c/salida funciones(recibe parametros como datos y hace operaciones ejemplo una suma y devuelve el resultado, funciones)
 
 cada procedimiento es un pequeño programa con sus variables, pero no se usan en el programa principal
 
 sintaxis de procedimientos y funciones con sobrecarga por ambas tienen las mismas variables
 
 void procedimiento1 (int x, int y)
{
		
}

int funcion1 (int x, int y)
{
	int aux=0;
	
	return aux;
}
 
 
temas clase 

asignacion de tiempos (tiempos de ejecucion es mas importante en teleco y tiempo de desarrollo)
 
ganancia = te/td

introduccion del numero aleatorio random (stdlib.h) funcion rand() -> semilla; se busca que la semilla sea distinta cada vez que se ejecute
que utilice el tiempo como semilla  srand((unsigned)time(0)); rand();
 
det cuanto timepo demora en ejecutarse un programa
variables de timepo son estructuras que pertenecen a time.h

estructura clock_t
clock()
la funcion de time que recoje el tiempo del pc y lo guarda en variables tipo clock_t


memoria stack (poca memoria)
memoria heap (mucha memoria)

primero nomenclatura de estructura
luego estructura

ejemplo 
sol.b=8; (variable)
p -> b=(; (puntero)

 matriz dunamica puedes cambiar su tamaño durente la ejecucion del programa
revisar apuntes comando de borrado de memoria

comando sizeof (int)(mide tamaño de memoria que usa un tipo dato pero no define tipo de dato eso lo hace el casting)	
malloc () (comando que separa memoria en cualquier espacio de la memoria, la cantidad que uno le diga y devuelve una direccion tipo null)


calloc (numero,sizeof (int)) separa 4 variables de tamaño entero consecutivos, sino encuentra memoria devuelve null

#define f(x) x*x+2; (funcion pre procesada)

  en memoria de tipo dinamico solo hay direecciones de memoria
  un direccion de puntero debe guardarse en una variable de doble puntero 
  revisar fotos
  tarea individual
  
  


C++

[signed|unsigned] char <identificador>  
contiene un único carácter del código ASCII. El tamaño de memoria es de 1 byte

[signed|unsigned] [short|long] int <identificador>
[signed|unsigned] long [int] <identificador>
[signed|unsigned] short [int] <identificador>

float <identificador>

El fuerte de estos números no es la precisión, sino el orden de magnitud o grande que es el número que contiene
Por ejemplo, la siguiente cadena de operaciones no dará el resultado correcto:
float a = 12335545621232154;
a = a + 1;
a = a - 12335545621232154;

Finalmente, "a" valdrá 0 y no 1, como sería de esperar.

bool <identificador>
bool respuesta = true;

[long] double <identificador>
o coma flotante de doble precisión

C siempre ha estado orientado a la economía de recursos, tanto en cuanto al uso de memoria como al uso de procesador. Si tu
problema no requiere la precisión de un double o long double, ¿por qué derrochar
recursos?. Por ejemplo, en el compilador Dev-C++ float requiere 4 bytes, double 8 y
long double 12, por lo tanto, para manejar un número en formato de long double se
requiere el triple de memoria y el triple o más tiempo de procesador que para manejar
un float.

void <identificador>
Es un tipo especial que indica la ausencia de tipo. Se usa en funciones que no
devuelven ningún valor, también en funciones que no requieren parámetros,

Tipo "enum" o enumerado:
enum [<identificador de tipo>] {<nombre de constante> [= <valor>],
...} [lista de variables];

Este tipo nos permite definir conjuntos de constantes, normalmente de tipo int,
llamados datos de tipo enumerado. Las variables declaradas de este tipo sólo podrán
tomar valores entre los definidos.
El identificador de tipo es opcional, y nos permitirá declarar más variables del tipo
enumerado en otras partes del programa:
[enum] <identificador de tipo> <variable1> [,<variable2>[...]];
La lista de variables también es opcional. Sin embargo, al menos uno de los dos
componentes opcionales debe aparecer en la definición del tipo enumerado.
Varios identificadores pueden tomar el mismo valor, pero cada identificador sólo
puede usarse en un tipo enumerado. Por ejemplo:
enum tipohoras { una=1, dos, tres, cuatro, cinco, seis,
siete, ocho, nueve, diez, once, doce,
trece=1, catorce, quince, dieciseis, diecisiete, dieciocho,
diecinueve, veinte, ventiuna, ventidos, ventitres, venticuatro =
0};
En este caso, una y trece valen 1, dos y catorce valen 2, etc. Y veinticuatro vale 0.
Como se ve en el ejemplo, una vez se asigna un valor a un elemento de la lista, los
siguientes toman valores correlativos. Si no se asigna ningún valor, el primer
elemento tomará el valor 0.











 
