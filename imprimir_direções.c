def imprimir_direcoes(origem, destino):
    x1, y1 = origem
    x2, y2 = destino

    dx = x2 - x1
    dy = y2 - y1

    passo_x = 0 if dx == 0 else int(dx / abs(dx))
    passo_y = 0 if dy == 0 else int(dy / abs(dy))

    i, j = x1 + passo_x, y1 + passo_y
    while (i, j) != (x2 + passo_x, y2 + passo_y):
        direcao = []
        if passo_x == -1:
            direcao.append("Cima")
        elif passo_x == 1:
            direcao.append("Baixo")
        if passo_y == -1:
            direcao.append("Esquerda")
        elif passo_y == 1:
            direcao.append("Direita")
        
        print(f'printf("{ " ".join(direcao) }\\n");')

        i += passo_x
        j += passo_y
