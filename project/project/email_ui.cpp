#include "email_ui.h"

Mail::Mail(User a_user)
{
   ;
    location = UNKNOWN;
    sender.username =  a_user.name;
    sender.email = a_user.email;
    memset(&sender, 0, sizeof(receiver)); //SAME
    checked = false;
}

Mail::~Mail()
{
}

void Mail::set(MailLocation a_location, Sender a_sender, Receiver a_receiver,
                             QString a_subject, QString a_contents)
{
    location = a_location;
    sender = a_sender;
    receiver = a_receiver;
    subject = a_subject;
    contents = a_contents;
}

//general send
int Mail::send()
{
    location = SENT;
    ClientSocket client_socket;
    int ret = 0;

    if(!(ret = client_socket.connect()))
        return ret;

    client_socket.send(contents.toUtf8().data(), contents.length());
    client_socket.disconnect();

    return ret;
}

//cc (chao song)
int Mail::send_cc()
{

}

//bcc (mi song)
int Mail::send_bcc()
{

}
//forwarto
int Mail::forward()
{


}
