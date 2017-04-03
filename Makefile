exec: run
	./run
debug: make_debug
	./run
run: $(wildcard src/*.cpp)
	g++ src/*.cpp -o run -std=c++11 -lncurses
make_debug: $(wildcard src/*.cpp)
	g++ -ggdb src/*.cpp -o run -std=c++11 -lncurses
clean:
	rm run
