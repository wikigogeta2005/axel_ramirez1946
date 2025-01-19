Funcion Fibonacci(k)
    Definir num, num1, num2, suma Como Entero
    num1 = 0
    num2 = 1
    Si k = 1 Entonces
        num2 = 1
    FinSi
    Para i = 1 Hasta k Hacer
        suma = num1 + num2
        num1 = num2
        num2 = suma
    FinPara
    Si num1 <> 0 Entonces  
        Escribir num1
    FinSi
FinFuncion

Funcion factorial(k)
    Definir j, fact Como Entero
    fact = 1
    Para j = 1 Hasta k Hacer
        fact = fact * j
    FinPara
    Escribir fact  
FinFuncion

Algoritmo fibonacci_factorial
    Definir contador, resultado, resultadofinal Como Real
    Escribir "Ingresa un numero para la serie de Fibonacci y el factorial, por favor"
    Leer contador
    resultadofinal = 0
    Para k = 1 Hasta contador Hacer
        Escribir "Fibonacci de ", k, ":"
        Fibonacci(k) 
        Escribir "Factorial de ", k, ":"
        factorial(k)  
        Fibonacci_k = 0
        num1 = 0
        num2 = 1
        Para i = 1 Hasta k Hacer
            suma = num1 + num2
            num1 = num2
            num2 = suma
        FinPara
        Fibonacci_k = num1 
        
        factorial_k = 1
        Para j = 1 Hasta k Hacer
            factorial_k = factorial_k * j
        FinPara
        Si Fibonacci_k <> 0 Entonces  
            resultado = factorial_k / Fibonacci_k
            resultadofinal = resultadofinal + resultado
            Escribir "El término ", k, " de la serie es: ", resultado
        FinSi
    FinPara
    Escribir " El resultado final ", contador, " es: ", resultadofinal
FinAlgoritmo
