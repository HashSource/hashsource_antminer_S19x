void *__fastcall sub_9B30(void *a1, unsigned int a2, unsigned int a3, int a4)
{
  bool v4; // cc
  char v6; // r12
  int v7; // r12

  v4 = a3 > 0xFFFF;
  if ( a3 <= 0xFFFF )
    v4 = a2 > 0xFFFF;
  v6 = v4;
  if ( a2 )
    v7 = v6 & 1;
  else
    v7 = 0;
  if ( v7 && a3 > sub_1C398(-1) )
  {
    sub_ABF8(3, "fatal allocation size overflow");
    exit(1);
  }
  return sub_9A68(a1, a4 + a3 * a2, 0, 1);
}
