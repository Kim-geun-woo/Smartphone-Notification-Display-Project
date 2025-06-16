# Arduino + Bluetooth 기반 실시간 스마트폰 알림 시각화 시스템

---

## 📌 프로젝트 개요

소리나 진동을 인지하기 어려운 상황에서도 스마트폰 알림을 놓치지 않도록,
도트 매트릭스 LED를 활용해 전화·문자 등 주요 알림을 시각적으로 표시하는 장치를 개발하였습니다.

- **수행 시점**: 2023년 1학기
- **팀 구성**: 3인 팀 프로젝트  
- **기획 목표**: 알림 발생 시 도트 매트릭스에 픽셀 아이콘 출력 및 사전 정의된 응답 전송 기능 구현

---

## 👤 팀 소개 및 역할

| 이름       | 역할 1                  | 역할 2                    |
|------------|--------------------------|----------------------------|
| 팀원 A     | 일정관리          | 기본적인 시스템 구축 |
| **(본인)** | 자료조사  | **Bluetooth 송수신 구현** |
| 팀원 B     | PPT제작            | 디자인 설계                |

---

## 🛠️ 주요 기능

- 스마트폰 ↔ Bluetooth 모듈(HC-06)을 통해 알림 수신  
- 알림 종류에 따라 도트 매트릭스(8x8)에 픽셀 아이콘 출력  
- 전화, 메시지, 기본 상태 등 3가지 상태 구분 가능  
- 버튼 입력 시 스마트폰에 응답 전송  
- 미입력 시 반복 출력으로 알림 유지

---

## 🧠 사용 기술

- Arduino IDE - 마이크로컨트롤러 프로그래밍 환경
- C/C++ - Arduino 코드 작성 언어
- App Inventor - 블록 기반 Android 앱 개발 플랫폼

---

## 🧾 주요 코드 구성

- `may30.ino` : 문자 아이콘 출력 코드  
- `may29a.ino` : 전화 아이콘 출력 코드  
- `may28c.ino` : Bluetooth 통신 및 버튼 입력 처리

---

## 🔧 하드웨어 구성 요소

- Arduino UNO R3 - 메인 마이크로컨트롤러 보드
- HC-06 Bluetooth 모듈 - 무선 통신 모듈 (SPP 프로필)
- 8x8 도트 매트릭스 LED - 시각적 알림 표시 장치
- 택트 스위치 - 사용자 입력 버튼
- 브레드보드 - 회로 연결 및 프로토타이핑
- 점퍼 와이어 - 부품 간 연결선

---

## 🎬 작동 흐름

1. 스마트폰에서 알림 발생  
2. Bluetooth를 통해 아두이노로 알림 신호 전송  
3. 도트 매트릭스에서 전화/문자/기본 상태 중 하나의 아이콘 출력  
4. 버튼 입력 시 스마트폰에 응답 전송 / 미입력 시 일정 주기로 아이콘 반복 출력 → 알림 지속 표시

---

## 🖼️ 앱 화면 및 시연 영상

###  App Inventor 화면 캡처

  ![App Screen 1](https://github.com/Kim-geun-woo/Smartphone-Notification-Display-Project/raw/main/images/image5.png)

  ![App Screen 2](https://github.com/Kim-geun-woo/Smartphone-Notification-Display-Project/raw/main/images/image6.png)

  ![App Screen 3](https://github.com/Kim-geun-woo/Smartphone-Notification-Display-Project/raw/main/images/image7.png)

> 위 이미지들은 `images/` 폴더에 업로드된 App Inventor 블록 구성입니다.

---

### 🎥 시연 영상

-  [작동 시연 영상 보기 (YouTube)](https://youtu.be/VfttXtVv2RY)

> 스마트폰에서 알림 발생 시 도트 매트릭스가 아이콘으로 반응하는 과정을 담은 실시간 시연 영상입니다.

---

## 🧠 한계 및 개선 방향

현재 한계점

- App Inventor 한계: 전화 수신 시점 정확도 부족 (실제 수신 후 표시)
- 응답 기능 제약: 미리 설정된 응답만 가능, 스마트폰 직접 조작 필요
- 표시 방식 한계: 8x8 해상도로 인한 아이콘 표현의 제약

개선 방향

- 하드웨어: 도트 매트릭스 → LCD/OLED 디스플레이로 업그레이드
- 소프트웨어: Android Studio 기반 네이티브 앱 개발로 기능 확장
- 통신: WiFi 모듈 추가로 인터넷 연동 기능 구현
- 전원: 충전식 배터리 및 저전력 모드 구현

---

## 📎 관련 링크

- 발표자료 PDF: [스마트폰알림표시기_발표자료](https://github.com/Kim-geun-woo/Smartphone-Notification-Display-Project/blob/main/docs/%EA%B0%90%EC%9E%90%EB%8B%A8%20%ED%94%84%EB%A1%9C%EC%A0%9D%ED%8A%B8%20%EB%B0%9C%ED%91%9C%EC%9E%90%EB%A3%8C%202.pdf)

---

## 🚀 향후 계획

- 충전식 배터리 구조 개선 (C타입 단자 활용)  
- 도어락 등 **방범 시스템 연동 기능** 추가  
- 다양한 알림 시나리오에 따른 LED 표현 확장
