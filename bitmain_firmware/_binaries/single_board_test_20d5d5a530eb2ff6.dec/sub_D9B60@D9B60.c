int __fastcall sub_D9B60(_DWORD *a1, _DWORD *a2)
{
  int v2; // r6
  int (*v3)(void); // r3
  int result; // r0
  int (__fastcall *v7)(_DWORD *, _DWORD *); // r3

  if ( *a1 != *a2 )
    return -1;
  v2 = a1[3];
  if ( !v2 )
    return -2;
  v3 = *(int (**)(void))(v2 + 76);
  if ( !v3 )
  {
LABEL_6:
    v7 = *(int (__fastcall **)(_DWORD *, _DWORD *))(v2 + 28);
    if ( v7 )
      return v7(a1, a2);
    return -2;
  }
  result = v3();
  if ( result > 0 )
  {
    v2 = a1[3];
    goto LABEL_6;
  }
  return result;
}
