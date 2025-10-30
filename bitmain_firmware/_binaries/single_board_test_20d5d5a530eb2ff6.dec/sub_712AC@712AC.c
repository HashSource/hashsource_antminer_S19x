int __fastcall sub_712AC(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  sub_6E060(4, &v6);
  sub_6E060(5, &v7);
  sub_6E060(4, &v8);
  sub_6E060(5, &v9);
  result = v6;
  v3 = v7;
  v4 = v8;
  v5 = v9;
  *a1 = v6;
  a1[1] = v3;
  a1[2] = v4;
  a1[3] = v5;
  return result;
}
