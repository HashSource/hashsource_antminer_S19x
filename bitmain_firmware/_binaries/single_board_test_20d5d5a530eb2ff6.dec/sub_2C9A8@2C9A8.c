int __fastcall sub_2C9A8(const char *a1, void *a2, char *a3, int *a4)
{
  bool v4; // zf
  bool v5; // zf
  const char *v10; // r4
  char *v11; // r7
  const char *v12; // r0
  size_t v13; // r8
  size_t v14; // r8
  int result; // r0
  int v16; // r4
  size_t v17; // r0
  size_t v18; // r0

  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  if ( v4 )
    return -1;
  v5 = a4 == 0;
  if ( a4 )
    v5 = a3 == 0;
  if ( v5 )
    return -1;
  if ( strncmp(a1, "http://", 7u) )
  {
    if ( !strncmp(a1, "https://", 8u) )
    {
      v10 = a1 + 8;
      v11 = strchr(v10, 47);
      v12 = v10;
      if ( v11 )
        goto LABEL_10;
      goto LABEL_16;
    }
    return -1;
  }
  v10 = a1 + 7;
  v11 = strchr(v10, 47);
  v12 = v10;
  if ( v11 )
  {
LABEL_10:
    v13 = strlen(v12);
    v14 = v13 - strlen(v11);
    memcpy(a2, v10, v14);
    *((_BYTE *)a2 + v14) = 0;
    if ( v11[1] )
    {
      v18 = strlen(v11);
      memcpy(a3, v11 + 1, v18 - 1);
      a3[strlen(v11) - 1] = 0;
    }
    result = (int)strchr((const char *)a2, 58);
    if ( result )
      goto LABEL_13;
    goto LABEL_17;
  }
LABEL_16:
  v17 = strlen(v12);
  memcpy(a2, v10, v17);
  *((_BYTE *)a2 + strlen(v10)) = (_BYTE)v11;
  result = (int)strchr((const char *)a2, 58);
  if ( result )
  {
LABEL_13:
    v16 = 0;
    *(_BYTE *)result = 0;
    *a4 = strtol((const char *)(result + 1), 0, 10);
    return v16;
  }
LABEL_17:
  *a4 = 80;
  return result;
}
