#include "book.h"

string book::getname()
{
    return name;
}

string book::getafirst()
{
    return authorname_first;
}

string book::getalast()
{
    return authorname_last;
}

string book::getgenra()
{
    return genra;
}

book::book()
{
    name = " ";
    authorname_first = " ";
    authorname_last = " ";
    genra = " ";

}

book::book( string n, string f, string l, string g)
{
    name = n;
    authorname_first = f;
    authorname_last = l;
    genra = g;
}
