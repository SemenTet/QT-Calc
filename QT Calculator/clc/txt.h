#ifndef TXTPARSER_H
#define TXTPARSER_H

#include "calculator.h"

class Txt : public Calculator
{
public:
    Txt();
    ~Txt() override;
    QVector<int> parse(const QString &filePir) override;
  void write(const QString &savePir, QVector<int> result) override;
};

#endif // TXTPARSER_H
