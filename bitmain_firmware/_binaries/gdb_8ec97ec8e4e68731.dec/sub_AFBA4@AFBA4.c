_DWORD *__fastcall sub_AFBA4(_DWORD *result)
{
  _DWORD *v1; // r5
  int i; // r4
  _DWORD *v3; // r4

  v1 = result;
  if ( result )
  {
    result = (_DWORD *)sub_AFB54(result[4]);
    *result = 0;
  }
  else
  {
    v3 = (_DWORD *)dword_487D28;
    if ( dword_487D28 )
    {
      do
      {
        result = (_DWORD *)sub_AFB54((int)v3);
        v3 = (_DWORD *)*v3;
        *result = 0;
      }
      while ( v3 );
    }
  }
  for ( i = dword_487918; i; i = *(_DWORD *)(i + 4) )
  {
    result = (_DWORD *)i;
    if ( !v1 || *(_DWORD *)(i + 36) == v1[4] )
    {
      result = (_DWORD *)sub_AFAEC(i);
      *result = 0;
      result[4] = 0;
    }
  }
  return result;
}
