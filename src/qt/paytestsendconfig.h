#ifndef OBFUSCATIONCONFIG_H
#define OBFUSCATIONCONFIG_H

#include <QDialog>

namespace Ui
{
class PayTestsendConfig;
}
class WalletModel;

/** Multifunctional dialog to ask for passphrases. Used for encryption, unlocking, and changing the passphrase.
 */
class PayTestsendConfig : public QDialog
{
    Q_OBJECT

public:
    PayTestsendConfig(QWidget* parent = 0);
    ~PayTestsendConfig();

    void setModel(WalletModel* model);


private:
    Ui::PayTestsendConfig* ui;
    WalletModel* model;
    void configure(bool enabled, int coins, int rounds);

private slots:

    void clickBasic();
    void clickHigh();
    void clickMax();
};

#endif // OBFUSCATIONCONFIG_H
