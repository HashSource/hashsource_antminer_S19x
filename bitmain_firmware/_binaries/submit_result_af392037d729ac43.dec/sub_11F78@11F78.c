int __fastcall sub_11F78(_DWORD *a1, int a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_138B8(v7);
  if ( v4 )
    return 0;
  if ( !sub_11EA4(a1, (int (__fastcall *)(const char *, int, int))sub_119D4, (int)v7, a2) )
  {
    v6 = sub_138FC(v7);
    v4 = sub_1387C(v6);
  }
  sub_138D8(v7);
  return v4;
}
