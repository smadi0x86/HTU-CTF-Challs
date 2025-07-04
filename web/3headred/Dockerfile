FROM php:8.0-apache

WORKDIR /var/www/html

COPY ./php/src /var/www/html/

EXPOSE 80

RUN a2enmod rewrite

CMD ["apache2-foreground"]
