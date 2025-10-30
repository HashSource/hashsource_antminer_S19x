int sub_183CF0()
{
  int v0; // r6
  int v1; // r8
  _DWORD *v2; // r4

  v0 = dword_487918;
  if ( !dword_487918 )
    return 0;
  v1 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v0 + 12) )
      {
        v2 = (_DWORD *)dword_48A4D4;
        if ( dword_48A4D4 )
          break;
      }
LABEL_4:
      v0 = *(_DWORD *)(v0 + 4);
      if ( !v0 )
        return v1;
    }
    while ( v2[11] == 2 || *(_DWORD *)(v0 + 12) != ps_getpid_0((int)(v2 + 2)) || !sub_22EB58(v2[2], v2[3], v2[4]) )
    {
      v2 = (_DWORD *)v2[1];
      if ( !v2 )
        goto LABEL_4;
    }
    v0 = *(_DWORD *)(v0 + 4);
    ++v1;
  }
  while ( v0 );
  return v1;
}
