entrada = input()

partes = entrada.split()

numeros = [float(numero) for numero in partes]

maior_numero = max(numeros)

print(f"{int(maior_numero)} eh o maior")