void sub_188128()
{
  _DWORD *v0; // r4
  int v1; // r6
  int v2; // r3

  v0 = (_DWORD *)dword_48769C;
  v1 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    if ( *(_DWORD *)(dword_48769C + 68) == 1 )
      goto LABEL_5;
    while ( 1 )
    {
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        break;
      while ( 1 )
      {
        v2 = v0[17];
        dword_487668 = (int)v0;
        if ( v2 != 1 )
          break;
LABEL_5:
        sub_154200();
        v0 = (_DWORD *)*v0;
        if ( !v0 )
          goto LABEL_6;
      }
    }
  }
LABEL_6:
  dword_487668 = v1;
}
