# QtNetwork.dll TLS 1.2 patch
https://github.com/shinovon/openssl-symbian <br>
https://nnproject.cc/qtls

## Qt 4.7.3
Used software:
- RVCT 2.2 Build 686
- S60 5th Edition SDK v1.0
- PDT 1.7
- Python 2.6.4

Replace openssl includes in SDK or change path in MMP file

Environment vars:
- Set `EPOCROOT`
- Set `PATH`: &lt;EPOCROOT&gt;;&lt;EPOCROOT&gt;\epoc32\tools;&lt;EPOCROOT&gt;\epoc32\gcc\bin;&lt;PDT_1.7&gt;\Raptor\win32\mingw\bin;&lt;python&gt;;%PATH%

Configure command:
```
configure -platform win32-g++ -xplatform symbian-abld -openvg -openssl-linked -no-multimedia -no-webkit -no-phonon -nomake examples -nomake demos -make make
```

Build command:
```
cd src\s60main
make release-armv5
cd ..\corelib
make release-armv5
cd ..\network
make release-armv5
```

## Qt 4.7.4, 4.8.0, 4.8.1
Used software:
- RVCT 4.0 Build 902
- PDK 3.0.4
- PDT 1.7
- Python 2.6.4

Replace openssl includes in SDK or change path in MMP file

Environment vars:
- Set `EPOCROOT`
- Set `PATH`: &lt;EPOCROOT&gt;;&lt;EPOCROOT&gt;\epoc32\tools;&lt;PDT_1.7&gt;\Raptor\win32\mingw\bin;&lt;PDT_1.7&gt;\Raptor\bin;&lt;python&gt;;%PATH%
- Set `RVCT22BIN`, `RVCT22LOC`, `RVCT22LIB` empty


Configure command:
```
configure -platform win32-g++ -xplatform symbian-sbsv2 -openvg -graphicssystem openvg -openssl-linked -no-multimedia -no-webkit -no-phonon -nomake examples -nomake demos -make make
```

Build command:
```
cd src\s60main
make release-armv5-rvct4.0
cd ..\corelib
make release-armv5-rvct4.0
cd ..\network
make release-armv5-rvct4.0
```


Provided as is.
