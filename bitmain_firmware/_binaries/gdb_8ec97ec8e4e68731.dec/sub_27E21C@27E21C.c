void **__fastcall sub_27E21C(int a1)
{
  void **result; // r0
  void **v3; // r5
  void *v4; // r0
  void *v5; // r0

  result = (void **)sub_183680(a1, (_DWORD *)dword_48AA6C);
  v3 = result;
  if ( result )
  {
    v4 = *result;
    if ( *v3 )
      free(v4);
    v5 = v3[1];
    if ( v5 )
      free(v5);
    free(v3);
    return (void **)sub_183678(a1, (_DWORD *)dword_48AA6C, 0);
  }
  return result;
}
