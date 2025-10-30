int __fastcall sub_75BB8(_DWORD *a1, int *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3

  memset(a1, 0, 0x18u);
  *a1 = 10;
  result = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  a1[1] = *a2;
  a1[2] = v5;
  a1[3] = v6;
  a1[4] = v7;
  return result;
}
