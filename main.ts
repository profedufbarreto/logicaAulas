function somar(x: number, y: number): number{
    return x + y;
}

function subtrair(x: number, y: number): number{
    return x - y;
}

function multiplicar(x: number, y: number): number{
    return x * y;
}

function dividir(x: number, y: number): number{
    return x / y;
}

let opcao: number = 2;

switch(opcao){
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