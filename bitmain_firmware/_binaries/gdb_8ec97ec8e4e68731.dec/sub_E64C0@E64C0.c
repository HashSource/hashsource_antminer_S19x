_DWORD *__fastcall sub_E64C0(_DWORD *result, _DWORD **a2)
{
  _DWORD *v2; // r5
  int v4; // r4
  _DWORD *v5; // r0

  v2 = result;
  if ( result )
  {
    result = (_DWORD *)*result;
    if ( *v2 )
    {
      if ( (int)result[1] > 0 )
      {
        v4 = 0;
        do
        {
          v5 = (_DWORD *)result[v4 + 2];
          ++v4;
          sub_E5AA8(v5, a2);
          result = (_DWORD *)*v2;
        }
        while ( *(_DWORD *)(*v2 + 4) > v4 );
      }
      result = (_DWORD *)sub_E64C0();
      *(_DWORD *)*v2 = dword_478930;
      dword_478930 = *v2;
    }
  }
  return result;
}
