primera: grafica_error1.pdf 
grafica_error1.pdf: datos1.txt grafica_error1.py
	python grafica_error1.py
datos1.txt: ./primero
	./primero > datos1.txt
primero: primer_orden_RK4.cpp
	c++ primer_orden_RK4.cpp -o primero

segunda: grafica_error2.pdf
grafica_error2.pdf: datos2.txt grafica_error2.py
	python grafica_error2.py
datos2.txt: segundo
	./segundo > datos2.txt
segundo: segundo_orden_RK4.cpp
	c++ segundo_orden_RK4.cpp -o segundo
