IDIR = -IC:/Libs/SFML-2.4.2/include
LDIR = -LC:/Libs/SFML-2.4.2/lib
LIBS = -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
ADIR = src/Audio
DDIR = src/Demo
ODIR = obj

link: $(ODIR)/main.o $(ODIR)/Application.o $(ODIR)/AudioMenager.o $(ODIR)/Music.o $(ODIR)/Sound.o $(ODIR)/Dubbing.o $(ODIR)/Player.o
	g++ -o out/run.exe $(ODIR)/main.o $(ODIR)/Application.o $(ODIR)/AudioMenager.o $(ODIR)/Music.o $(ODIR)/Sound.o $(ODIR)/Dubbing.o $(ODIR)/Player.o $(LDIR) $(LIBS)

$(ODIR)/Application.o: src/Application.cpp
	g++ -c -std=c++11 src/Application.cpp -o $(ODIR)/Application.o $(IDIR)
	
$(ODIR)/Player.o: $(DDIR)/Player.cpp
	g++ -c -std=c++11 $(DDIR)/Player.cpp -o $(ODIR)/Player.o $(IDIR)

$(ODIR)/AudioMenager.o: $(ADIR)/AudioMenager.cpp
	g++ -c -std=c++11 $(ADIR)/AudioMenager.cpp -o $(ODIR)/AudioMenager.o $(IDIR)

$(ODIR)/Music.o: $(ADIR)/Music.cpp
	g++ -c -std=c++11 $(ADIR)/Music.cpp -o $(ODIR)/Music.o $(IDIR)

$(ODIR)/Sound.o: $(ADIR)/Sound.cpp
	g++ -c -std=c++11 $(ADIR)/Sound.cpp -o $(ODIR)/Sound.o $(IDIR)

$(ODIR)/Dubbing.o: $(ADIR)/Dubbing.cpp
	g++ -c -std=c++11 $(ADIR)/Dubbing.cpp -o $(ODIR)/Dubbing.o $(IDIR)

$(ODIR)/main.o: src/main.cpp
	g++ -c -std=c++11 src/main.cpp -o $(ODIR)/main.o $(IDIR)