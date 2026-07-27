#!/bin/bash

# Itère sur tous les éléments
for i in $(ls);
do

    # Si c'est un dossier -> Entre dans le dossier
    if [[ -d $i ]]
    then
        cd $i

        # Itère sur tous les éléments
        for j in $(ls)
        do

            # Si c'est un dossier -> Entre dans le dossier
            if [[ -d $j ]]
            then
                cd $j

                rm -rf gcc
                rm -rf clang
                rm *.plist
                rm -rf infer-out
                rm -rf filC
                rm -rf valgrind
                rm -rf aSan
                rm -rf cheri
                rm -rf mte
                rm -rf boehm

                echo "- Nettoyé: "$i"/"$j

                # Retourne dans le dossier parent
                cd ..
            fi
        done

        # Retourne dans le dossier parent
        cd ..
    fi
done

