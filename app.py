a = float(input("Digite um valor para a: "))
b = float(input("Digite um valor para b: "))

opcao = int(input("Escolha uma opção: (1 - Soma, 2 - Subt, 3 - Mult e 4 - Div: )"))

if opcao == 1:
    soma = a + b
    print(f"O resultado de {a} + {b} = {soma}!")
elif opcao == 2:
    subt = a - b
    print(f"O resultado de {a} - {b} = {subt}!")
elif opcao == 3:
    mult = a * b
    print(f"O resultado de {a} * {b} = {mult}!")
else:
    if b <= 0:
        print(f"ERRO: Divisão por zero!")
    else:
        div = a / b
        print(f"O resultado de {a} / {b} = {div}!")


