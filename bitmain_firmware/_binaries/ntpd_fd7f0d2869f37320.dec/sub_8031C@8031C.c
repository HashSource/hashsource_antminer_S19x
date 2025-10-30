int __fastcall sub_8031C(const char *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  size_t v8; // r8
  int v9; // r10
  size_t v10; // r11
  _DWORD *v11; // r4
  bool v12; // cc
  int v13; // r10
  const __int32_t **v14; // r0
  size_t v15; // r12
  const char *v16; // r2
  int v17; // lr
  const __int32_t *v18; // r3
  int v19; // r0
  int v20; // t1
  int v21; // t1
  unsigned __int8 *v22; // r2
  const char *v23; // r0
  size_t v24; // r1
  int v25; // lr
  int v26; // t1
  int v27; // t1
  char *v29; // r4
  const char *v30; // r8
  char v31; // r1
  int v32; // t1
  _BYTE dest[32]; // [sp+Ch] [bp-28h] BYREF

  v8 = strlen(a1) - 1;
  if ( v8 <= 0x1E )
  {
    v9 = *a4;
    v10 = 2;
    v11 = (_DWORD *)*a3;
    v12 = v9 <= 0;
    v13 = v9 - 1;
    if ( !v12 )
    {
      do
      {
        if ( v11 != a2 && (v11[4] & 0x280000) == 0 )
        {
          v14 = _ctype_toupper_loc();
          v15 = 0;
          v16 = a1 - 1;
          v17 = v11[13] - 1;
          v18 = *v14;
          while ( 1 )
          {
            v20 = *(unsigned __int8 *)++v17;
            v19 = v20;
            v21 = *(unsigned __int8 *)++v16;
            if ( v18[v19] != v18[v21] )
              break;
            ++v15;
          }
          v22 = (unsigned __int8 *)v11[14];
          if ( v10 < v15 )
            v10 = v15;
          if ( v22 )
          {
            if ( v18[*v22] == v18[*(unsigned __int8 *)a1] )
            {
              v23 = a1;
              v24 = 0;
              do
              {
                v26 = *++v22;
                v25 = v26;
                ++v24;
                v27 = *(unsigned __int8 *)++v23;
              }
              while ( v18[v25] == v18[v27] );
              if ( v10 < v24 )
                v10 = v24;
            }
          }
        }
        --v13;
        v11 += 16;
      }
      while ( v13 != -1 );
    }
    if ( v8 > v10 )
    {
      v29 = &dest[v10];
      v30 = &a1[v10];
      memcpy(dest, a1, v10);
      while ( 1 )
      {
        *v29 = 0;
        printf("        '%s' | \\\n", dest);
        v31 = *v30;
        v32 = *(unsigned __int8 *)++v30;
        *v29 = v31;
        if ( !v32 )
          break;
        ++v29;
      }
      v29[1] = 0;
    }
  }
  return printf("        '%s' )\n", a1);
}
