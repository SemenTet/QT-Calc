#include "calculator.h"
#include "xml.h"
#include "txt.h"

#include <QFileInfo>
#include <qfile.h>

Calculator::Calculator() {
}
Calculator::~Calculator() {
}

Calculator* Calculator::getConstructorByPir(const QString &filePir) {
    QFileInfo qfli(filePir);
    if(qfli.completeSuffix() == "xml") {
        Xml *xml = new Xml();
        return xml;

    }
    else if(qfli.completeSuffix() == "txt") {
        Txt *txt = new Txt();
        return txt;
    }
}

int Calculator::sum(int a, int b) {
    return a+b;
}

int Calculator::diff(int a, int b) {
    return a-b;
}

int Calculator::mult(int a, int b) {
    return a*b;
}

int Calculator::div(int a, int b) {
    return a/b;
}

