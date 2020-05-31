import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
from email.mime.base import MIMEBase
from email import encoders
import os.path

#abre o ficheiro criado com o email do cliente atual

path=os.getcwd()+'\\Files\\TEMP\\email.txt'
path1=os.getcwd()+'\\Files\\TEMP\\recibo.txt'

f=open(path)
#abre o recibo criado
fi=open(path1)

email= 'orders@aeroportugal.com'
password= 'nZ%lQv8!gV2*'
#como no recibo aparece sempre o numero da reserva na primeira linha
#consigo fazer com que o subject vá buscar a primeira linha do recibo
subject= "Recibo da "+fi.readline()

#vai buscar o email do cliente atual
send_to_email=f.readline()

message='Em anexo segue o recibo da sua reserva. Esperemos que tenha uma otima viagem'

#fecha os ficheiros
f.close
fi.close


#codigo que faz a comunicação com o servidor
msg = MIMEMultipart()
msg['From'] = email
msg['To'] = send_to_email
msg['Subject'] = subject
msg = MIMEMultipart()
msg['From'] = email
msg['To'] = send_to_email
msg['Subject'] = subject

msg.attach(MIMEText(message, 'plain'))

# Setup the attachment
filename = os.path.basename("recibo.txt")
attachment = open(path1, "rb")
part = MIMEBase('application', 'octet-stream')
part.set_payload(attachment.read())
encoders.encode_base64(part)
part.add_header('Content-Disposition', "attachment; filename= %s" % filename)

# Attach the attachment to the MIMEMultipart object
msg.attach(part)


#deverá se substituir o ip do server smtp caso exita mudança de provedor de email. Neste caso,o ip é o do server de smtp do gmail.
server = smtplib.SMTP('81.88.48.66')
server.starttls()
server.login(email, password)
text = msg.as_string()
server.sendmail(email, send_to_email, text)
server.quit()

#EOF
