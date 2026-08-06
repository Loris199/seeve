# Memory Safe C

Ce repos sert d'annexe à mon Travail de Bachelor (TB) et est une extension au repos principal [Memory Safe C](https://github.com/Loris199/Memory-Safe-C)

Le contenu de ce repos est le suivant :

## Dossiers `CWE-xxx`
Ces dossiers contiennent un ou plusieurs programmes de test avec une erreur du CWE correspondant.

Comparé au repos originel, j'y ai effectué deux modifications :
- Retiré les dossiers vides.
- Retiré les programmes demandant un input.

## Dossier `versionIA`
Ce dossier contient une copie de chacun des programmes situés dans les divers dossiers `CWE-xxx` mentionnés ci-dessus. Ces fichiers ont été renommés et modifiés (en retirant les commentaires) afin d'anonymiser l'erreur qu'ils contiennent. Cela a permis de les fournir à une IA afin d'évaluer sa capacité à détecter les erreurs.

## Script `clean.bash`
Ce script permet simplement de nettoyer les fichiers et dossiers créés après avoir utilisé `test.bash` ci-dessous.

## Script `test.bash`
Ce script permet de parcourir l'entier du repos afin de tester successivement chaque programme à l'aide de l'outil passé en paramètre. Le script fait appel à [testTool.bash](https://github.com/Loris199/Memory-Safe-C/tree/main#dossier-scripts) présenté dans le repos principal, par conséquent les mêmes options sont disponibles.

---

README originel ci-dessous.

# SEEWE
Examples that illustrate the different code vulnerabilities according to CWE.

- [CWE-20](CWE-20) (Improper Input Validation)
- [CWE-119](CWE-119) (Improper restriction of operations within the bounds of a memory buffer)
- [CWE-120](CWE-120) (Buffer copy without checking size of input)
- [CWE-125](CWE-125) (Out-of-bounds Read)
- [CWE-134](CWE-134) (Use of externally-controlled format string)
- [CWE-170](CWE-170) (Improper Null Termination)
- [CWE-190](CWE-190) (Integer Overflow or Wraparound)
- [CWE-193](CWE-193) (Off-by-one Error)
- [CWE-195](CWE-195) (Signed to unsigned conversion error)
- [CWE-197](CWE-197) (Numeric truncation error)
- [CWE-222](CWE-222) (Truncation of Security-relevant information - TBD)
- [CWE-369](CWE-369) (Divide By Zero)
- [CWE-401](CWE-401) (Missing release of memory after effective lifetime)
- [CWE-401](CWE-403) (Exposure of file descriptor to unintended control sphere - TBD)
- [CWE-415](CWE-415) (Double free)
- [CWE-416](CWE-416) (Use After Free)
- [CWE-457](CWE-457) (Use of uninitialized variable)
- [CWE-476](CWE-476) (Null pointer dereference)
- [CWE-665](CWE-665) (Improper initialization)
- [CWE-787](CWE-787) (Out-of-bounds Write - TBD)
