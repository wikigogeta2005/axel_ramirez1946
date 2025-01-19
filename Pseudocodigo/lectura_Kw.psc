Algoritmo lectura_Kw
	Definir kw Como Entero
	Definir total,precio,preciofinal Como Real
	Escribir "Ingrese la cantidad de Kw usado", kw
	leer kw
	Escribir "Ingrese el precio"
	leer precio
	Si kw  > 700
		Escribir "Existira un incremento de el 5% en el valor a pagar"
		total=0.05* precio 
	SiNo
		Escribir "No existira un incremento del 5% en el valor a pagar"
	FinSi
	preciofinal=precio + total
	escribir "El valor total a pagar es: ", preciofinal
	
FinAlgoritmo
