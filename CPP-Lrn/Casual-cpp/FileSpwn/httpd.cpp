#include<iostream>
#include<fstream>
 using namespace std; 

fstream ttf;
 int main()

{

ttf.open("newht.txt", ios::out);
ttf<<"\n<head>\n"<<"\n</head>\n"<<"\n<body>\n"<< "\n<script type=\"text/javascript\">"<<"\n\n</script>\n"<<"\n</body>\n";
ttf.close();
cout << "Html created \n";
return 0;
}


/*
Javascript by John Pollock 3rd Edition
Add the lines shown between the <body> and </body> tags:
<br />
<h1>This is HTML</h1>
<script type ="text/javascript">
document.write("This is Js");
function fik(){window.alert("Ouch!");}
document.onclick = fik;
</script>
<br />
Or add the lines instead:
<body>
<script type="text/javascript" src="ch3_code.js"></script>
</body>
*/
