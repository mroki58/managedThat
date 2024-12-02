
# manageThat

Your exercise is to make program run and implement every function properly using git tools.

### How can I do that?

Firstly look in history where functions were implemented and try to merge changes to master branch. You have to do this without writing your own implementation of functions. 

### How should program work in its final version?

Firstly change in main.cpp path to catalog created on your desktop and than in that file new catalog will be created with new txt file whose contents are "Tekst do pliku b1\nTekst do pliku b2" You can use rerere for not resolving conflict again later. https://git-scm.com/book/be/v2/Git-Tools-Rerere

### We assume that this task may take you at least 2 hours

if you're not experienced with GIT. 

# HOW TO START

Please clone this repository to directory on your machine. Than in your terminal write:

for branch in $(git branch -r | grep -v '\->'); do \
    git branch --track ${branch#origin/} $branch \
done

This script will create for you local branches so you don't have to do it yourself.
