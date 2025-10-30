_DWORD *__fastcall sub_83148(int a1, char *s2, int a3)
{
  _DWORD *v3; // r6
  _DWORD *v4; // r4
  _DWORD **v5; // r5
  _DWORD *v8; // r6
  _DWORD *v9; // t1
  _BOOL4 v10; // r0

  if ( !a1 || (unsigned __int16)*(_DWORD *)(a1 + 16) >> 12 != 6 )
  {
    v4 = 0;
    *_errno_location() = 22;
    return v4;
  }
  v3 = *(_DWORD **)(a1 + 28);
  if ( !v3 )
    goto LABEL_12;
  v5 = (_DWORD **)(v3 + 2);
  v4 = (_DWORD *)*v3;
  if ( !*v3 )
  {
    *_errno_location() = 2;
    return v4;
  }
  if ( s2 )
  {
    while ( 1 )
    {
      v4 = (_DWORD *)((char *)v4 - 1);
      if ( (int)v4 < 0 )
        break;
      v9 = *v5++;
      v8 = v9;
      v10 = sub_83074(v9, s2) != 0;
      if ( a3 )
        v10 = 0;
      if ( v10 )
      {
        v4 = v8;
        if ( v8 )
          return v4;
        break;
      }
    }
LABEL_12:
    v4 = 0;
    *_errno_location() = 2;
    return v4;
  }
  return (_DWORD *)v3[2];
}
