int __fastcall sub_5A0E8(int a1, int a2, _DWORD *a3, __int16 a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r7
  int *v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r2
  _DWORD *v11; // t0

  *a3 = a2;
  a3[1] = v4;
  a3[2] = v5;
  a3[3] = v6;
  v7 = a3 + 4;
  v8 = *v7;
  v9 = v7[1];
  v11 = v7 + 2;
  v10 = v7[2];
  *(_WORD *)(v11[2] + 46) = a4;
  return sub_5A0F0(v8, v9, v10);
}
