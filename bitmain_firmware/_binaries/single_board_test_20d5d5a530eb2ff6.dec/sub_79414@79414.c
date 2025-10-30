int __fastcall sub_79414(_DWORD *a1, int a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_7AD54(v7);
  if ( v4 )
    return 0;
  if ( !sub_79340(a1, (int (__fastcall *)(const char *, int, int))sub_78E70, (int)v7, a2) )
  {
    v6 = sub_7AD98(v7);
    v4 = sub_7AD18(v6);
  }
  sub_7AD74(v7);
  return v4;
}
