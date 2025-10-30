int __fastcall sub_9AA4C(const char *a1, int a2, const char **a3)
{
  int v4; // r2
  const char *v7; // r1

  v4 = *(unsigned __int8 *)(a2 + 4);
  v7 = *(const char **)(a2 + 8);
  if ( !v4 )
  {
    if ( !strcmp(a1, v7) )
      goto LABEL_3;
    return 0;
  }
  if ( strncmp(a1, v7, *(_DWORD *)(a2 + 12)) )
    return 0;
LABEL_3:
  if ( a3 )
  {
    *a3 = a1;
    a3[7] = a1;
  }
  return 1;
}
