# Linux C Programming

### LinuxMasterNET | 리눅스 C 프로그래밍 실습 자료

리눅스 환경에서 C 언어의 기초부터 시스템 프로그래밍까지 학습할 수 있도록 제작한 실습 소스코드 저장소입니다.

본 저장소는 LinuxMasterNET(리눅스마스터넷)에서 운영하며 C언어 문법뿐만 아니라 리눅스 운영체제에서 제공하는 시스템 호출(System Call)과 다양한 프로세스 관리 기능을 직접 실습하는 것을 목표로 합니다.

## 1. 학습 목표

- C 언어의 기본 문법과 프로그램 구조 이해
- 포인터, 배열, 함수 및 메모리 구조 학습
- 리눅스 GCC 컴파일러 사용법 익히기
- 파일 입출력과 시스템 호출 이해
- 프로세스 생성 및 관리 프로그래밍
- 시그널과 프로세스 간 통신(IPC) 구현
- 멀티스레드 및 네트워크 프로그래밍 기초

## 2. 개발 및 실습 환경

| 구분 | 환경 |
|---|---|
| 운영체제 | Rocky Linux 9 |
| 프로그래밍 언어 | C |
| 컴파일러 | GCC |
| 편집기 | vi / vim |
| 웹 개발 환경 | GitHub Codespaces |
| 버전 관리 | Git / GitHub |

일부 예제는 GitHub Codespaces에서도 컴파일하고 실행할 수 있습니다.

단, 관리자 권한이나 커널 기능이 필요한 예제는 Rocky Linux 9 환경에서 실습하는 것을 권장합니다.

## 3. 주요 학습 내용

| Section | 학습 내용 |
|---|---|
| 01 | C 언어 소개 및 개발 환경 구축 |
| 02 | 변수, 자료형, 연산자 |
| 03 | 조건문과 반복문 |
| 04 | 배열과 문자열 |
| 05 | 함수와 포인터 |
| 06 | 구조체와 동적 메모리 |
| 07 | 파일 입출력 |
| 08 | 리눅스 시스템 호출 |
| 09 | 프로세스 생성과 관리 |
| 10 | 시그널 처리 |
| 11 | 프로세스 간 통신(IPC) |
| 12 | 스레드 프로그래밍 |
| 13 | 소켓 프로그래밍 |
| 14 | ncurses 터미널 프로그래밍 |

학습 내용과 예제는 지속적으로 추가할 예정입니다.

## 4. 소스코드 다운로드

Rocky Linux 9 터미널에서 다음 명령어를 실행합니다.

```bash
dnf install -y git gcc

git clone https://github.com/linuxmasternet/linux-c-programming.git

cd linux-c-programming
```

## 5. C 프로그램 컴파일 및 실행

예제 파일: `hello.c`

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Linux C!\n");
    return 0;
}
```

컴파일:

```bash
gcc -Wall -Wextra -o hello hello.c
```

실행:

```bash
./hello
```

실행 결과:

```text
Hello, Linux C!
```

## 6. GitHub Codespaces 활용

별도의 리눅스 서버가 없어도 GitHub Codespaces를 이용하여 웹브라우저에서 C 언어를 실습할 수 있습니다.

1. GitHub 저장소에서 `Code` 클릭
2. `Codespaces` 탭 선택
3. `Create codespace on main` 클릭
4. VS Code 웹 개발 환경 실행
5. 터미널에서 GCC 컴파일 및 실행

Codespaces는 무료 사용량 제한이 있으며, 일부 시스템 프로그래밍 기능은 컨테이너 권한에 따라 제한될 수 있습니다.

## 7. 강의 안내

**LinuxMasterNET 리눅스 실무 교육**

리눅스 서버 관리, 네트워크, 보안 및 프로그래밍을 실습 중심으로 학습할 수 있는 강의 콘텐츠를 제공합니다.

주요 교육 분야:

- Rocky Linux 서버 운영
- Linux C / Python / Shell 프로그래밍
- iptables 방화벽 구축
- firewalld 및 nftables
- Docker 및 Kubernetes
- 리눅스 네트워크 및 서버 보안


## 8. 라이선스 및 사용 안내

본 저장소의 소스코드는 LinuxMasterNET에서 교육 및 실습 목적으로 제작하였습니다.

소스코드의 이용·수정·재배포 조건은 추후 지정되는 라이선스 및 개별 파일의 안내를 따릅니다.

별도의 라이선스가 없는 경우 공개되어 있다는 사실만으로 자유로운 수정·재배포 권한이 부여되는 것은 아닙니다.

---

**LinuxMasterNET — Learn Linux, Build Skills.**

GitHub: https://github.com/linuxmasternet
