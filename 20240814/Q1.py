import random

N = random.randint(10, 40)
sum = 0

print(f"N = {N}")

while sum < N:
    if (N - sum - 1) % 4 == 0:
        computer_move = random.randint(1, 3)
    else:
        computer_move = (N - sum - 1) % 4

    sum += computer_move
    print(f"Sum={sum}, Computer add {computer_move}")

    if sum >= N:
        print("Computer wins!")
        break

    player_move = int(input("Your turn, enter a number between 1 and 3: "))

    sum += player_move
    print(f"Sum={sum}, You add {player_move}")

    if sum >= N:
        print("You lose!")
        break
