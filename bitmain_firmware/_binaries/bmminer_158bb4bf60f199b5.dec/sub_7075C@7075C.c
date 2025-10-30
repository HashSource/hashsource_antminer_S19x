int __fastcall sub_7075C(char a1)
{
  int v1; // r4
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = a1 & 0x3F;
  pthread_mutex_lock(&stru_1B144C);
  usleep(0xC350u);
  sub_6688C(27, &v3);
  sub_6F610(v3 & 0xFFFFFFC0 | v1);
  return pthread_mutex_unlock(&stru_1B144C);
}
