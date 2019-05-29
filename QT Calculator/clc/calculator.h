#ifndef INTERFACECALCULATOR_H
#define INTERFACECALCULATOR_H

#include <QString>
#include <QVector>


class Calculator {
public:
    static Calculator* getConstructorByPir(const QString &filePir);

   virtual ~Calculator();

    virtual void write(const QString &savePir, QVector<int> result) = 0;
    virtual QVector<int> parse(const QString &filePir) = 0;
protected:
    Calculator();

    virtual int sum(int a, int b);
    virtual int div(int a, int b);
    virtual int mult(int a, int b);
    virtual int diff(int a, int b);
};

#endif // INTERFACECALCULATOR_H
