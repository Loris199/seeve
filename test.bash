#!/bin/bash

# Script global pour tester un outil
SCRIPT="$PWD/../testTool.bash"

# Outil à tester (voir testTool.bash pour plus d'infos)
TOOL=$1

# Itère sur tous les éléments
for i in $(ls);
do
    # Si c'est un dossier -> Entre dans le dossier
    if [[ -d $i ]]
    then
        cd $i

        echo ""
        echo "#################################### $i ####################################"

        # Itère sur tous les éléments
        for j in $(ls)
        do
            # Si c'est un fichier texte
            if [[ $j == *.txt ]]
            then

                ## Affiche son contenu
                cat $j
                echo ""
            fi

            # Si c'est un dossier -> Entre dans le dossier
            if [[ -d $j ]]
            then
                cd $j

                # Itère sur tous les éléments
                for k in $(ls)
                do
                    $SCRIPT $k $TOOL sevee
                done

                # Retourne dans le dossier parent
                cd ..
            fi
        done

        # Retourne dans le dossier parent
        cd ..
    fi
done

