int __fastcall sub_81B34(_DWORD *a1, char *s2)
{
  int *v2; // r5
  int v3; // r4
  int v4; // r6
  _DWORD *v6; // r5
  int v8; // t1

  if ( !a1 || *a1 != 6 )
  {
    v4 = 0;
    *_errno_location() = 22;
    return v4;
  }
  v2 = (int *)a1[2];
  v3 = *v2;
  if ( *v2 <= 0 )
    goto LABEL_12;
  v4 = v2[2];
  if ( !s2 )
  {
    if ( v4 )
      return v4;
LABEL_12:
    v4 = 0;
    *_errno_location() = 2;
    return v4;
  }
  v6 = v2 + 2;
  while ( strcmp(*(const char **)(v4 + 4), s2) )
  {
    if ( !--v3 )
      goto LABEL_12;
    v8 = v6[1];
    ++v6;
    v4 = v8;
  }
  return v4;
}
