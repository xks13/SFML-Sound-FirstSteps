IDIR = -IC:/Libs/SFML-2.4.2/include
LDIR = -LC:/Libs/SFML-2.4.2/lib
LIBS = -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
SDIR = src/App
ODIR = obj

link: $(ODIR)/main.o $(ODIR)/Application.o $(ODIR)/AudioMenager.o $(ODIR)/Music.o $(ODIR)/Sound.o
	g++ -o out/run.exe $(ODIR)/main.o $(ODIR)/Application.o $(ODIR)/AudioMenager.o $(ODIR)/Music.o $(ODIR)/Sound.o $(LDIR) $(LIBS)

$(ODIR)/Application.o: $(SDIR)/Application.cpp
	g++ -c -std=c++11 $(SDIR)/Application.cpp -o $(ODIR)/Application.o $(IDIR)

$(ODIR)/AudioMenager.o: $(SDIR)/AudioMenager.cpp
	g++ -c -std=c++11 $(SDIR)/AudioMenager.cpp -o $(ODIR)/AudioMenager.o $(IDIR)

$(ODIR)/Music.o: $(SDIR)/Music.cpp
	g++ -c -std=c++11 $(SDIR)/Music.cpp -o $(ODIR)/Music.o $(IDIR)

$(ODIR)/Sound.o: $(SDIR)/Sound.cpp
	g++ -c -std=c++11 $(SDIR)/Sound.cpp -o $(ODIR)/Sound.o $(IDIR)

$(ODIR)/main.o: src/main.cpp
	g++ -c -std=c++11 src/main.cpp -o $(ODIR)/main.o $(IDIR)