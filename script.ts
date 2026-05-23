/// <reference lib="dom" />

function somar(): void{
    let a = (document.getElementById('num1') as HTMLInputElement).value;
    let b = (document.getElementById('num2') as HTMLInputElement).value;

    let soma: number = Number(a) + Number(b);

    let frase: string = `O resultado é ${soma}`;

    document.getElementById('frase')!.innerText = frase;
}