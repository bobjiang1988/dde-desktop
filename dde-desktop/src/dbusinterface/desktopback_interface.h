/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p desktopback_interface.h:desktopback_interface.cpp -c DesktopbackInterface /home/ph/Team/QtDBusXmlTool/desktopback.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DESKTOPBACK_INTERFACE_H_1436338023
#define DESKTOPBACK_INTERFACE_H_1436338023

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.dde.daemon.Desktop
 */
class DesktopbackInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.dde.daemon.Desktop"; }

public:
    DesktopbackInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DesktopbackInterface();

    Q_PROPERTY(int ActivateFlagDisplay READ activateFlagDisplay)
    inline int activateFlagDisplay() const
    { return qvariant_cast< int >(property("ActivateFlagDisplay")); }

    Q_PROPERTY(int ActivateFlagRun READ activateFlagRun)
    inline int activateFlagRun() const
    { return qvariant_cast< int >(property("ActivateFlagRun")); }

    Q_PROPERTY(int ActivateFlagRunInTerminal READ activateFlagRunInTerminal)
    inline int activateFlagRunInTerminal() const
    { return qvariant_cast< int >(property("ActivateFlagRunInTerminal")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ActivateFile(const QString &in0, const QStringList &in1, bool in2, int in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("ActivateFile"), argumentList);
    }

    inline QDBusPendingReply<> DestroyMenu()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("DestroyMenu"), argumentList);
    }

    inline QDBusPendingReply<QString> GenMenuContent(const QStringList &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("GenMenuContent"), argumentList);
    }

    inline QDBusPendingReply<> HandleSelectedMenuItem(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("HandleSelectedMenuItem"), argumentList);
    }

    inline QDBusPendingReply<bool> IsAppGroup(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("IsAppGroup"), argumentList);
    }

    inline QDBusPendingReply<> RequestCreatingAppGroup(const QStringList &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("RequestCreatingAppGroup"), argumentList);
    }

    inline QDBusPendingReply<> RequestMergingIntoAppGroup(const QStringList &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("RequestMergingIntoAppGroup"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AppGroupCreated(const QString &in0, const QString &in1);
    void AppGroupDeleted(const QString &in0, const QString &in1);
    void AppGroupMerged(const QString &in0, const QString &in1);
    void AvtivateFileFailed(const QString &in0);
    void ItemCut(const QStringList &in0);
    void ReqeustAutoArrange();
    void RequestCleanup();
    void RequestCreateDirectory();
    void RequestCreateFile();
    void RequestCreateFileFromTemplate(const QString &in0);
    void RequestDelete(const QStringList &in0);
    void RequestEmptyTrash(const QString &in0);
    void RequestOpen(const QStringList &in0);
    void RequestRename(const QString &in0);
    void RequestSort(const QString &in0);
};

#endif
