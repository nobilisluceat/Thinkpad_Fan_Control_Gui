#ifndef TFCGUI_H
#define TFCGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tfcgui; }
QT_END_NAMESPACE

class tfcgui : public QMainWindow
{
    Q_OBJECT

public:
    tfcgui(QWidget *parent = nullptr);
    ~tfcgui();

private slots:
    void on_pushButton_Disable_clicked();

    void on_pushButton_enable_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_disable_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_full_speed_clicked();

    void on_pushButton_disengaged_clicked();

    void on_pushButton_auto_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::tfcgui *ui;
};
#endif // TFCGUI_H
