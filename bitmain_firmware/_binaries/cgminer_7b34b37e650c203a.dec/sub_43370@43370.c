char *__fastcall sub_43370(int a1, size_t *a2)
{
  __int64 v2; // d0
  const char *v4; // r7
  int v5; // r10
  size_t v6; // r11
  const char *v7; // r6
  size_t v8; // r5
  int v9; // r8
  size_t v10; // r4
  char *v11; // r0
  char *v12; // r5
  size_t v13; // r2
  size_t v14; // r11
  _DWORD **v15; // r11
  char *v16; // r3
  _DWORD **v17; // r10
  _DWORD *v18; // t1
  int v19; // lr
  int v20; // r12
  int v21; // r0
  int v22; // lr
  int v23; // r12
  int v24; // r0
  size_t v25; // r8
  size_t v26; // r11
  size_t v27; // r7
  size_t v28; // r11
  int v29; // lr
  double *v30; // r3
  size_t v31; // r11
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  sub_1D4E4();
  v4 = *(const char **)(a1 + 672);
  v5 = *(_DWORD *)(a1 + 1708);
  v6 = *(_DWORD *)(a1 + 1572);
  v7 = *(const char **)(a1 + 612);
  v8 = strlen(v4);
  v9 = 32 * v5;
  v10 = v6 + 1866 + 32 * v5 + v8 + strlen(v7);
  v11 = (char *)calloc(1u, v10);
  v12 = v11;
  if ( v11 )
  {
    memcpy(v11, (const void *)a1, 0x738u);
    memcpy(v12 + 1848, *(const void **)(a1 + 1568), v6);
    v13 = v6 + 1848;
    v14 = v6 + 1848;
    if ( v5 > 0 )
    {
      v15 = *(_DWORD ***)(a1 + 676);
      v16 = &v12[v13];
      v17 = &v15[v5];
      do
      {
        v18 = *v15++;
        v16 += 32;
        v19 = v18[1];
        v20 = v18[2];
        v21 = v18[3];
        *((_DWORD *)v16 - 8) = *v18;
        *((_DWORD *)v16 - 7) = v19;
        *((_DWORD *)v16 - 6) = v20;
        *((_DWORD *)v16 - 5) = v21;
        v22 = v18[5];
        v23 = v18[6];
        v24 = v18[7];
        *((_DWORD *)v16 - 4) = v18[4];
        *((_DWORD *)v16 - 3) = v22;
        *((_DWORD *)v16 - 2) = v23;
        *((_DWORD *)v16 - 1) = v24;
      }
      while ( v15 != v17 );
      v14 = v9 + v13;
    }
    v25 = strlen(v4) + 1;
    memcpy(&v12[v14], v4, v25);
    v26 = v25 + v14;
    v27 = strlen(v7);
    memcpy(&v12[v26], v7, v27 + 1);
    v28 = v26 + v27;
    v29 = (unsigned __int8)byte_74500;
    *(_QWORD *)&v12[v28 + 1] = v2;
    v30 = (double *)&v12[v28 + 9];
    v31 = v28 + 17;
    *v30 = dbl_68748;
    if ( v29 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(s, 0x800u, "job buf total len:%d, offset:%d\n", v10, v31);
      sub_20F58(5, s, 0);
    }
    *a2 = v10;
    return v12;
  }
  if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
    return v12;
  snprintf(s, 0x800u, "malloc temp job data buf failed: %d\n", v10);
  sub_20F58(3, s, 0);
  return 0;
}
