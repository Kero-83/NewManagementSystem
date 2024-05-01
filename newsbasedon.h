#ifndef NEWSBASEDON_H
#define NEWSBASEDON_H

#include <QMainWindow>

namespace Ui {
class Newsbasedon;
}

class Newsbasedon : public QMainWindow
{
    Q_OBJECT

public:
    explicit Newsbasedon(QWidget *parent = nullptr);
    ~Newsbasedon();

private slots:
    void on_Category_clicked();

private:
    Ui::Newsbasedon *ui;
};

#endif // NEWSBASEDON_H
