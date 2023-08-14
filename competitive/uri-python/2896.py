qnt = int(input())

for _ in range(qnt):
    entrada = input()
    partes = entrada.split()

    p = int(partes[0])
    s = int(partes[1])

    r = p%s
    v = int(p/s)

    print(v + r)