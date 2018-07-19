#ifndef QTV_H
#define QTV_H

#include <QMainWindow>
#include <QDialog>
#include <QFileSystemModel>

namespace Ui { class qtv;
}

class qtv : public QMainWindow{
    Q_OBJECT

public:
    explicit qtv(QWidget *parent = 0);
    ~qtv();

private slots:
    void on_dirview_clicked(const QModelIndex &index);
    void on_fileview_clicked(const QModelIndex &index);

private:
    Ui::qtv *ui;
    QFileSystemModel *dirModel; QFileSystemModel *fileModel;
};


#endif // QTV_H
