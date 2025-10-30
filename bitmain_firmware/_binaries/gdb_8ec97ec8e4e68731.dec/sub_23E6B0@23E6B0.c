int __fastcall sub_23E6B0(int a1)
{
  int v1; // r4
  int v2; // r5

  v1 = dword_48A4D4;
  if ( dword_48A4D4 )
  {
    v2 = 0;
    while ( 1 )
    {
      if ( a1 != -1 && a1 != ps_getpid_0(v1 + 8) )
        goto LABEL_5;
      if ( v2 )
      {
        if ( *(_DWORD *)(v1 + 20) < *(_DWORD *)(v2 + 20) )
          v2 = v1;
        v1 = *(_DWORD *)(v1 + 4);
        if ( !v1 )
          return v2;
      }
      else
      {
        v2 = v1;
LABEL_5:
        v1 = *(_DWORD *)(v1 + 4);
        if ( !v1 )
          return v2;
      }
    }
  }
  return 0;
}
