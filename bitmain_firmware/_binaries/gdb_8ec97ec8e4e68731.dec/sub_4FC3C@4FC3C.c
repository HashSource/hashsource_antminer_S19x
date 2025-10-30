int __fastcall sub_4FC3C(int *a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // r12
  int v6; // lr
  const char *v10; // r0
  const char *v11; // r1
  int result; // r0

  v4 = *a1;
  v6 = *a3;
  v10 = *(const char **)(*(_DWORD *)(*a1 + 4) + 28);
  v11 = *(const char **)(*(_DWORD *)(*a3 + 4) + 28);
  if ( !v10 )
  {
    if ( v11 )
      return -1;
    goto LABEL_6;
  }
  if ( !v11 )
    return 1;
  result = j_strcmp(v10, v11);
  if ( !result )
  {
    v4 = *a1;
    v6 = *a3;
LABEL_6:
    result = j_strcmp(*(const char **)(v4 + 12), *(const char **)(v6 + 12));
    if ( result )
      return result;
    if ( *a2 >= *a4 )
      return *a2 != *a4;
    return -1;
  }
  return result;
}
