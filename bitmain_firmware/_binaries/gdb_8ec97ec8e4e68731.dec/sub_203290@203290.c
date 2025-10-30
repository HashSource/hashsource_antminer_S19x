int *__fastcall sub_203290(int *a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r12
  int v7; // lr
  int v8; // r1

  memset(a1 + 2, 0, 0x20u);
  v4 = a2[1];
  v5 = dword_4893F8;
  v6 = a2[4];
  dword_4893F8 = *a2;
  *a1 = v5;
  v7 = dword_4893EC;
  v8 = dword_4893FC;
  dword_4893EC = v4;
  a1[1] = v7;
  dword_4893FC = v6;
  a1[4] = v8;
  dword_489400 = 0;
  dword_489404 = 0;
  return a1;
}
