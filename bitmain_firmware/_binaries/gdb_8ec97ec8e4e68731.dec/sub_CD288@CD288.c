int __fastcall sub_CD288(int a1)
{
  int v1; // r0
  int v2; // r4
  _DWORD *v4; // r3

  v1 = sub_16F654(a1);
  v2 = ((int (__fastcall *)(int))loc_16D8FC)(v1);
  if ( !v2 )
  {
    if ( !sub_22EBBC(0) )
      return v2;
    if ( !dword_478850 && !sub_23F41C() )
    {
      v4 = (_DWORD *)dword_48A4D4;
      if ( !dword_48A4D4 )
        return v2;
      while ( v4[11] == 2 || !v4[10] || !v4[42] )
      {
        v4 = (_DWORD *)v4[1];
        if ( !v4 )
          return v2;
      }
    }
  }
  return 1;
}
