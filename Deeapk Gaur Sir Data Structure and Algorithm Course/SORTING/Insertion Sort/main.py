def insert(val, l1):
    nl = []
    inserted = False
    for x in l1:
        if not inserted:
            if val <= x:
                nl.append(val)
                inserted = True
        nl.append(x)

    if not inserted:
        nl.append(val)

    return nl

l1 = [1, 2, 3, 4, 5, 6, 8, 9]
l1 = insert(-1, l1)
l1 = insert(-7, l1)
l1 = insert(89, l1)
l1 = insert(10, l1)
l1 = insert(17, l1)

for x in l1:
    print(x)
