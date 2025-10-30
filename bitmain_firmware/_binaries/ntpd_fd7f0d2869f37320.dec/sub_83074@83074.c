int __fastcall sub_83074(_DWORD *a1, char *s2)
{
  int *v2; // r3
  int v3; // r4
  int *v5; // r6
  int v6; // r5
  int v8; // t1

  if ( !a1 || *a1 != 6 )
  {
    v6 = 0;
    *_errno_location() = 22;
    return v6;
  }
  v2 = (int *)a1[2];
  v3 = *v2;
  if ( *v2 <= 0 )
    goto LABEL_11;
  v5 = v2 + 2;
  if ( !s2 )
  {
    v6 = v2[2];
    if ( v6 )
      return v6;
LABEL_11:
    v6 = 0;
    *_errno_location() = 2;
    return v6;
  }
  while ( 1 )
  {
    v8 = *v5++;
    v6 = v8;
    if ( !strcmp(*(const char **)(v8 + 4), s2) )
      return v6;
    if ( !--v3 )
      goto LABEL_11;
  }
}
