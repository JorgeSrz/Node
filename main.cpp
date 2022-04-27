#include <iostream>
#include "List.h"

int main() {
  Node<float> list(2);
  list.push(4);
  list.push(6);
  list.showList();

  // Agrega un elemento al final de la lista
  list.push(8);
  list.showList();

  // Elimina el ultimo elemento de la lista
  list.pop();
  list.showList();

  // Inserta un elemento en la posicion indicada
  list.insert(2, 5);
  list.showList();

  // Elimina el elemento indicado
  list.del(6);
  list.showList();

  // Elimina un elemento de la posicion indicada
  list.delIndex(2);
  list.showList();
  
}