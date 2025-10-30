_DWORD *__fastcall sub_6A0E4(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r12
  _DWORD *v4; // r2
  _DWORD *v5; // r2

  v2 = (_DWORD *)*a2;
  v3 = result + 1;
  v4 = *(_DWORD **)(*a2 + 4);
  *a2 = v4;
  if ( v4 != result + 1 )
    v4[2] = a2;
  v5 = (_DWORD *)a2[2];
  if ( v3 != v2 )
  {
    v2[2] = v5;
    v5 = (_DWORD *)a2[2];
  }
  if ( v5 )
  {
    result = (_DWORD *)v5[1];
    if ( result == a2 )
      v5[1] = v2;
    else
      *v5 = v2;
  }
  else
  {
    *result = v2;
  }
  v2[1] = a2;
  if ( v3 != a2 )
    a2[2] = v2;
  return result;
}
