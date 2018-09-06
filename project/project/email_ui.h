#ifndef EMAIL_UI_H
#define EMAIL_UI_H

#include <QStringList>
#include "user.h"
#include "client_socket.h"

enum MailLocation
{
    UNKNOWN,
    INBOX,
    SENT,
    DRAFT,
    TRASH
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
    Mail(User a_user);
    virtual ~Mail();

    //TODO : more args
    void set(MailLocation a_location, Sender a_sender, Receiver a_receiver,
             QString a_subject, QString a_contents);
    //general send
    int send();
    //cc (chao song)
    int send_cc();
    //bcc (mi song)
    int send_bcc();
    //forwarto
    int forward();
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
};

class EmailMgr //Eamil Manager (Client)
{
protected:
    //queue<Mail> toServer;
    //queue<Mail> fromServer;
};

#endif // EMAIL_UI_H
