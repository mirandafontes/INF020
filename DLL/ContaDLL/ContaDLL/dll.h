
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   cadDLL.h
 * Author: Paulo Ricardo
 *

 */

#ifdef BUILD_DLL
 #define CADDLL __declspec(dllexport)
#else
 #define CADDLL __declspec(dllimport)
#endif



CADDLL void criarConta(int idConta);
CADDLL void verSaldo(int id);
CADDLL void sacar (int id, int valor);
CADDLL void depositar (int id, int valor);



