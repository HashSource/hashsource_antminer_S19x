_BYTE *__fastcall sub_1A096C(const void **a1, int a2)
{
  const char *v4; // r4
  bool v7; // zf
  _BYTE *v8; // r6
  size_t v9; // r4
  void *v10; // r0
  char *v11; // r6
  _BYTE *result; // r0

  v4 = (const char *)*a1;
  if ( a2 && !strncmp((const char *)*a1, "...", 3u) )
  {
    v8 = v4;
LABEL_14:
    v4 += 3;
LABEL_12:
    v9 = v4 - v8;
    v10 = sub_93028(v9 + 1);
    v11 = (char *)*a1 + v9;
    result = memcpy(v10, *a1, v9);
    result[v9] = 0;
    *a1 = v11;
    return result;
  }
  if ( *v4 && sub_1A2844() )
  {
    while ( *(unsigned __int8 *)++v4 )
    {
      if ( !sub_1A2844() && !sub_1A2830(*(unsigned __int8 *)v4) )
        break;
    }
    v7 = a2 == 0;
    v8 = *a1;
    if ( v7 || strncmp(v4, "...", 3u) )
      goto LABEL_12;
    goto LABEL_14;
  }
  return 0;
}
