void __fastcall sub_1CD394(int a1)
{
  int v1; // r0
  _DWORD *v2; // r0
  int i; // r4
  _DWORD *v4; // r4
  int v5; // r0
  _DWORD *v6; // r5
  _DWORD *v7; // r3

  v1 = sub_16F654(a1);
  v2 = (_DWORD *)((int (__fastcall *)(int))loc_16D974)(v1);
  dword_487D38 = 0;
  if ( v2 )
  {
    v6 = sub_1CD1A8();
    sub_1CCC04(*(char **)(dword_487D2C + 20));
    v7 = (_DWORD *)dword_487D28;
    if ( dword_487D28 )
    {
      do
      {
        v7[5] = v6;
        v7 = (_DWORD *)*v7;
      }
      while ( v7 );
    }
  }
  else
  {
    for ( i = dword_487D28; i; i = *(_DWORD *)i )
    {
      sub_1CCC04(*(char **)(i + 20));
      v2 = sub_1CD1A8();
      *(_DWORD *)(i + 20) = v2;
    }
  }
  v4 = (_DWORD *)dword_487918;
  if ( dword_487918 )
  {
    do
    {
      v5 = sub_16F654((int)v2);
      v2 = (_DWORD *)((int (__fastcall *)(int))loc_16D884)(v5);
      if ( v2 )
      {
        v2 = sub_1CD1E8((int)v2);
        v4[8] = v2;
      }
      else
      {
        v4[8] = *(_DWORD *)(v4[9] + 20);
      }
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
  }
}
