#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <calculator.h>
#include <QString>
#include <QVector>

class Xml : public Calculator {

public:
    Xml();
    ~Xml();
                QVector<int> parse(const QString &filePir) override;
    void write(const QString &savePir, QVector<int> result) override;

};

#endif // XMLPARSER_H
