int *__fastcall sub_E637C(int a1, int a2)
{
  int v4; // r1
  char *v5; // r0
  int v6; // lr
  int *v7; // r3
  int v8; // r12
  int v10; // r1

  v4 = dword_478974;
  v5 = (char *)dword_478978;
  if ( dword_478974 == dword_47897C )
  {
    dword_47897C = 2 * dword_478974;
    v5 = (char *)sub_93050((void *)dword_478978, dword_478974 << 6);
    v4 = dword_478974;
    dword_478978 = (int)v5;
  }
  v6 = dword_4788E8;
  v7 = (int *)&v5[32 * v4];
  v8 = dword_478934;
  dword_478974 = v4 + 1;
  v7[7] = a1;
  *v7 = v6;
  v10 = dword_4788EC;
  v7[5] = a2;
  v7[3] = 0;
  v7[1] = v10;
  v7[2] = v8;
  dword_4788E8 = 0;
  dword_4788EC = 0;
  return v7;
}
