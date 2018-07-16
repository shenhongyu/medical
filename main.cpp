#include "login.h"
#include "log.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    log m;
    m.show();
    if(m.exec() == QDialog::Accepted)
      { login w;
         w.show();
        return a.exec();
      }
     a.quit();
     return 0;

}
