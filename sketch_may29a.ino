//핀번호
int rows[] = { A0, 12, A2, 13, 5, A3, 7, 2 };
int cols[] = { 9, 8, 4, A1, 3, 10, 11, 6 };

// 전화 모양 패턴
byte patternPhone[8][8] = {
  { 0,0,0,1,1,1,1,0 },
  { 0,0,1,0,0,0,1,0 },
  { 0,0,1,0,1,1,1,0},
  { 0,0,1,0,1,0,0,0 },
  { 0,0,1,0,1,0,0,0 },
  { 0,0,1,0,1,1,1,0 },
  { 0,0,1,0,0,0,1,0 },
  { 0,0,0,1,1,1,1,0 },
};

// LED 초기화 함수
void clear() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(rows[i], LOW);
    digitalWrite(cols[i], HIGH);
  }
}

void setup() {
  //초기화
  for (int i = 0; i < 8; i++) {
    pinMode(rows[i], OUTPUT);
    pinMode(cols[i], OUTPUT);
  }
}

void loop() {
  // 배열값 패턴 출력
  for (int x = 0; x < 8; x++) {
    clear();                      //LED 초기화
    digitalWrite(rows[x], HIGH);  // 하나의 행을 셋업 시킴

    for (int y = 0; y < 8; y++) {
      if (patternPhone[x][y] == 1)
        digitalWrite(cols[y], LOW);  // 배열 값이 1인 경우 해당 위치의 LED를 킴
    }
    delay(2);
  }
}
