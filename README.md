# tp1

### Ejercicio 2 - 2-a

El archivo .gitignore es conveniente incluirlo porque especifica los archivos que Git debe ignorar 
intencionalmente y que no se rastrean.
Se debe hacer antes de crear los archivos a ignorar.
Para crear un archivo .gitignore, se crea un archivo de texto y se asigna de nombre .gitignore.
Luego se edita este archivo, cada nueva linea debe incluir un archivo o capeta que quiera que Git
lo ignore siguiendo una convencion para distinguir los elementos.

### Ejercicio 3

**Codigo misterioso:** 

El codigo misterioso cambia de valor un numero, primero invierte sus cifras, lo divide en 2
y lo suma con la suma de sus cifras.
 
- **temp** cambia a **valor_inicial** porque es el valor inicial que ingresa a las funciones
- **rev** cambia a **numero_invertido** porque es el resultado de invertir el numero que entra a la funcion
- **p** cambia a **pNumero** porque es un puntero a un numero arbitrario
- **f_alpha** cambia a **invertir** porque dado un numero, la funcion invierte sus cifras
- **f_beta** cambia a **mitad** porque dado un numero , la funcion divide en 2 al numero ingresado
- **f_gamma** cambia a **suma_digito_numero** porque dado el numero, la funcion suma sus digitos con el numero inicial
- **procesar_enigma** cambia a **transforma_numero** porque dado el numero, la funcion hace tres operaciones y cambia su valor inicial
- **dato_secreto** cambia a **tranformar** porque el numero se va a transformar en otro numero

**Codigo sin funcionar:** 

1. se esperaba en dos lineas el ; ,**solucion**: agregar el ; en las dos lineas
2. falto el pasaje por valor de la variable **valor1**, **solucion**: agregar el operador de direccion &
3. falto incluir la libreria stdio.h , **solucion**: incluir la libreria stdio al principio
4. la funcion no duplicaba el valor ingresado, **solucion**: hacer que la funcion tenga pasaje de parametro por referencia

### Ejercicio 4
