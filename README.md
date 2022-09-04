

# C++ Misc Topics


github: https://github.com/chrisdevsandapps/Cpp-Lang-Tutorials-Miscellaneous1

dir: /Users/wow/Documents/cpp/cpp-misc 




### compiling inteminal:

```sh

g++ helloworld.cpp -o ./binOutput/hello

./binOutput/hello

```



### using makefile
```makefile

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
    
```



### local project vscode settings
`.vscode/settings.json

```json
{
    "git.enabled": false,
}
```

