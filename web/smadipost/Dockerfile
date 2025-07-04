FROM python:3.12-slim

# dependencies
RUN apt-get update -y
RUN apt-get upgrade -y 
RUN apt-get install dnsutils -y
RUN rm -rf /var/lib/apt/lists/*
RUN pip3 install flask
RUN pip3 install pycryptodome

# setup unpriv user
RUN mkdir /ctf
RUN useradd -M -d /ctf ctf

# copy files (flag has random name, and no curl for you!)
# COPY server.py /ctf/server.py
# COPY flag.txt /flag.txt
# RUN mv /flag.txt /flag_$(cat /dev/urandom | tr -dc a-f0-9 | fold -w32 | head -n1)
# RUN rm $(which curl)
COPY . .

# file perms
RUN chown -R root:ctf /ctf 
RUN chmod -R 750 /ctf

# run
USER ctf
CMD ["python3", "server.py"]
EXPOSE 1337