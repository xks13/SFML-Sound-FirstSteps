IDIR = -IC:/Libs/SFML-2.4.2/include
LDIR = -LC:/Libs/SFML-2.4.2/lib
LIBS = -lsfml-system -lsfml-window -lsfml-graphics

all:
	g++ -c src/main.cpp -o out/obj/main.o $(IDIR)
	g++ -o out/run.exe out/obj/main.o $(LDIR) $(LIBS)