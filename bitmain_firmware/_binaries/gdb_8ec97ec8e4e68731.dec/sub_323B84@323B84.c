_DWORD *__fastcall sub_323B84(_DWORD *result)
{
  _DWORD *v1; // r6
  int v2; // r7
  int v3; // r5
  int v4; // r4
  int v5; // r5
  unsigned int v6; // t1
  void (__fastcall *v7)(int); // r3
  void (__fastcall *v8)(_DWORD, int); // r3

  v1 = result;
  v2 = result[3];
  if ( result[2] )
  {
    v3 = result[4];
    v4 = v3 - 1;
    if ( v3 - 1 >= 0 )
    {
      v5 = v2 + 4 * v3;
      do
      {
        v6 = *(_DWORD *)(v5 - 4);
        v5 -= 4;
        result = (_DWORD *)v6;
        --v4;
        if ( v6 > 1 )
          result = (_DWORD *)((int (*)(void))v1[2])();
      }
      while ( v4 != -1 );
    }
  }
  v7 = (void (__fastcall *)(int))v1[10];
  if ( v7 )
  {
    v7(v2);
    return (_DWORD *)((int (__fastcall *)(_DWORD *))v1[10])(v1);
  }
  else
  {
    v8 = (void (__fastcall *)(_DWORD, int))v1[13];
    if ( v8 )
    {
      v8(v1[11], v2);
      return (_DWORD *)((int (__fastcall *)(_DWORD, _DWORD *))v1[13])(v1[11], v1);
    }
  }
  return result;
}
