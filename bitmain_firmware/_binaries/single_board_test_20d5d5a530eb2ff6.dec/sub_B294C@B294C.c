_DWORD *__fastcall sub_B294C(_DWORD *result, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r3

  if ( result )
    *result = *a4;
  if ( a2 )
  {
    v4 = a4[1];
    if ( v4 )
    {
      result = *(_DWORD **)v4;
      *a2 = *(_DWORD *)v4;
      if ( a3 )
        *a3 = *(_DWORD *)(v4 + 4);
    }
    else
    {
      *a2 = -1;
    }
  }
  return result;
}
