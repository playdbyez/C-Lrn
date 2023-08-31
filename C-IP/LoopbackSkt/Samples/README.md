HOW TO:

[0] Compile Both files  
			> $ cc server.c -o a.out  
			> $ cc client.c -o b.out


[1] Open First Terminal


[2] Launch Server + port :   
			> $ ./a.out 2000

[3] Open Second Terminal
			

[4] Discover loopback addr:  
			> $ ip addr

			
[5] Launch Client + IP + port:  
			> $ ./b.out 127.0.0.1 2000
