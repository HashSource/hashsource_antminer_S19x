int __fastcall sub_53CD0(int result, int a2, struct re_pattern_buffer *a3, const char *a4)
{
  int v4; // r4
  int v5; // r8
  const char *v8; // r5
  size_t v9; // r0
  const char *v10; // r5
  _DWORD *v11; // r3
  size_t v12; // r0

  v4 = a2;
  if ( a2 )
  {
    v5 = result;
    while ( 1 )
    {
      v8 = *(const char **)(v4 + 4);
      if ( !v8 )
        break;
      v9 = strlen(*(const char **)(v4 + 4));
      result = j_re_search(a3, v8, v9, 0, v9, 0);
      if ( result >= 0 )
        goto LABEL_13;
      v10 = *(const char **)(v4 + 28);
      if ( v10 )
        goto LABEL_12;
LABEL_6:
      v11 = *(_DWORD **)(v4 + 52);
      if ( v11 )
      {
        if ( (*(_BYTE *)(v4 + 12) & 0x40) == 0 )
          result = sub_53CD0(v5, *v11, a3, *(_DWORD *)(v4 + 56));
      }
      v4 = *(_DWORD *)v4;
      if ( !v4 )
        return result;
    }
    v10 = *(const char **)(v4 + 28);
    if ( !v10 )
      goto LABEL_6;
LABEL_12:
    v12 = strlen(v10);
    result = j_re_search(a3, v10, v12, 0, v12, 0);
    if ( result >= 0 )
    {
LABEL_13:
      result = sub_53C40(v4, a4, 0, v5);
      goto LABEL_6;
    }
    goto LABEL_6;
  }
  return result;
}
