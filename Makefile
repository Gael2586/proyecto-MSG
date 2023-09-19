JugarJuego : bin/Game 
	./bin/Game

Mensaje : echo "xdddd"

bin/Game : src/Juego.cpp 

	echo "Compilando el Juego "
	rm bin/Game
	g++ src/Juego.cpp -o bin/Game -I include

Compilarjuego : src/Juego.cpp 
	g++ src/Juego.cpp -o bin/Game -I include
