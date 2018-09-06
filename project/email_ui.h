#ifndef EMAIL_UI_H
#define EMAIL_UI_H

#include "user.h"
#include <queue>
#include <fstream>

enum MailLocation
{
    Inbox,
    Sent,
    Draft,
    Trash
};

struct Sender
{
    QString username; //sender username
    QString email; //sender email address
};

struct Receiver
{
    QString username; //sender username
    QString email; //sender email address
};

class Mail
{
public:

protected:
    MailLocation location;
    Sender sender;
    Receiver receiver;
    QString date_time_sent; //ex)  2018 Sept 06, 07:11:53
    QStringList cc;
    QStringList bcc;
    QString subject;
    QString contents;
    bool checked; //receiver checked the mail
    QString date_checked; //the date receiver checked the mail
    QStringList attachments; //the file attachments

public:
    //general send
    int send();
    //cc (chao song)
    int cc();
    //bcc (mi song)
    int bcc();
    //forwarto
    int forward();
};

class EmailMgr //Eamil Manager (Client)
{
protected:
    queue<Mail> toServer;
    queue<Mail> fromServer;
};

#endif // EMAIL_UI_H
