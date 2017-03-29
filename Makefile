make:
	g++ src/*.cpp -o run -std=c++11 -lncurses
exec:
	./run
clean:
	rm run
