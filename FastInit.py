import os

def Add_URL(URL):
    os.system("git remote set-url --add all " + URL)

Flag = False

while True:
    if Flag==False:
        print("Have you Added Origin 'All' already? (Input Y or N) :")
        Answer = input()
        if Answer == "Y":
            Flag = True

    print("Please Input Origin URL You Want to Add (Input EOF to Exit) :")
    URL = input()

    if URL == "EOF":
        break
    
    if Flag == False:
        os.system("git remote add all " + URL)
        Flag = True
    else:
        Add_URL(URL)

os.system("git config pull.ff only")