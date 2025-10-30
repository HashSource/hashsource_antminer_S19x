void sub_2176AC()
{
  _DWORD *v0; // r6
  _DWORD *v1; // r4
  int v2; // r3

  v0 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    while ( 1 )
    {
      v1 = (_DWORD *)v0[9];
      if ( v1 )
        break;
LABEL_11:
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        return;
    }
    while ( 1 )
    {
      v2 = v1[33];
      if ( dword_4896F0 )
        break;
      if ( v2 && sub_1B6B24((int)v1, (_DWORD *)dword_4896EC) )
      {
        ((void (__fastcall *)(_DWORD *))loc_217620)(v1);
        v1 = (_DWORD *)*v1;
        if ( !v1 )
          goto LABEL_11;
      }
      else
      {
LABEL_6:
        v1 = (_DWORD *)*v1;
        if ( !v1 )
          goto LABEL_11;
      }
    }
    if ( !v2 || !sub_1B6B24((int)v1, (_DWORD *)dword_4896EC) )
      ((void (__fastcall *)(_DWORD *))loc_2174B8)(v1);
    goto LABEL_6;
  }
}
