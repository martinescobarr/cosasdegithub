#include "funciones.h"

int main(void) 
{ 
    
    rk4(0,8.5, x, 0.1, dy, "rk.txt" );
    ofstream outfile;
    outfile.open(path);
    
    outfile << t << " " << x << " " << y << endl;
    

        return 0;
} 