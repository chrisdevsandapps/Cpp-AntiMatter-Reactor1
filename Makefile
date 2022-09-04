




VAR1 = helloworld
VAR2 = hello



love: $(VAR1).cpp
	g++ $(VAR1).cpp -o ./binOutput/$(VAR2)
	sleep 1
	echo "hello world! hahaha!"
	sleep 1
	clear
	./binOutput/$(VAR2)

clear:
	rm ./binOutput/$(VAR2)
