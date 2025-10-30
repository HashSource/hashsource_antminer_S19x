int __fastcall sub_405B4(int a1, unsigned int *a2, size_t *a3)
{
  unsigned int v3; // r3
  _DWORD *v7; // r2
  int result; // r0
  const char *v9; // r4

  v3 = *a2;
  if ( *a2 >= dword_7686C )
    return 0;
  while ( 1 )
  {
    v7 = (_DWORD *)(dword_76864 + 28 * v3);
    if ( v7[1] != 8 )
      break;
LABEL_6:
    *a2 = ++v3;
    if ( v3 >= dword_7686C )
      return 0;
  }
  if ( a1 )
  {
    result = sub_4056C(a1, a3);
    a1 = result;
    if ( result )
      return result;
    v3 = *a2;
    goto LABEL_6;
  }
  v9 = (const char *)(*v7 + 1);
  *a3 = strcspn(v9, "|= ");
  return (int)v9;
}
