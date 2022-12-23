def repetitions(dna):
    l = len(dna)
    sec_len = 1
    lg_sec = 1
    last_c = dna[0]

    for i in range(1,l):
        if last_c == dna[i]:
            sec_len += 1
            
        else:
            if sec_len > lg_sec:
                lg_sec += 1
            sec_len = 1
            last_c = dna[i]
    if sec_len > lg_sec:
        lg_sec += 1
    return lg_sec

dna = input()
print(repetitions(dna))
