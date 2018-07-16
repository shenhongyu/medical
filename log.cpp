#include "log.h"
#include "ui_log.h"
#include<qmessagebox.h>
log::log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::log)
{
    ui->setupUi(this);
}

log::~log()
{
    delete ui;
}

void log::on_pushButton_clicked()
{ QString name,pass;
        name = ui->username->text();
        pass = ui->message->text();
        if (name == "yuhao"  )
            {
            if (pass == "1244")
              { this->accept();}
            else
            { QMessageBox::warning(this,"警告","密码错误",QMessageBox::Yes,QMessageBox::No);}
             ui->message->clear();
        }
       else
        {QMessageBox::warning(this,"警告","用户名错误",QMessageBox::Yes,QMessageBox::No);}
     ui->username->clear();
}
