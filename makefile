IDIR = -IC:/Libs/SFML-2.4.2/include
LDIR = -LC:/Libs/SFML-2.4.2/lib
LIBS = -lsfml-system -lsfml-window -lsfml-graphics
SDIR = src/App
ODIR = out/obj

link: $(ODIR)/main.o $(ODIR)/Application.o
	g++ -o out/run.exe $(ODIR)/main.o $(ODIR)/Application.o $(LDIR) $(LIBS)

$(ODIR)/Application.o: $(SDIR)/Application.cpp
	g++ -c $(SDIR)/Application.cpp -o $(ODIR)/Application.o $(IDIR)

$(ODIR)/main.o: src/main.cpp
	g++ -c src/main.cpp -o $(ODIR)/main.o $(IDIR)