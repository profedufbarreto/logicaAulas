"use strict";
/// <reference lib="dom" />
function somar() {
    let a = document.getElementById('num1').value;
    let b = document.getElementById('num2').value;
    let soma = Number(a) + Number(b);
    let frase = `O resultado é ${soma}`;
    document.getElementById('frase').innerText = frase;
}
