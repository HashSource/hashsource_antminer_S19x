int __fastcall sub_7EE38(const char *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  size_t v8; // r8
  int v9; // r11
  _DWORD *v10; // r10
  size_t v11; // r9
  bool v12; // cc
  int v13; // r11
  const __int32_t **v14; // r0
  size_t v15; // r2
  const __int32_t *v16; // r3
  const char *v17; // r0
  int v18; // r1
  int v19; // lr
  int v20; // t1
  int v21; // t1
  unsigned __int8 *v22; // r1
  int v23; // r2
  const char *v24; // r0
  size_t v25; // r1
  int v26; // lr
  int v27; // t1
  int v28; // t1
  char *v30; // r5
  const char *v31; // r9
  char v32; // r1
  int v33; // t1
  _BYTE dest[32]; // [sp+Ch] [bp-28h] BYREF

  v8 = strlen(a1) - 1;
  if ( v8 <= 0x1E )
  {
    v9 = *a4;
    v10 = (_DWORD *)*a3;
    v11 = 2;
    v12 = v9 <= 0;
    v13 = v9 - 1;
    if ( !v12 )
    {
      do
      {
        if ( a2 != v10 && (v10[4] & 0x280000) == 0 )
        {
          v14 = _ctype_toupper_loc();
          v15 = 0;
          v16 = *v14;
          v17 = a1 - 1;
          v18 = v10[13] - 1;
          while ( 1 )
          {
            v20 = *(unsigned __int8 *)++v18;
            v19 = v20;
            v21 = *(unsigned __int8 *)++v17;
            if ( v16[v19] != v16[v21] )
              break;
            ++v15;
          }
          v22 = (unsigned __int8 *)v10[14];
          if ( v11 < v15 )
            v11 = v15;
          if ( v22 )
          {
            if ( v16[*(unsigned __int8 *)a1] == v16[*v22] )
            {
              v23 = v10[14];
              v24 = a1;
              v25 = 0;
              do
              {
                v27 = *(unsigned __int8 *)++v23;
                v26 = v27;
                ++v25;
                v28 = *(unsigned __int8 *)++v24;
              }
              while ( v16[v26] == v16[v28] );
              if ( v11 < v25 )
                v11 = v25;
            }
          }
        }
        --v13;
        v10 += 16;
      }
      while ( v13 != -1 );
    }
    if ( v8 > v11 )
    {
      memcpy(dest, a1, v11);
      v30 = &dest[v11];
      v31 = &a1[v11];
      while ( 1 )
      {
        *v30 = 0;
        printf("        '%s' | \\\n", dest);
        v32 = *v31;
        v33 = *(unsigned __int8 *)++v31;
        *v30 = v32;
        if ( !v33 )
          break;
        ++v30;
      }
      v30[1] = 0;
    }
  }
  return printf("        '%s' )\n", a1);
}
