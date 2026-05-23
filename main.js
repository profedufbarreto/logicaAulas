"use strict";
function somar(x, y) {
    return x + y;
}
function subtrair(x, y) {
    return x - y;
}
function multiplicar(x, y) {
    return x * y;
}
function dividir(x, y) {
    return x / y;
}
let opcao = 2;
switch (opcao) {
    case 1:
        console.log(somar(10, 5));
        break;
    case 2:
        console.log(subtrair(10, 6));
        break;
    case 3:
        console.log(multiplicar(5, 5));
        break;
    case 4:
        console.log(dividir(10, 2));
        break;
    default:
        console.log("Você escolheu uma opção inválida!!");
}
