unsigned int __fastcall sub_5B7E8(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r7
  _DWORD *v7; // r2
  unsigned int *v8; // r0
  unsigned int v9; // r2
  _DWORD *v10; // t0
  unsigned int *v11; // r4
  unsigned int result; // r0

  *a3 = a2;
  a3[1] = v4;
  a3[2] = v5;
  a3[3] = v6;
  v7 = a3 + 4;
  v8 = (unsigned int *)*v7;
  v10 = v7 + 2;
  v9 = v7[2];
  *(_WORD *)(v10[2] + 46) = a4;
  v11 = v8;
  result = bswap32(a4);
  *v11 = result;
  v11[1] = bswap32(v9);
  return result;
}
