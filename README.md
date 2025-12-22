# proc-jni

목차
- [Visual Studio Code 다운로드 - Mac, Linux, Windows](#visual-studio-code-다운로드---mac-linux-windows)

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
