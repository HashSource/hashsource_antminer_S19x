int __fastcall sub_D9D74(_DWORD *a1, int *a2)
{
  int v4; // r3
  int (__fastcall *v5)(_DWORD *, int *); // r3
  int result; // r0

  if ( *a1 )
  {
    if ( *a1 == *a2 )
    {
      if ( !sub_D9B28((int)a2) )
        goto LABEL_4;
LABEL_11:
      sub_D0048(6, 103, 103, (int)"crypto/evp/p_lib.c", 86);
      return 0;
    }
    sub_D0048(6, 103, 101, (int)"crypto/evp/p_lib.c", 81);
    return 0;
  }
  if ( !sub_D9CD4(a1, *a2) )
    return 0;
  if ( sub_D9B28((int)a2) )
    goto LABEL_11;
LABEL_4:
  if ( sub_D9B28((int)a1) )
  {
    v4 = a2[3];
    if ( v4 )
    {
      v5 = *(int (__fastcall **)(_DWORD *, int *))(v4 + 72);
      if ( v5 )
        return v5(a1, a2);
    }
    return 0;
  }
  result = sub_D9B38(a1, a2);
  if ( result != 1 )
  {
    sub_D0048(6, 103, 153, (int)"crypto/evp/p_lib.c", 93);
    return 0;
  }
  return result;
}
