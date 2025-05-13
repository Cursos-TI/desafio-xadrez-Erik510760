tabuleiro = criar_tabuleiro()
imprimir_tabuleiro(tabuleiro)

# Mover peão branco de (6, 0) para (5, 0)
mover(tabuleiro, (6, 0), (5, 0))
imprimir_tabuleiro(tabuleiro)

# Mover torre preta de (0, 0) para (2, 0)
mover(tabuleiro, (0, 0), (2, 0))  # Deve dar erro (peão na frente)
