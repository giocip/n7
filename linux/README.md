# n7 PACKAGES FOR LINUX, cromeOS, DEBIAN AND RED-HAT FEDORA - HOW TO INSTALL

        sudo apt-get install ./n7.deb             #ChromeOS UBUNTU DEBIAN  
        sudo dnf install ./n7-1.0.0-6.x86_64.rpm  #FEDORA

To RED-FAT/FEDORA /root/rpmbuild/SPECS/n7.spec file:
        
        Name:           n7
        Version:        1.0.0
        Release:        7
        Summary:        n7 (Calculator-num7 version 1.0.0) helps you with arithmetic operations
        
        License:        MIT
        URL:            https://github.com/giocip/n7
        Source0:        https://github.com/giocip/n7/n7
        Vendor:         giocip
        
        %description
        n7 (Calculator-num7 version 1.0.0): ls -l /usr/local/bin/n7
        
        %prep
        
        %build
        
        %install
        mkdir -p %{buildroot}/usr/local/bin
        install -m 0755 %{SOURCE0} %{buildroot}/usr/local/bin/n7
        
        %files
        /usr/local/bin/n7
        
        %changelog
        * Sun May 11 2025 Giovanni Cipriani <giocip7@gmail.com>
        - n7 v1.0.0 ARBITRARY PRECISION ARITHMETIC-LOGIC COMMAND-LINE DECIMAL CALCULATOR FOR LINUX SHELL

To build_rpm_n7_package.sh file:

        #!/bin/bash
        rpmbuild -ba n7.spec

To BUILD_n7_CALCULATOR_and_DEBIAN_PACKAGE file:
        
        #!/bin/bash
        #n7 bash shell calculator
        git clone https://github.com/giocip/n7
        git clone https://github.com/giocip/LINUX_num7
        echo 'BULDING n7 bash shell calculator and debian package, PLEASE BE PATIENT...'
        cp LINUX_num7/num7.cpp .
        cp LINUX_num7/num7.h .
        cp n7/n7.cpp .
        g++ n7.cpp num7.cpp -static -o N7 #BUILD N7 FILE
        mkdir app && mkdir app/DEBIAN
        chmod 755 app
        chmod 755 app/DEBIAN
        mkdir -p app/usr/bin #DEBIAN SYSTEM BINARY DIRECTORY
        cp -P N7 app/usr/bin
        mv app/usr/bin/N7 app/usr/bin/n7
        cp control app/DEBIAN #copy control file with metadata app in current directory
        dpkg-deb --build app
        mv app.deb n7.deb
        #rm -Rf app
        #rm -Rf LINUX_num7
        #rm -Rf n7
        #rm -Rf *.cpp
        #rm -Rf *.h
        if [ $? -eq 0 ]
        then
          echo -e "\n*** n7 SUCCESS ***"
          exit 0
        else
          echo -e "\n### n7 FAILURE ###" >&2
          exit 1
        fi

To control file:

        Package: n7
        Version: 1.0.0
        Maintainer: https://github.com/giocip/n7
        Architecture: amd64
        Description: C++ ARBITRARY PRECISION ARITHMETIC-LOGIC DECIMAL CALCULATOR FOR LINUX KERNEL 6 - ls -l /usr/bin/n7

To clear file:

        #!/bin/bash
        rm -Rf app
        rm -Rf LINUX_num7
        rm -Rf n7
        rm -Rf N7
        rm -Rf *.cpp
        rm -Rf *.h
