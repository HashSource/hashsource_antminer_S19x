_DWORD *__fastcall sub_C2084(_DWORD *result, _DWORD *a2)
{
  int v2; // r5
  _DWORD *v3; // r6
  int v5; // r0

  v2 = result[3];
  v3 = result;
  a2[1] = -1;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 12) )
    {
LABEL_3:
      *a2 = v3;
      a2[2] = 2;
      return result;
    }
    v5 = v2;
    v2 = 1;
    result = (_DWORD *)((int (__fastcall *)(int))loc_C2008)(v5);
  }
  else
  {
    result = (_DWORD *)((int (*)(void))loc_C2008)();
  }
  while ( result[14] )
    result = (_DWORD *)result[14];
  if ( !result[13] )
    goto LABEL_3;
  *a2 = result;
  a2[2] = v2;
  return result;
}
