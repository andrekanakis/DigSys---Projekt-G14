extern void send_one();
extern void send_zero();
extern void send_ret();

void greenbaby() {
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();

  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  
  send_ret();
}

void bluebaby() {
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();

  send_ret();
}
void redbaby() {
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();
  send_one();

  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  
  send_ret();
}
void nollbaby() {
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();
  send_zero();

  send_ret();
}

void ret() {

  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();

  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();

  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
  send_ret();
}