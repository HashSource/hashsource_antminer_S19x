void sub_1849C0()
{
  int v0; // r3
  int *v1; // r4
  int v2; // r1

  v0 = dword_487918;
  if ( dword_487918 )
  {
    v1 = &dword_487918;
    do
    {
      while ( 1 )
      {
        v2 = *(_DWORD *)(v0 + 4);
        if ( *(_DWORD *)v0 || !*(_BYTE *)(v0 + 28) || *(_DWORD *)(v0 + 12) )
          break;
        *v1 = v2;
        sub_1848E4((_DWORD *)v0);
        v0 = *v1;
        if ( !*v1 )
          return;
      }
      v1 = (int *)(v0 + 4);
      v0 = *(_DWORD *)(v0 + 4);
    }
    while ( v2 );
  }
}
