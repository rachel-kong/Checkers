game: game.c
	gcc -o game game.c -SDL??? // incomplete
run: game
	./game
clean:
	rm -rf game
