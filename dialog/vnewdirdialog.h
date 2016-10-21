#ifndef VNEWDIRDIALOG_H
#define VNEWDIRDIALOG_H

#include <QDialog>

class QLabel;
class QLineEdit;
class QPushButton;
class QString;

class VNewDirDialog : public QDialog
{
    Q_OBJECT
public:
    VNewDirDialog(const QString &title, const QString &name, const QString &defaultName,
                  const QString &description, const QString &defaultDescription, QWidget *parent = 0);
    QString getNameInput() const;
    QString getDescriptionInput() const;

private slots:
    void enableOkButton(const QString &editText);

private:
    void setupUI();

    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QLineEdit *nameEdit;
    QLineEdit *descriptionEdit;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    QString title;
    QString name;
    QString defaultName;
    QString description;
    QString defaultDescription;
};

#endif // VNEWDIRDIALOG_H