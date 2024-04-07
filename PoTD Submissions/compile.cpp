#include <iostream>
using namespace std;
int main(){
    string directory;
    int loops;
    cout << "What is your latex file name (without .tex)? "; cin >> directory;
    cout << "How many .asy files need to be compliled? "; cin >> loops;
    cout << "In cmd_latex you will find the command line. ";
    freopen("cmd_latex", "w", stdout);
    cout << "pdflatex " << directory << ".tex" << endl;
    for (int i = 1; i < (loops + 1); i++){
        cout << "asy -wsl -outname" << directory << "-" << i << ".eps" 
                                    << directory << "-" << i << ".asy" << endl;
    }
    cout << "pdflatex " << directory << ".tex" << endl;
}