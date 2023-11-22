//UNFINSHED AT THE MOMENT, MOUNTAINS R NOT SMOOTH ENOUGH
#include <iostream>
#include <Windows.h>

int main() {
    int value{ 0 };
    int randNum{ 0 };
    int terminator{ 0 };
    int plane[200][200];
    HWND console{ GetConsoleWindow() };
    HDC DC{ GetDC(console) };
    int pixel{ 0 };
    COLORREF color;

    /*array iterator */
    for (int i = 0; i < 200; i++) {

        for (int j = 0; j < 200; j++) {
            
            /*checks if it backed up against a "wall" (makes sure search stays in bounds)*/
            if (i == 0 && j == 0) {
                value = 15;
            }
            else if (j == 0) {
                value = plane[i - 1][j];
            }
            else if (i == 0) {
                value = plane[i][j - 1];
            } 
            else {
                randNum = 1 + rand() % 2;
                if (randNum == 1) {
                    value = plane[i - 1][j] ;
                }
                if (randNum == 2) {
                    value = plane[i][j - 1] ;
                }


            }

            /*procedural handling*/

            //MAKE MORE PROCEDURAL eg. 12212343432321 and not 1247643235
            if (randNum == 1 ) {
                if (value > 0) {
                value--;
                }
            }
            //make actually random
            randNum = 1 + rand() % 2; 

            //also make more procedural 
            if (randNum == 2 ) {
                value++;
            }
            
           
            while(value > 25) {

                value--;
            }
            
            
            
            plane[i][j] = value;
            
            color = RGB(0 , value * 10, 0);
            SetPixel(DC, i + 200, j + 200, color);
        }

    }
}
