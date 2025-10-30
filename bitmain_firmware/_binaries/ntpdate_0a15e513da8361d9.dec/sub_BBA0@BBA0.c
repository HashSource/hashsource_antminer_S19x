unsigned int __fastcall sub_BBA0(_BYTE *a1, int a2)
{
  unsigned int result; // r0
  char v4; // r2
  char v5; // r3
  int v6; // [sp+0h] [bp-14h] BYREF
  char v7; // [sp+4h] [bp-10h]
  int v8; // [sp+8h] [bp-Ch]

  result = sub_B264(&v6, a2);
  v4 = v7;
  v5 = v8;
  a1[6] = v6;
  a1[7] = v4;
  a1[8] = v5;
  return result;
}
