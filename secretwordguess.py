secret_word="yuvashree"
guess=""
guess_count=1
guess_limit=3
outofguess=False
while guess!= secret_word and not(outofguess):
    if guess_count <= guess_limit:
        guess= input("enter the guess")
        guess_count +=1
    else :
         outofguess = True

if outofguess:
    print("you lose")
    print(outofguess)
else :
    print("you win")
