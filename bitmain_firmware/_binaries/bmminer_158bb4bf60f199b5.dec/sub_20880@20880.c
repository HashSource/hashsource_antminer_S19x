void __noreturn sub_20880()
{
  int v0; // r4
  bool v1; // zf

  sub_1758C();
  v0 = 0;
  prctl(15, "temp_mtr", 0, 0, 0);
  while ( 1 )
  {
    pthread_mutex_lock(&stru_A0DB0);
    sub_15E90(1);
    v1 = (v0++ & 3) == 0;
    if ( v1 || !byte_A06B8 )
      sub_1409C();
    sub_13C54(0x190u, 0);
    pthread_mutex_unlock(&stru_A0DB0);
    sub_4A804(1000);
  }
}
