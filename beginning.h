#ifndef BEGINNING_H
#define BEGINNING_H

#include <QDialog>
#include "singleplay.h"
#include "networkplay.h"

namespace Ui {
class Beginning;
}

class Beginning : public QDialog
{
    Q_OBJECT

public:
    explicit Beginning(QWidget *parent = nullptr);
    ChessBoard* chessBoard=nullptr;
    SinglePlay* singlePlay=nullptr;
    NetworkPlay* networkPlay=nullptr;
    ~Beginning();

private:
    Ui::Beginning *ui;
};

#endif // BEGINNING_H
