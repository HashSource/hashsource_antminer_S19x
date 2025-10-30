int __fastcall sub_5BB7C(_DWORD *a1)
{
  int result; // r0
  int v3; // [sp+8h] [bp-Ch] BYREF
  int v4; // [sp+Ch] [bp-8h] BYREF

  sub_52E24(4, &v4);
  result = sub_52E24(5, &v3);
  *a1 = v4;
  a1[1] = v3;
  return result;
}
