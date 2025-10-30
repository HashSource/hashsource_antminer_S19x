bool __fastcall sub_B5F0(_DWORD *a1, int a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  _BOOL4 result; // r0
  int v7; // r3
  int v8; // [sp+0h] [bp-14h] BYREF
  int v9; // [sp+4h] [bp-10h] BYREF
  int v10; // [sp+8h] [bp-Ch]

  a1[6] = a2 % 7 + (a2 % 7 < 0 ? 7 : 0);
  sub_B348((unsigned int *)&v9, a2 - 1, (_BOOL4 *)&v8);
  v3 = v10;
  v4 = v8;
  v5 = v9 - 1899;
  a1[7] = v10;
  a1[5] = v5;
  sub_B454(&v9, v3, v4);
  result = v8;
  v7 = v10 + 1;
  a1[4] = v9;
  a1[3] = v7;
  return result;
}
