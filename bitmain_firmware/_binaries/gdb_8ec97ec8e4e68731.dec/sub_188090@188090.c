void sub_188090()
{
  _DWORD *v0; // r4
  int v1; // r6
  int v2; // r3
  int v3; // r0

  v0 = (_DWORD *)dword_48769C;
  v1 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    if ( *(_DWORD *)(dword_48769C + 68) == 1 )
      goto LABEL_5;
LABEL_3:
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
        if ( !v0[9] || sub_243CA0(v0) )
          goto LABEL_3;
        v3 = sub_22EFF4(0);
        sub_1B9094(v3);
        sub_1541A4((unsigned int)v0);
        v0 = (_DWORD *)*v0;
        if ( !v0 )
          goto LABEL_8;
      }
    }
  }
LABEL_8:
  dword_487668 = v1;
}
