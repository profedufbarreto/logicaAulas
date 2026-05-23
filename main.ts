let age: number = 38;

if(age < 0){
    console.log("Idade inválida!");
}else if(age < 6){
    console.log("Criança!");
}else if(age < 10){
    console.log("Pré-adolescente!");
}else if(age < 16){
    console.log("Adolescente!");
}else{
    console.log("Adulto!");
}