void __fastcall sub_DA2DC(int a1, int a2, int a3)
{
  _DWORD *v3; // r4

  v3 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      if ( (unsigned int)(v3[3] - 6) <= 3 && v3[4] == 2 )
      {
        v3[4] = 1;
        sub_D72EC(1, a2, a3);
      }
      v3 = (_DWORD *)v3[2];
    }
    while ( v3 );
  }
}
