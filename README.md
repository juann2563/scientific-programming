# Programación científica
Curso de Programación científica 



# Titulo Del proyecto

En la electrónica de potencia el procesamiento de energía eléctrica se lleva acabo mediante el uso de dispositivos electrónicos. Los elementos claves son los convertidores conmutados. En general un convertidor contienen una entrada de alimentación con puertos de entrada de control y un puerto de salida de potencia. La entrada de potencia es procesada con un control de entrada especifico. En un convertidor DC-DC, el voltaje de entrada DC se convierte en un voltaje de salida DC que puede tener una magnitud de salida mayor o menor dependiendo del tipo de convertidor, posiblemente con polaridad opuesta o con aislamiento en las referencias de tierra de entrada y salida.

## Empezando

Estas instrucciones le permitirán obtener una copia del proyecto en funcionamiento en su máquina local para fines de desarrollo y prueba.

### Prerrequisitos

Qué cosas necesitas para instalar el software y cómo instalarlas

`` `
Simplified Wrapper and Interface Generator (SWIG), Compilador C++, Interprete Python.
`` `
`` `
### Instalación

Una serie de ejemplos paso a paso que indican que debe ejecutar un entorno de desarrollo

Esta página contiene consejos sobre qué instalar para que los ejemplos de SWIG funcionen rápidamente. También contiene información para compilar el archivo ejecutable de SWIG y el tarball de distribución y el archivo zip de distribución de Windows.

Linux - Ubuntu
Instalar aplicaciones es muy fácil en Ubuntu (uno de los sistemas operativos Linux más populares) y lo siguiente debería tenerlo en funcionamiento muy rápidamente. Las instrucciones han funcionado en Hardy Heron, Intrepid Ibex, Lucid Lynx, Maverick Meerkat, Precise Pangolin, Quantal Quetzal, Raring Ringtail, Saucy Salamander, Trusty Tahr, Xenial Xerus y también es probable que sean adecuados para Debian. Ejecute lo siguiente para obtener las herramientas esenciales para compilar el ejecutable SWIG desde el tarball de distribución, por ejemplo, swig-3.0.12.tar.gz:

`` `
sudo apt-get install build-essential libpcre3-dev
`` `
`` `
###

Si desea compilar el ejecutable SWIG de Subversion o Git (es decir, no está utilizando el tarball de distribución) ejecute lo siguiente además de lo anterior:

`` `
sudo apt-get install autoconf automake libtool bison subversion git
`` `
`` `
###
Agregue algunas dependencias adicionales para el conjunto de pruebas:

`` `
sudo apt-get install libboost-dev
`` `
`` `
###
Ejecute lo siguiente que instala los idiomas que SWIG admite mejor:
###
`` `
#Note: Perl is installed by default
###
sudo apt-get install golang-go # For Go language (Ubuntu 12.04 - Precise Pangolin or later)
###
sudo apt-get install guile-2.0-dev
###
sudo apt-get install nodejs node-gyp # Javascript Node (Ubuntu 14.04 - Trusty Tahr or later)
###
sudo apt-get install lua5.3 liblua5.3-dev
###
sudo apt-get install mono-devel # C#
###
sudo apt-get install octave liboctave-dev
###
sudo apt-get install openjdk-9-jdk # Java
###
sudo apt-get install php-cli php-dev
###
sudo apt-get install python-dev
###
sudo apt-get install python3-dev # Python 3
###
sudo apt-get install r-base # R language
sudo apt-get install ruby ruby-dev
sudo apt-get install scilab libxml2-dev # For Scilab (Ubuntu 12.04 - Precise Pangolin or later)
sudo apt-get install tcl8.5-dev
`` `
`` `
###
Todo lo anterior en Ubuntu Xenial Xerus, use:
###

`` `
sudo apt install build-essential libpcre3-dev autoconf automake libtool bison git libboost-dev golang-go guile-2.0-dev nodejs npm lua5.3 liblua5.3-dev mono-devel octave liboctave-dev openjdk-9-jdk-headless php-cli php-dev python-dev python3-dev r-base ruby ruby-dev tcl-dev scilab libxml2-dev
`` `
`` `
###
Para Ubuntu Trusty Tahr, use:
###
`` `
sudo apt-get install build-essential libpcre3-dev autoconf automake libtool bison git libboost-dev python-dev ruby ruby-dev tcl-dev mono-devel lua5.2 liblua5.2-dev octave liboctave-dev php5-cli php5-dev openjdk-7-jdk guile-2.0-dev 
`` `
`` `
###
Para Ubuntu Raring Ringtail and Saucy Salamander, use:
###
`` `
sudo apt-get install build-essential libpcre3-dev autoconf automake libtool bison git libboost-dev python-dev ruby ruby-dev tcl-dev mono-devel lua5.1 liblua5.1-0-dev octave liboctave-dev php5-cli php5-dev openjdk-7-jdk guile-2.0-dev
`` `
`` `
###
Para versiones anteriores de Ubuntu:
###
`` `
sudo apt-get install build-essential libpcre3-dev autoconf automake libtool bison subversion libboost-dev python-dev ruby ruby1.8-dev tcl8.4-dev mono-devel lua5.1 liblua5.1-0-dev octave2.9 octave2.9-headers php5-cli php5-dev openjdk-6-jdk
`` `
`` `
###
Los siguientes idiomas de instalación requieren alguna actualización / trabajo adicional:
###
`` `
sudo apt-get install python-pip && sudo pip install pep8 # For python style checking (Ubuntu 14.04 - Trusty Tahr and later)
sudo apt-get install liballegro4.2-dev
sudo apt-get install chicken-bin
sudo apt-get install clisp-dev
sudo apt-get install gcj # Gnu compiler for Java
sudo apt-get install pike7.8-dev
sudo apt-get install racket # Mzscheme/Racket # (Ubuntu 10.10 - Maverick Meerkat or later)
sudo apt-get install ocaml
sudo apt-get install ldc # For D language (Ubuntu 10.10 - Maverick Meerkat or later)
sudo apt-get install libwebkitgtk-dev # Javascript Webkit (Ubuntu 14.04 - Trusty Tahr or later)
sudo apt-get install libv8-dev # Javascript v8 (Ubuntu 14.04 - Trusty Tahr or later)
`` `
`` `
###
Versiones anteriores:
###
`` `
sudo apt-get install lua5.1 liblua5.1-0-dev (Ubuntu 13.04 - Raring Ringtail and earlier)
sudo apt-get install mzscheme drscheme # Mzscheme (Ubuntu 10.04 - Lucid Lynx and earlier)
sudo apt-get install guile-1.8-dev # (Ubuntu 14.04 - Trusty Tahr and earlier)
sudo apt-get install octave2.9 octave2.9-headers # (Ubuntu 11.04 - Natty Narwhal and earlier)
sudo apt-get install octave3.2 octave3.2-headers # (Ubuntu 12.04 - Precise Pangolin and earlier)
sudo apt-get install php5-cli php5-dev (Ubuntu 14.04 - Trusty Tahr and earlier)
sudo apt-get install ruby1.8 ruby1.8-dev (Ubuntu 12.04 - Precise Pangolin and earlier)
sudo apt-get install tcl8.4-dev # (Ubuntu 12.04 - Precise Pangolin and earlier)
`` `
`` `
###
### Y pruebas de estilo de codificación

http://www.swig.org/Doc1.3/SWIGPlus.html

## Autores

* Jhon Jairo Rojas Montano
* Juan Esteban Zabala
