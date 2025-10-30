int __fastcall sub_5FA5C(_DWORD *a1, int (__fastcall *a2)(const char *, int, int), int a3, int a4)
{
  _BYTE v10[28]; // [sp+18h] [bp-24h] BYREF
  int v11; // [sp+34h] [bp-8h]

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 != 1) && (!a1 || *a1) )
    return -1;
  if ( sub_610B4(v10) )
    return -1;
  v11 = sub_5EED4(a1, a4, 0, (int)v10, a2, a3);
  sub_611B8(v10);
  return v11;
}
