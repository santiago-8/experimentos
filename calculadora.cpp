/* Programa para dividir números enteros utilizando restas sucesivas */

#include<iostream>

using namespace std;

int dividendo=1,divisor=1,resultado,diferencia,resto;
int op1=1,op2=1;
int multiplo;
int menu;
int main()
{	
	cout << "** ¡Hola! Este es un programa para hacer operaciones binarias con números naturales **" << endl << endl;		
	cout <<  "Ingrese 0 en cualquier momento para volver al menú." << endl << endl ; 	 /* Menú del programa */

	do	
	{
	cout << endl << " 1- Suma." << endl << " 2- Resta." << endl << " 3- Multiplicación." << endl << " 4- División." << endl << " 0- Salir." << endl;
	cin >> menu;

		switch (menu)
		{
			case 1:
				op1=op2=1;

				while ( op1 > 0 && op2 > 0 ) 
				{
				cout << " Ingrese el primer operando: " ;

				cin >> op1;

				if (op1 == 0) break;
				
				cout << " Ingrese el segundo operando: ";

				cin >> op2;

				if (op2 == 0) break;

				resultado = op1 + op2;

				cout << endl << op1 << " + " << op2 << " = " << resultado << endl << endl;
				}

				break;

			case 2:
				op1=op2=1;

				while ( op1 > 0 && op2 > 0 ) 
				{
					cout << " Ingrese el primer operando: " ;

					cin >> op1;

					if (op1 == 0) break;

					cout << " Ingrese el segundo operando: ";

					cin >> op2;

					if (op2 == 0 || op2 > op1) break;

						for ( diferencia = 0 ; (diferencia + op2) < op1 ; diferencia ++ )	/* Realiza la operación de resta sumando sucesivamente */
						{
						}

					cout << endl << op1 << " - " << op2 << " = " << diferencia << endl << endl;
				}

				break;


			case 3:
				op1=op2=1;

				while ( op1 > 0 && op2 > 0 ) 
				{
					cout << " Ingrese el primer operando: " ;

					cin >> op1;

					if (op1 == 0) break;

					cout << " Ingrese el segundo operando: ";

					cin >> op2;

					if (op2 == 0 ) break;

						multiplo = 0;

						for ( int x = 0 ; x < op2 ; x ++ )	/* Realiza la operación de resta sumando sucesivamente */
						{
							multiplo = multiplo + op1;
						}

					cout << endl << op1 << " * " << op2 << " = " << multiplo << endl << endl;
				}

				break;

			case 4:
				dividendo=divisor=1;

				while ( dividendo > 0 && divisor > 0 )					/* Si el dividendo y el divisor son mayores a 0,ejecuta el bloque de instrucciones */
				{	
					cout << endl << "Ingrese el dividendo: " ;

					cin >> dividendo;

					if (dividendo < 1 ) break;						/* Si se ingresa 0 o menor como dividendo , corta el bucle y sale del programa */

					cout << endl << "Ingrese el divisor: " ;

					cin >> divisor;

					if (divisor < 1 ) break;						/* Si se ingresa 0 o menor como divisor, corta el bucle y sale del programa */

					cout << endl << dividendo << " / " << divisor;

					resto = dividendo;

					for ( resultado = 0 ; resto >= divisor; resultado++)	/* Realiza la operación de división restando sucesivamente */
					{
						for ( diferencia = 0 ; (diferencia + divisor) < resto ; diferencia ++ )	/* Realiza la operación de resta sumando sucesivamente */
						{
						}

						resto = diferencia;
					}

					cout <<  " = " << resultado ;						/* Muestra el resultado y el resto */
					cout << "    Resto : " << resto << endl;
				}

				break;
		}
	}
	while (menu !=0);
return 0;
}

