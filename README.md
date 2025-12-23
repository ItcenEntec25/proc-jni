# proc-jni

목차
- [Visual Studio Code 다운로드 - Mac, Linux, Windows](#visual-studio-code-다운로드---mac-linux-windows)
- [mingw-w64 설치](#mingw-w64-설치)
- [오라클 인스턴트 클라이언트 설치](#오라클-인스턴트-클라이언트-설치)
- [Eclipse IDE for C/C++ Developers 설치](#eclipse-ide-for-cc-developers-설치)

## Visual Studio Code 다운로드 - Mac, Linux, Windows

Download Visual Studio Code - Mac, Linux, Windows

https://code.visualstudio.com/Download

.zip x64

VSCode-win32-x64-1.107.1.zip

반디집으로 압축 풀기

C:\eGovFrameDev-5.0.0-Windows-64bit\VSCode-win32-x64-1.107.1

```
C:\eGovFrameDev-5.0.0-Windows-64bit\VSCode-win32-x64-1.107.1
```

Code.exe 실행

1️⃣ --user-data-dir (사용자 데이터 디렉토리)
🔹 개념

VS Code의 **“사용자 프로필 전체”**를 담는 디렉토리입니다.

📌 설정 + 상태 + 캐시 + 사용자 정보

즉,
👉 VS Code가 나라고 인식하는 모든 정보

🔹 기본 위치
Windows
```
C:\Users\<USER>\AppData\Roaming\Code
```
C:\Users\leebh\AppData\Roaming\Code

2️⃣ --extensions-dir (확장 디렉토리)
🔹 개념

VS Code에서 설치한 Extension(확장) 파일들이 저장되는 위치

🔹 기본 위치
Windows
```
C:\Users\<USER>\.vscode\extensions
```
C:\Users\leebh\.vscode\extensions


C:\eGovFrameDev-5.0.0-Windows-64bit\Code.exe - 바로 가기

```
C:\eGovFrameDev-5.0.0-Windows-64bit\VSCode-win32-x64-1.107.1\Code.exe --user-data-dir C:\eGovFrameDev-5.0.0-Windows-64bit\Code --extensions-dir C:\eGovFrameDev-5.0.0-Windows-64bit\.vscode\extensions
```

## mingw-w64 설치

https://www.mingw-w64.org/downloads/#winlibscom

winlibs.com

https://winlibs.com/

UCRT runtime
- GCC 15.2.0 (with POSIX threads) + MinGW-w64 13.0.0 (UCRT) - release 4
  - Win64 (without LLVM/Clang/LLD/LLDB): [7-Zip archive](https://github.com/brechtsanders/winlibs_mingw/releases/download/15.2.0posix-13.0.0-ucrt-r4/winlibs-x86_64-posix-seh-gcc-15.2.0-mingw-w64ucrt-13.0.0-r4.7z)*

winlibs-x86_64-posix-seh-gcc-15.2.0-mingw-w64ucrt-13.0.0-r4.7z

반디집으로 압축 풀기

C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\mingw64

<hr>

시스템 환경 변수 편집

환경 변수 편집

새로 만들기

```
C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\mingw64\bin
```

<hr>

텍스트 편집

사용자 변수 편집

변수 이름:
```
Path
```

변수 값:
```
%USERPROFILE%\AppData\Local\Microsoft\WindowsApps;C:\Users\leebh\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\leebh\AppData\Roaming\npm;C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\mingw64\bin;
```

## 오라클 인스턴트 클라이언트 설치

https://www.oracle.com/kr/database/technologies/instant-client/downloads.html

[Instant Client for Microsoft Windows (x64)](https://www.oracle.com/kr/database/technologies/instant-client/winx64-64-downloads.html)

Version 19.29.0.0.0

Basic Package
- https://download.oracle.com/otn_software/nt/instantclient/1929000/instantclient-basic-windows.x64-19.29.0.0.0dbru.zip
- instantclient-basic-windows.x64-19.29.0.0.0dbru.zip

SDK Package
- https://download.oracle.com/otn_software/nt/instantclient/1929000/instantclient-sdk-windows.x64-19.29.0.0.0dbru.zip
- instantclient-sdk-windows.x64-19.29.0.0.0dbru.zip

Precompiler Package
- https://www.oracle.com/database/technologies/instant-client/precompiler-downloads.html
- Version 19c
- For Microsoft Windows (64-bit)
- instantclient-precomp-windows.x64-19.29.0.0.0dbru.zip

반디집으로 압축 풀기

C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\instantclient_19_29

## Eclipse IDE for C/C++ Developers 설치

https://www.eclipse.org/downloads/packages/

Windows: x86_64

https://www.eclipse.org/downloads/download.php?file=/technology/epp/downloads/release/2025-12/R/eclipse-cpp-2025-12-R-win32-x86_64.zip

eclipse-cpp-2025-12-R-win32-x86_64.zip

반디집으로 압축 풀기

C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64

```
C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\eclipse
```
eclipse.exe 실행

```
C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\eclipse-workspace
```

<hr>

Validation 비활성화

Eclipse Validation 설정

![Eclipse Validation 설정 화면](images/스크린샷%202025-12-23%20090845.png)

Validation
- Suspend all validators
  - 모든 Validator를 일시적으로 비활성화한다.

<hr>

New Classic C Project 생성

![New Classic C Project 화면](images/스크린샷%202025-12-23%20093312.png)

Project Name:
```
swat-proc-jni
```

Project type: Executable → Hello World ANSI C Project

Toolchains: MinGW GCC

<hr>

Eclipse CDT 환경에서 Oracle Pro*C(.pc) 소스 개발을 지원하기 위한 비공식 플러그인 설치

https://github.com/hamneko

https://github.com/hamneko/eclipse-plugin-common/releases/tag/v0.2.1-20250921

plugin.common-0.2.1.202509210737.jar

https://github.com/hamneko/eclipse-plugin-proc/releases/tag/v0.2.1-20250921

plugin.proc-0.2.1.202509211134.jar

https://github.com/hamneko/eclipse-plugin-proc

C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\eclipse\plugins

<hr>

해결되지 않은 포함 항목: <sqlca.h>

Unresolved inclusion: <sqlca.h>

```
C:\eGovFrameDev-5.0.0-Windows-64bit\eclipse-cpp-2025-12-R-win32-x86_64\instantclient_19_29\sdk\include
```

<hr>

'sqlca' 기호를 확인할 수 없습니다.

Symbol 'sqlca' could not be resolved

