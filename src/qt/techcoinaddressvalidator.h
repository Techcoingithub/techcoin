// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TECHCOIN_QT_TECHCOINADDRESSVALIDATOR_H
#define TECHCOIN_QT_TECHCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TechcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TechcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Techcoin address widget validator, checks for a valid techcoin address.
 */
class TechcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TechcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // TECHCOIN_QT_TECHCOINADDRESSVALIDATOR_H
