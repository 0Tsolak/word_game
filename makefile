word_game:main.o func.o hider.hpp
	g++ func.o hider.hpp main.o -o word_game

func.o:func.cpp
	g++ -c func.cpp -o func.o

main.o:main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm main.o func.o word_game
