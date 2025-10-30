char *__fastcall sub_344014(char *a1, void *a2, int *a3, _DWORD *a4)
{
  _BOOL4 v4; // r4
  char *v5; // r4
  int v10; // r8
  size_t v11; // r0
  char *v12; // r0
  char *s[2]; // [sp+0h] [bp-10h] BYREF
  int v14; // [sp+8h] [bp-8h]
  int v15; // [sp+Ch] [bp-4h]

  if ( !a1 )
    goto LABEL_5;
  v4 = a3 == 0;
  if ( !a2 )
    v4 = 0;
  if ( v4 )
  {
LABEL_5:
    if ( a4 )
    {
      v5 = 0;
      *a4 = -3;
      return v5;
    }
    return 0;
  }
  s[0] = 0;
  s[1] = 0;
  v14 = 0;
  v15 = 0;
  if ( !sub_343D08(a1, (void (__fastcall *)(_BYTE *))sub_33DDE0, (int)s) )
  {
    free(s[0]);
    if ( a4 )
    {
LABEL_25:
      v5 = 0;
      *a4 = -2;
      return v5;
    }
    return 0;
  }
  v5 = s[0];
  if ( !v15 )
  {
    v10 = v14;
    if ( s[0] )
      goto LABEL_11;
    if ( a4 )
    {
      if ( v14 != 1 )
        goto LABEL_25;
LABEL_20:
      v5 = 0;
      *a4 = -1;
      return v5;
    }
    return 0;
  }
  v10 = 1;
  if ( !s[0] )
  {
    if ( a4 )
      goto LABEL_20;
    return 0;
  }
LABEL_11:
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_14;
    goto LABEL_22;
  }
  v11 = strlen(s[0]);
  if ( v11 >= *a3 )
  {
    free(a2);
LABEL_22:
    *a3 = v10;
    goto LABEL_14;
  }
  memcpy(a2, s[0], v11 + 1);
  v12 = v5;
  v5 = (char *)a2;
  free(v12);
LABEL_14:
  if ( !a4 )
    return v5;
  *a4 = 0;
  return v5;
}
