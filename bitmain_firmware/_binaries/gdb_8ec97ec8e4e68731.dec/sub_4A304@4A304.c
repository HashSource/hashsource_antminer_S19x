int __fastcall sub_4A304(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r6
  _DWORD v6[4]; // [sp+4h] [bp-10h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  ps_getpid_0(v6);
  result = sub_45730();
  v4 = (_DWORD *)dword_4726BC;
  if ( dword_4726BC )
  {
    v5 = 0;
    while ( 1 )
    {
      result = sub_98F78(v4 + 1, v6);
      if ( result )
        break;
      v5 = v4;
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        return result;
    }
    if ( v5 )
      *v5 = *v4;
    else
      dword_4726BC = *v4;
    sub_4A274(v4);
    result = dword_4726BC;
    if ( dword_4726BC && !*(_DWORD *)dword_4726BC )
    {
      result = sub_98F78(dword_4726BC + 4, &dword_4878EC);
      if ( result )
        return sub_4A304(dword_4878EC, dword_4878F0, dword_4878F4);
    }
  }
  return result;
}
