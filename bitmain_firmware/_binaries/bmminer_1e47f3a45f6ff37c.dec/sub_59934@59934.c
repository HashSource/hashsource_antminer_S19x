_DWORD *__fastcall sub_59934(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // [sp+Ch] [bp-8h]

  v2 = (_DWORD *)a2[1];
  a2[1] = *v2;
  if ( (_DWORD *)*v2 != result + 1 )
    *(_DWORD *)(*v2 + 8) = a2;
  if ( result + 1 != v2 )
    v2[2] = a2[2];
  if ( a2[2] )
  {
    if ( *(_DWORD **)a2[2] == a2 )
      *(_DWORD *)a2[2] = v2;
    else
      *(_DWORD *)(a2[2] + 4) = v2;
  }
  else
  {
    *result = v2;
  }
  *v2 = a2;
  if ( result + 1 != a2 )
    a2[2] = v2;
  return result;
}
