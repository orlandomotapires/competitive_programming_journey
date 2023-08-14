ent = input()

val = float(ent)
result = 0

if val <= 2000.0:
    print("Isento")    
else:
    if val > 2000 and val <= 3000:
        pi = val - 2000
        result = pi * 0.08

    elif val > 3000 and val <= 4500:
        si = val - 2000
        sii = val - 3000
        si -= sii
        si = si * 0.08
        sii = sii * 0.18

        result = si + sii
    elif val > 4500:
        ti = val - 2000
        tii = val - 3000
        tiii = val - 4500

        ti -= tii
        tii -= tiii

        ti = ti * 0.08
        tii = tii * 0.18
        tiii = tiii * 0.28

        result = ti + tii + tiii
        
    print("R$ {:.2f}".format(result))