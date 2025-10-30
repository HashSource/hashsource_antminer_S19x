char *__fastcall sub_324C4C(char **a1, unsigned int a2)
{
  unsigned int v3; // r4
  unsigned int v4; // r3
  char *v5; // r0
  char *v6; // r2
  char *v7; // r12
  char *result; // r0
  char *v9; // r0
  char *v10; // r3
  char *v11; // r2
  char *v12; // r0
  char *v13; // r1
  char *v14; // r2

  if ( !a2 )
  {
    v4 = (unsigned int)a1[1];
    if ( v4 > 7 )
      goto LABEL_7;
    v9 = (char *)malloc(0xFE0u);
    v10 = v9;
    if ( v9 )
    {
      v11 = a1[2];
      result = v9 + 8;
      v3 = 8;
      *((_DWORD *)v10 + 1) = 0;
      a1[2] = v10;
      *(_DWORD *)v10 = v11;
LABEL_12:
      *a1 = &result[v3];
      a1[1] = (char *)(4056 - v3);
      return result;
    }
    return 0;
  }
  v3 = (a2 + 7) & 0xFFFFFFF8;
  if ( v3 + 8 < a2 )
    return 0;
  v4 = (unsigned int)a1[1];
  if ( v4 >= v3 )
  {
LABEL_8:
    result = *a1;
    a1[1] = (char *)(v4 - v3);
    *a1 = &result[v3];
    return result;
  }
  if ( v3 < 0x200 )
  {
    v5 = (char *)malloc(0xFE0u);
    v6 = v5;
    if ( v5 )
    {
      v7 = a1[2];
      result = v5 + 8;
      v4 = 4056;
      a1[2] = v6;
      *(_DWORD *)v6 = v7;
      *((_DWORD *)v6 + 1) = 0;
      *a1 = v6 + 8;
      a1[1] = (char *)4056;
      if ( !v3 )
      {
LABEL_7:
        v3 = 8;
        goto LABEL_8;
      }
      goto LABEL_12;
    }
    return 0;
  }
  v12 = (char *)malloc(v3 + 8);
  if ( !v12 )
    return 0;
  v13 = a1[2];
  v14 = *a1;
  a1[2] = v12;
  *(_DWORD *)v12 = v13;
  *((_DWORD *)v12 + 1) = v14;
  return v12 + 8;
}
