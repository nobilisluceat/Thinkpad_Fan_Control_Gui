#include "tfcgui.h"
#include "ui_tfcgui.h"

tfcgui::tfcgui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tfcgui)
{
    ui->setupUi(this);
}

tfcgui::~tfcgui()
{
    delete ui;
}

void tfcgui::on_pushButton_disable_clicked()
{
    system("echo disable | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_auto_clicked()
{
    system("echo level auto | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_1_clicked()
{
    system("echo level 1 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_2_clicked()
{
    system("echo level 2 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_3_clicked()
{
    system("echo level 3 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_4_clicked()
{
    system("echo level 4 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_5_clicked()
{
    system("echo level 5 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_6_clicked()
{
    system("echo level 6 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_7_clicked()
{
    system("echo level 7 | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_full_speed_clicked()
{
    system("echo level full-speed | sudo tee /proc/acpi/ibm/fan");
}

void tfcgui::on_pushButton_disengaged_clicked()
{
    system("echo level disengaged | sudo tee /proc/acpi/ibm/fan");
}


