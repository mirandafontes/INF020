/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package interfaces;


/**
 *
 * @author Hatsune Miku
 */
public interface IConta{

    public int getId();

    public void setId(int idConta);

    public float getSaldo();

    public void setSaldo(float saldo);

    public void sacar(float valor);

    public void depositar(float valor);
    
}
