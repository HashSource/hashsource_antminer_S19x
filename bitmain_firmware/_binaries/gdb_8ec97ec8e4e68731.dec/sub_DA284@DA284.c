void __fastcall sub_DA284(int a1, int a2, int a3)
{
  _DWORD *v3; // r4

  v3 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      if ( (unsigned int)(v3[3] - 6) <= 3 && v3[4] == 1 )
      {
        v3[4] = 2;
        sub_D72EC(0, a2, a3);
      }
      v3 = (_DWORD *)v3[2];
    }
    while ( v3 );
  }
}
