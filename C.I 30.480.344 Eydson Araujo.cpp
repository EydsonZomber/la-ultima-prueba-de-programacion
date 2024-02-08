#include <stdio.h>

// Definici�n de constantes
#define MAX_NUMEROS 10

// Prototipos de funciones
void leerNumeros(int numeros[], int *n);
float calcularPromedio(int numeros[], int n);
void mostrarResultados(int numeros[], int n, float promedio);

int main() {
  // Declaraci�n de variables
  int numeros[MAX_NUMEROS];
  int n;
  float promedio;
 
 // Leer la cantidad de n�meros
  printf("Ingrese la cantidad de n�meros (m�ximo %d): ", MAX_NUMEROS);
  scanf("%d", &n);

  // Leer los n�meros
  leerNumeros(numeros, &n);

  // Calcular el promedio
  promedio = calcularPromedio(numeros, n);

 // Mostrar los resultados
  mostrarResultados(numeros, n, promedio);
  
  return 0;
}

// Funci�n para leer los n�meros
void leerNumeros(int numeros[], int *n) {
  int i;

  for (i = 0; i < *n; i++) {
    printf("Ingrese el n�mero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }
}

// Funci�n para calcular el promedio
float calcularPromedio(int numeros[], int n) {
  int i;
  float suma = 0.0;

  for (i = 0; i < n; i++) {
    suma += numeros[i];
  }

  return suma / n;
}

// Funci�n para mostrar los resultados
void mostrarResultados(int numeros[], int n, float promedio) {
  int i;

  printf("\nN�meros:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", numeros[i]);
  }

  printf("\n\nPromedio: %.2f\n", promedio);
}







