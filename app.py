nota1 = float(input("Digite o valor da nota 1: "))
nota2 = float(input("Digite o valor da nota 2: "))
nota3 = float(input("Digite o valor da nota 3: "))

media = (nota1 + nota2 + nota3) / 3

if media >= 7:
    print(f"Parabéns! Você aprovou com média: {media:.2f}!")
elif media >= 5:
    print(f"Você está de recuperação! Média: {media:.2f}!")
else:
    print(f"Você reprovou! Sua média foi: {media:.2}!")
