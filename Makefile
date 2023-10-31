# CXX = x86_64-w64-mingw32-g++
# CXXFLAGS = -g 


# JugarJuego : bin/Game 
# 	./bin/Game

# Mensaje : echo "xdddd"

# bin/Game : src/Juego.cpp 

# 	echo "Compilando el Juego "
# 	rm bin/Game
# 	$(CXX) src/Juego.cpp -o bin/Game -I include

# Compilarjuego : src/Juego.cpp 
# 	g++ src/Juego.cpp -o bin/Game -I include

bin/Juego : src/Juego.cpp include/*
	c++ src/Juego.cpp -o bin/Juego -I include -l curses 

run : bin/Juego
	./bin/Juego
