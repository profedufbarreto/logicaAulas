"use strict";
class Pagamento {
    constructor(valor) {
        this.valor = valor;
    }
    mostrarValor() {
        console.log(`Valor: R$ ${this.valor}`);
    }
}
class CartaoCredito extends Pagamento {
    processar() {
        console.log("Processando pagamento com CARTÃO...");
        console.log(`Valor: R$${this.valor}`);
        console.log("Pagamento aprovado!");
    }
}
class Boleto extends Pagamento {
    processar() {
        console.log("Gerando BOLETO...");
        console.log(`Valor: R$${this.valor}`);
        console.log("Boleto gerado!");
    }
}
class PIX extends Pagamento {
    processar() {
        console.log("Iniciando transferência PIX...");
        console.log(`Valor: R$${this.valor}`);
        console.log("Pix enviado!");
    }
}
let pag1 = new CartaoCredito(100);
pag1.processar();
console.log("");
let pag2 = new Boleto(250);
pag2.processar();
console.log("");
let pag3 = new PIX(500);
pag3.processar();
