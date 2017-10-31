IDIR = -IC:/Libs/SFML-2.4.2/include
LDIR = -LC:/Libs/SFML-2.4.2/lib
LIBS = -lsfml-audio -lsfml-system -lsfml-window -lsfml-graphics
SDIR = src/App
ODIR = obj

link: $(ODIR)/main.o $(ODIR)/Application.o $(ODIR)/SoundMenager.o
	g++ -o out/run.exe $(ODIR)/main.o $(ODIR)/Application.o $(ODIR)/SoundMenager.o $(LDIR) $(LIBS)

$(ODIR)/Application.o: $(SDIR)/Application.cpp
	g++ -c $(SDIR)/Application.cpp -o $(ODIR)/Application.o $(IDIR)

$(ODIR)/SoundMenager.o: $(SDIR)/SoundMenager.cpp
	g++ -c $(SDIR)/SoundMenager.cpp -o $(ODIR)/SoundMenager.o $(IDIR)

$(ODIR)/main.o: src/main.cpp
	g++ -c src/main.cpp -o $(ODIR)/main.o $(IDIR)