#include<iostream>
using namespace std;



void mon(){
int i=0;
		while(true){
	cout << "\n\t\t\tGetsuyobi\n";return;

}}


void tue(){
int i=0;
                while(true){
        cout << "\n\t\t\tKayobi\n";return;

}}

void wed(){
int i=0;
                while(true){
        cout << "\n\t\t\tSuiyobi\n";return;

}}

void thu(){
int i=0;
                while(true){
        cout << "\n\t\t\tMokuyobi\n";return;


}}

void fri(){
int i=0;
                while(true){
        cout << "\n\t\t\tKinyobi\n";return;
}}


void sat(){
int i=0;
                while(true){
cout << "\n\t\t\tDoyobi\n";return;
}}

void sun(){
int i=0;
                while(true){
      cout << "\n\t\t\tNichiyobi\n";return;
}}








int main() {

int i = 0;

cout << "\n\t\tTranslate Weekdays to English [JAPANESE]\n\n";

while(true){

cout << "\n Select a Weekday: \n (Numeral 1-7)\n\n";

cout << "\n [1]Monday\n";
cout << "\n [2]Tuesday\n";
cout << "\n [3]Wednesday\n";
cout << "\n [4]Thursday\n";
cout << "\n [5]Friday\n";
cout << "\n [6]Saturday\n";
cout << "\n [7]Sunday\n";
cout << "\n [0]Exit\n";

cout << "\nYour choice!: ";


cin >> i;

switch(i){
case 1: mon();break;
case 2: tue();break;
case 3: wed();break;
case 4: thu();break;
case 5: fri();break;
case 6: sat();break;
case 7: sun();break;
case 0: return -1; break;
default:break;

return -1;
}
}
}
