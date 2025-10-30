void *__fastcall sub_A8708(_DWORD **a1, void *s2)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r6
  void *result; // r0

  v3 = *a1;
  v5 = 0;
  if ( !*a1 )
    goto LABEL_11;
  while ( 1 )
  {
    result = (void *)memcmp(v3, s2, 8u);
    if ( (int)result > 0 )
      break;
    if ( !result )
      return result;
    v5 = v3;
    if ( !v3[3] )
    {
      result = s2;
      *((_DWORD *)s2 + 3) = 0;
      v3[3] = s2;
      return result;
    }
    v3 = (_DWORD *)v3[3];
  }
  *((_DWORD *)s2 + 3) = v3;
  if ( v5 )
  {
    v5[3] = s2;
    return s2;
  }
  else
  {
LABEL_11:
    *a1 = s2;
    return s2;
  }
}
