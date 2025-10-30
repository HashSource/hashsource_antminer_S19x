_DWORD *__fastcall sub_16EF7C(_DWORD *result, int *a2)
{
  int v2; // r12
  _DWORD *v3; // r3

  if ( result )
  {
    v2 = *a2;
    while ( 1 )
    {
      v3 = (_DWORD *)*result;
      if ( v2 == *(_DWORD *)(*result + 8) )
        break;
      result = (_DWORD *)result[1];
      if ( !result )
        return result;
    }
LABEL_5:
    if ( a2[1] != v3[3] || a2[5] != v3[5] || a2[6] != v3[6] )
    {
      while ( 1 )
      {
        result = (_DWORD *)result[1];
        if ( !result )
          break;
        v3 = (_DWORD *)*result;
        if ( v2 == *(_DWORD *)(*result + 8) )
          goto LABEL_5;
      }
    }
  }
  return result;
}
