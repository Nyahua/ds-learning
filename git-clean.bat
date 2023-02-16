git branch -m master
git checkout --orphan temp_branch
git add -A
git commit -am "clean all history"
git branch -D master
git branch -m master