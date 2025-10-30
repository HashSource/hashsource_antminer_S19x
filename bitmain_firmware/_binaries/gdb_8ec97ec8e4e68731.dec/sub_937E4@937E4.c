_DWORD **__fastcall sub_937E4(_DWORD **result, char *a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  char *v6; // r2

  v3 = *result;
  v6 = (char *)(*result - 1);
  *v3 = *(_DWORD *)v6;
  *result = v3 + 1;
  if ( v6 != a2 )
    result = (_DWORD **)memmove((char *)v3 - (v6 - a2), a2, v6 - a2);
  *(_DWORD *)a2 = *a3;
  return result;
}
