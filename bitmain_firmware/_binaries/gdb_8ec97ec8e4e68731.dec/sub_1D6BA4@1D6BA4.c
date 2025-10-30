void __fastcall sub_1D6BA4(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r0

  if ( dword_487D4C )
  {
    v4 = (_DWORD *)sub_242FC8(a1);
    a1 = sub_2594B0(*v4, "[record-btrace] stop recording\n");
  }
  sub_1D6B4C(a1, a2, a3);
  v3 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( v3[11] != 2 )
      {
        if ( v3[63] )
          sub_E1438(v3);
      }
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
  }
}
