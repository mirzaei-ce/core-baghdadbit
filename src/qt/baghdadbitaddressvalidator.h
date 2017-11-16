// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BAGHDADBIT_QT_BAGHDADBITADDRESSVALIDATOR_H
#define BAGHDADBIT_QT_BAGHDADBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BaghdadbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BaghdadbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Baghdadbit address widget validator, checks for a valid baghdadbit address.
 */
class BaghdadbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BaghdadbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BAGHDADBIT_QT_BAGHDADBITADDRESSVALIDATOR_H
