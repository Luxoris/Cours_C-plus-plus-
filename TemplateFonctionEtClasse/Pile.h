#pragma once

template <typename T> //utiliser typename ou class
class Pile
{
    typedef struct ElementPile
    {
        T Element;                 // On utilise le type T comme
        struct ElementPile* Suivant; // si c'était un type normal.
    } ElementPile;

    ElementPile* Tete;

public:         // Les fonctions de la pile :
    Pile(void);
    Pile(const Pile<T>&);
    ~Pile(void);
    Pile<T>& operator=(const Pile<T>&);
    void empile(T);
    T depile(void);
    bool estVide(void) const;
    void vide(void);
};

// Pour les fonctions membres définies en dehors de la déclaration
// de la classe, il faut une déclaration de type générique :

template <typename T>
Pile<T>::Pile(void) // La classe est référencée en indiquant
                      // son type entre < et > ("Pile<T>").
                      // C'est impératif en dehors de la
                      // déclaration de la classe.
{
    Tete = nullptr;
    return;
}

template <typename T>
Pile<T>::Pile(const Pile<T>& Init)
{
    Tete = nullptr;
    ElementPile* tmp1 = Init.Tete, * tmp2 = nullptr;
    while (tmp1 != nullptr)
    {
        if (tmp2 == nullptr)
        {
            Tete = new ElementPile;
            tmp2 = Tete;
        }
        else
        {
            tmp2->Suivant = new ElementPile;
            tmp2 = tmp2->Suivant;
        }
        tmp2->Element = tmp1->Element;
        tmp1 = tmp1->Suivant;
    }
    if (tmp2 != nullptr) tmp2->Suivant = nullptr;
    return;
}

template <typename T>
Pile<T>::~Pile(void)
{
    vide();
    return;
}

template <typename T>
Pile<T>& Pile<T>::operator=(const Pile<T>& Init)
{
    vide();
    ElementPile* tmp1 = Init.Tete, * tmp2 = nullptr;

    while (tmp1 != nullptr)
    {
        if (tmp2 == nullptr)
        {
            Tete = new ElementPile;
            tmp2 = Tete;
        }
        else
        {
            tmp2->Suivant = new ElementPile;
            tmp2 = tmp2->Suivant;
        }
        tmp2->Element = tmp1->Element;
        tmp1 = tmp1->Suivant;
    }
    if (tmp2 != nullptr) tmp2->Suivant = nullptr;
    return *this;
}

template <typename T>
void Pile<T>::empile(T Element)
{
    ElementPile* tmp = new ElementPile;
    tmp->Element = Element;
    tmp->Suivant = Tete;
    Tete = tmp;
    return;
}

template <typename T>
T Pile<T>::depile(void)
{
    T tmp;
    ElementPile* ptmp = Tete;

    if (Tete != nullptr)
    {
        tmp = Tete->Element;
        Tete = Tete->Suivant;
        delete ptmp;
    }
    return tmp;
}

template <typename T>
bool Pile<T>::estVide(void) const
{
    return (Tete == nullptr);
}

template <typename T>
void Pile<T>::vide(void)
{
    while (Tete != nullptr) depile();
    return;
}
