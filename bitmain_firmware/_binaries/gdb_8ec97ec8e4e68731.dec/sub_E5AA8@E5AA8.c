_DWORD *__fastcall sub_E5AA8(_DWORD *result, _DWORD **a2)
{
  _DWORD *v2; // r4
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r12

  if ( !*result || *(_BYTE *)*result != 35 )
  {
    v2 = result;
    result = *a2;
    if ( !*a2 || (v4 = result[1], v4 == 100) )
    {
      if ( dword_478930 )
      {
        v6 = *a2;
        result = (_DWORD *)dword_478930;
        dword_478930 = *(_DWORD *)dword_478930;
      }
      else
      {
        result = sub_93028(0x198u);
        v6 = *a2;
      }
      *result = v6;
      v5 = 1;
      *a2 = result;
      v4 = 0;
      result[1] = 0;
    }
    else
    {
      v5 = v4 + 1;
    }
    result[1] = v5;
    result[v4 + 2] = v2;
  }
  return result;
}
