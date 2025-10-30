FILE *__fastcall sub_31DDF8(FILE *result, const char ***a2)
{
  int flags; // r1
  FILE *v4; // r11
  int v5; // r10
  int v6; // r5
  int v7; // r4
  int v8; // r7
  char *v9; // r8
  FILE *v10; // r8
  size_t v11; // r9
  size_t v12; // r0
  size_t v13; // r3
  int v14; // r0
  _BYTE *v15; // r2
  int v16; // r3
  int v17; // t1
  int v18; // r9
  const char **v19; // r0
  int v20; // r3
  int v21; // r2
  const char **v22; // r0
  int v23; // r12
  _DWORD *v24; // r2
  int v25; // t1
  _BYTE *ptr; // [sp+4h] [bp-80h]
  void *srca; // [sp+Ch] [bp-78h]
  _DWORD *src; // [sp+Ch] [bp-78h]
  size_t n; // [sp+10h] [bp-74h]
  int v30; // [sp+14h] [bp-70h]
  char v31[16]; // [sp+18h] [bp-6Ch] BYREF
  int v32; // [sp+28h] [bp-5Ch]

  flags = result->_flags;
  v4 = result;
  v5 = 2000;
  v6 = 0;
LABEL_2:
  v7 = v6 + 1;
  if ( v6 + 1 < flags )
  {
    while ( 1 )
    {
      v8 = v7;
      result = (FILE *)(*a2)[v7];
      if ( LOBYTE(result->_flags) != 64 )
      {
LABEL_17:
        v6 = v7;
        goto LABEL_2;
      }
      if ( !--v5 )
      {
        fprintf((FILE *)stderr, "%s: error: too many @-files encountered\n", **a2);
        sub_3271E4(1);
      }
      v9 = (char *)&result->_flags + 1;
      result = (FILE *)_xstat64(3, (char *)&result->_flags + 1, v31);
      if ( (int)result < 0 )
        goto LABEL_16;
      if ( (v32 & 0xF000) == 0x4000 )
      {
        fprintf((FILE *)stderr, "%s: error: @-file refers to a directory\n", **a2);
        sub_3271E4(1);
      }
      result = (FILE *)fopen64(v9, "r");
      v10 = result;
      if ( !result )
      {
LABEL_16:
        flags = v4->_flags;
        goto LABEL_17;
      }
      if ( fseek(result, 0, 2) != -1 )
      {
        v11 = ftell(v10);
        if ( v11 != -1 && fseek(v10, 0, 0) != -1 )
        {
          ptr = sub_93028(v11 + 1);
          v12 = fread(ptr, 1u, v11, v10);
          v13 = v12;
          if ( v11 == v12 )
            break;
          srca = (void *)v12;
          v14 = ferror(v10);
          v13 = (size_t)srca;
          if ( !v14 )
            break;
        }
      }
      v6 = v7;
      result = (FILE *)fclose(v10);
      flags = v4->_flags;
LABEL_14:
      v7 = v6 + 1;
      if ( v6 + 1 >= flags )
        return result;
    }
    ptr[v13] = 0;
    if ( *ptr )
    {
      if ( (word_438898[(unsigned __int8)*ptr] & 0x40) == 0 )
      {
LABEL_25:
        src = sub_31DB08(ptr);
        v18 = *src;
        v19 = (const char **)sub_31DA38((int *)*a2);
        *a2 = v19;
        if ( v18 )
        {
          v24 = src;
          v18 = 0;
          do
          {
            v25 = v24[1];
            ++v24;
            ++v18;
            v20 = 4 * v18;
          }
          while ( v25 );
          v21 = 4 * (v7 + v18);
        }
        else
        {
          v21 = 4 * v7;
          v20 = 0;
        }
        goto LABEL_24;
      }
      v15 = ptr;
      while ( 1 )
      {
        v17 = (unsigned __int8)*++v15;
        v16 = v17;
        if ( !v17 )
          break;
        if ( (word_438898[v16] & 0x40) == 0 )
          goto LABEL_25;
      }
    }
    v18 = 0;
    src = sub_93028(4u);
    *src = 0;
    v19 = (const char **)sub_31DA38((int *)*a2);
    v20 = 0;
    v21 = 4 * v7;
    *a2 = v19;
LABEL_24:
    n = v20;
    v30 = v21;
    v22 = (const char **)sub_93050(v19, 4 * (v4->_flags + 1 + v18));
    v23 = v4->_flags;
    *a2 = v22;
    memmove((char *)v22 + v30, &v22[v8 + 1], 4 * (v23 - v7));
    memcpy(&(*a2)[v8], src, n);
    v4->_flags = v4->_flags - 1 + v18;
    free(src);
    free(ptr);
    result = (FILE *)fclose(v10);
    flags = v4->_flags;
    goto LABEL_14;
  }
  return result;
}
