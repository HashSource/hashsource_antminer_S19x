_DWORD *__fastcall sub_81C08(int a1, char *s2, int a3)
{
  _DWORD *v3; // r5
  int v4; // r4
  _DWORD **v7; // r5
  _DWORD *v8; // r9
  _DWORD *v9; // t1
  _BOOL4 v10; // r0

  if ( a1 && (unsigned __int16)*(_DWORD *)(a1 + 16) >> 12 == 6 )
  {
    v3 = *(_DWORD **)(a1 + 28);
    if ( v3 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( !s2 )
          return (_DWORD *)v3[2];
        v7 = (_DWORD **)(v3 + 2);
        while ( --v4 >= 0 )
        {
          v9 = *v7++;
          v8 = v9;
          v10 = sub_81B34(v9, s2) != 0;
          if ( a3 )
            v10 = 0;
          if ( v10 )
          {
            if ( v8 )
              return v8;
            break;
          }
        }
      }
    }
    v8 = 0;
    *_errno_location() = 2;
  }
  else
  {
    v8 = 0;
    *_errno_location() = 22;
  }
  return v8;
}
