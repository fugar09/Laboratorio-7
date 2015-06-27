// Listas_Arboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "Persona.h"
#include "Lista.h"
#include "DoublyLinkedList.h"


int _tmain(int argc, _TCHAR* argv[])
{


	srand(time(NULL));
	DoublyLinkedList<int> l;
	l.insertarFinal(2);
	l.insertarFinal(4);
	l.insertarFinal(5);
	l.insertarInicio(6);
	cout << l;
	

	system("pause");
	return 0;

}

