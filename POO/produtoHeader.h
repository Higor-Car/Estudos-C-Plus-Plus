#ifndef Produtos_H_INCLUDED
#define Produtos_H_INCLUDED
using namespace std;

class Produto{

    public:

        int codigo;
        string nome;
        float preco;

    Produto(int codigoProduto);
    void exibirDadosNaTela();
};
void Produto::exibirDadosNaTela(){

    cout<<"Código: "<<codigo<<"\n";
    cout<<"Nome: "<<nome<<"\n";
    cout<<"Preço: "<<preco<<"\n";
    cout<<"\n";
    cout<<"\n";

}
    Produto::Produto(int codigoProduto){
    if(codigoProduto==1){
        codigo=1;
        nome="Detergente";
        preco=9.99;
    }else if(codigoProduto==2){
        codigo=2;
        nome="Miojo";
        preco=4.50;
    }else if(codigoProduto==3){
        codigo=3;
        nome="Coca-Cola";
        preco=14;
    }
}
#endif
