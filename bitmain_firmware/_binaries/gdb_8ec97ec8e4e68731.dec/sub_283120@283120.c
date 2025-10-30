int __fastcall sub_283120(int a1)
{
  int v1; // r6
  int v2; // r5
  bool v3; // zf
  _BYTE v6[16]; // [sp+0h] [bp-10h] BYREF

  v1 = a1;
  if ( dword_48AB98 )
  {
    v2 = dword_48ABB0;
    v6[1] = 0;
    v6[0] = dword_48ABB0;
  }
  else
  {
    if ( (dword_48AAA0 & 0x80000) != 0 )
    {
      dword_48BAA4 = sub_293AC4(a1);
      off_48BAA0 = sub_282AC0;
      return 0;
    }
    a1 = sub_280F64(v6);
    v2 = a1;
    dword_48ABB0 = a1;
  }
  if ( v2 < 0 )
    return -1;
  v3 = v2 == 3;
  if ( v2 != 3 )
    v3 = v2 == 27;
  if ( v3 )
    return -1;
  sub_2926F8(a1);
  return sub_282A14(v1, v2, (int)v6);
}
