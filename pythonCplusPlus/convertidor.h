#include <iostream>

using namespace std;
class Converter{
public:
    // constructor de la clase con los parametros necesarios para el convertidor
    Converter(float,float,float,float,float,float,float,float,float,float,float,float,float);
    //Metodo que muestra la ecuaciones no linealizadas
    void ecuations();
    void balnce_charge();
    void stateSpace();
    void imprimir(float[]);
    void imprimir(float[3][3]);
public:
    float Vci,Vco,I,RB,VB,Isc,Rmpp,Ci, L,Co,D,Ron,Rl, A[3][3], B[3][3], C[3], D1[3];
};

Converter::Converter(float vci,float rb,float vco, float l,float i,float vb,float isc,float rmpp, float ci, float co,float d,float ron, float rl){
    Vci = vci;
    Vco = vco;
    I = i;
    VB = vb;
    Isc = isc;
    Rmpp = rmpp;
    Ci = ci;
    Co = co;
    D=d;
    Ron = ron;
    Rl = rl;
    L = l;
    RB = rb;
}
void Converter::ecuations(){
    cout << "When Q1 is ON and Q2 is off" << endl;
    cout << "Ici = Isc - Vci - I" <<endl;
    cout << "            ---" <<endl;
    cout << "            Rmpp"<<endl<<endl;
    cout << "Ico = -Vco + VB" <<endl;
    cout << "       ----  ---" <<endl;
    cout << "       RB    RB"<<endl<<endl;
    cout << "Ici = Vci - I(Rl + Ron)" <<endl<<endl;
}
void Converter::balnce_charge(){
    cout << "When Q1 is ON and Q2 is off" << endl;
    cout << "Ici = Isc - Vci - I" <<endl;
    cout << "            ---" <<endl;
    cout << "            Rmpp"<<endl<<endl;
    cout << "Ico = -Vco + VB" <<endl;
    cout << "       ----  ---" <<endl;
    cout << "       RB    RB"<<endl<<endl;
    cout << "Ici = Vci - I(Rl + Ron)" <<endl<<endl;
}

void Converter::stateSpace(){
    // State space matrix
    A[0][0] = -1/(Ci*Rmpp);
    A[0][1] = -1/Ci;
    A[0][2] = 0;
    A[1][0] = 1/L;
    A[1][1] = -(Rl+Ron)/L;
    A[1][2] = (D-1)/L;
    A[2][0] = 0;
    A[2][1] = (1-D)/Co;
    A[2][2] = -1/(Co*RB);

    B[0][0] = 1/Ci;
    B[0][1] = 0;
    B[0][2] = 0;
    B[1][0] = 0;
    B[1][1] = 0;
    B[1][2] = Vco/L;
    B[2][0] = 0;
    B[2][1] = 1/(Co*RB);
    B[2][2] = -I/Co;
    // vector de salida
    C[0] = 1;
    C[1] = 0;
    C[2] = 0;

    D1[0] = 0;
    D1[1] = 0;
    D1[2] = 0;

}
// print matirx
void Converter::imprimir(float m[][3]){

    for(int i=0; i<3; i++){
        cout << "|     ";
        for(int j=0; j<3; j++){
            cout << m[i][j] << "       ";
        }
        cout << " |" << endl;
    }
    cout << endl;
}
// print array
void Converter::imprimir(float m1[]){
    cout << "[      " ;
    for(int i=0; i<3; i++){
        cout << m1[i];
    }
    cout << "      ]" << endl;
}
