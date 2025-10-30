_DWORD *__fastcall sub_17D7A0(_DWORD *result, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD **v5; // r7

  v5 = *(_DWORD ***)(a5 + 4);
  if ( v5 )
  {
    result = sub_12EF40(*v5, a2, result);
    if ( a3 )
      *a3 = *(_DWORD *)(*(_DWORD *)(a5 + 4) + 4);
    if ( a4 )
      *a4 = *(_DWORD *)(*(_DWORD *)(a5 + 4) + 8);
  }
  else
  {
    if ( result )
      *result = 0;
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
    if ( a4 )
      *a4 = 0;
  }
  return result;
}
