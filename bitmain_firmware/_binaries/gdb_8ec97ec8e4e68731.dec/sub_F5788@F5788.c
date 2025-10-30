_DWORD *__fastcall sub_F5788(_DWORD *a1, const char **a2, char *a3, char *a4)
{
  int v6; // r0
  const char *v7; // r3
  bool v8; // zf
  _DWORD *result; // r0

  v6 = sub_F507C(*a2, a3, a4);
  v8 = v6 == 0;
  if ( v6 )
    *a1 = v6;
  else
    v7 = *a2;
  if ( !v6 )
    *a2 = 0;
  result = a1;
  if ( v8 )
    *a1 = v7;
  return result;
}
