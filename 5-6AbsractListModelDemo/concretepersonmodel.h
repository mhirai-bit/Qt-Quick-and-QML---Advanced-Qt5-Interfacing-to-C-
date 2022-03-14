#ifndef CONCRETEPERSONMODEL_H
#define CONCRETEPERSONMODEL_H

#include "personmodel.h"

class ConcretePersonModel : public PersonModel
{
public:
    explicit ConcretePersonModel(QObject *parent = nullptr);
    void debug();
};

#endif // CONCRETEPERSONMODEL_H
