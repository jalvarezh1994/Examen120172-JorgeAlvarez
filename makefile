Examen: main.o Arte.o Literatura.o Escultura.o Pintura.o DisenoArquitectonico.o
	g++ main.o Arte.o Literatura.o Escultura.o Pintura.o DisenoArquitectonico.o -o main

main.o: main.cpp Arte.h Literatura.h Escultura.h Pintura.h DisenoArquitectonico.h 
	g++ -c main.cpp

Arte.o: Arte.cpp Arte.o
	g++ -c Arte.cpp

Literatura.o: Literatura.cpp Literatura.h Arte.h
	g++ -c Literatura.cpp

Escultura.o: Escultura.cpp Escultura.h Arte.h
	g++ -c Escultura.cpp

Pintura.o: Pintura.cpp Pintura.h Arte.h
	g++ -c Pintura.cpp

DisenoArquitectonico.h: DisenoArquitectonico.cpp DisenoArquitectonico.h Arte.h
	g++ -c DisenoArquitectonico.cpp

clean:
	rm -f *.o *.main
