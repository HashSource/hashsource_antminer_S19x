void __fastcall sub_D8FF8(int a1, int a2, int a3)
{
  _DWORD *v3; // r4

  v3 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      if ( v3[3] == 22 )
      {
        v3[4] = 0;
        sub_D72EC(0, a2, a3);
        dword_478354 = 0;
      }
      v3 = (_DWORD *)v3[2];
    }
    while ( v3 );
  }
}
