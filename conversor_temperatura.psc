Algoritmo conversor_temperatura
	definir tipo_1, tipo_2, grados, grados_finales Como Real
	
	imprimir "BIENVENIDO A ESTE COVERSOR DE TEMPERATURA"
	imprimir "Escoge la escala de temperatura inicial que deseas convertir"
	imprimir"1. Grados Celsius"
	imprimir"2. Grados Fahrenheit"
	imprimir"3. Grados Kelvin"
	imprimir"4. Grados Rankine"
	leer tipo_1
	
	Segun tipo_1 Hacer
		CASO 1:
			Imprimir "ingrese la escala de temperatura a la que desea pasar"
			imprimir "1. Grados Fahrenheit"
			imprimir "2. Grados Kelvin"
			imprimir "3. Grados rankine"
			leer tipo_2
			imprimir "Ahora digite los grados a convertir"
			leer grados
			si tipo_2 ==1 
				grados_finales<- (grados*9/5)+32
				imprimir grados, "Grados Celsius son equivalentes a" grados_finales "Grados Fahrenheit"
			FinSi
			si tipo_2==2 
				grados_finales<- grados+273.15
				imprimir grados "Grados Celsius son equivalentes a" grados_finales "Grados Kelvin"
			FinSi
			si tipo_2==3
				grados_finales<- (1.8*grados)+491.67
				imprimir grados "Grados Celsius son equivalentes a" grados_finales "Grados Rankine"
			FinSi
			
		CASO 2:
			Imprimir "ingrese la escala de temperatura a la que desea pasar"
			imprimir "1. Grados Celsius"
			imprimir "2. Grados Kelvin"
			imprimir "3. Grados rankine"
			leer tipo_2
			imprimir "Ahora digite los grados a convertir"
			leer grados
			si tipo_2 ==1 
				grados_finales<- (grados-32)/1.8
				imprimir grados "Grados Fahrenheit son equivalentes a" grados_finales "Grados Celsius"
			FinSi
			si tipo_2==2 
				grados_finales<- (grados-32)*5/9+273.15
				imprimir grados "Grados Fahrenheit son equivalentes a" grados_finales "Grados Kelvin"
			FinSi
			si tipo_2==3
				grados_finales<- grados+459.67
				imprimir grados "Grados Fahrenheit son equivalentes a" grados_finales "Grados Rankine"
			FinSi
			
		CASO 3:
			Imprimir "ingrese la escala de temperatura a la que desea pasar"
			imprimir "1. Grados Celsius"
			imprimir "2. Grados Fahrenheit"
			imprimir "3. Grados rankine"
			leer tipo_2
			imprimir "Ahora digite los grados a convertir"
			leer grados
			si tipo_2 ==1 
				grados_finales<- grados-273.15
				imprimir grados "Grados Kelvin son equivalentes a" grados_finales "Grados Celsius"
			FinSi
			si tipo_2==2 
				grados_finales<- (grados-273.15)*9/5+32
				imprimir grados "Grados Kelvin son equivalentes a" grados_finales "Grados Fahrenheit"
			FinSi
			si tipo_2==3
				grados_finales<- grados*1.8
				imprimir grados "Grados Kelvin son equivalentes a" grados_finales "Grados Rankine"
			FinSi
			
		CASO 4:
			Imprimir "ingrese la escala de temperatura a la que desea pasar"
			imprimir "1. Grados Celsius"
			imprimir "2. Grados Fahrenheit"
			imprimir "3. Grados Kelvin"
			leer tipo_2
			imprimir "Ahora digite los grados a convertir"
			leer grados
			si tipo_2 ==1 
				grados_finales<- (grados-491.67)*5/9
				imprimir grados "Grados Rankine son equivalentes a" grados_finales "Grados Celsius"
			FinSi
			si tipo_2==2 
				grados_finales<- grados-459.67
				imprimir grados "Grados Rankine son equivalentes a" grados_finales "Grados Fahrenheit"
			FinSi
			si tipo_2==3
				grados_finales<- grados*5/9
				imprimir grados "Grados Rankine son equivalentes a" grados_finales "Grados Kelvin"
			FinSi
		De Otro Modo:
			imprimir "OPCIÓN NO VALIDA"
	Fin Segun
FinAlgoritmo
