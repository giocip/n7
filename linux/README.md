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
