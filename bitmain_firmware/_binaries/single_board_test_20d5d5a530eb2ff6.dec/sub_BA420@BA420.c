int __fastcall sub_BA420(void **a1, int *a2, int a3)
{
  int v4; // r6
  int v5; // r6
  char v6; // r4
  int result; // r0
  int v9; // r9
  char v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // lr
  int v13; // r0
  int v14; // r12
  _DWORD *v15; // r5
  int v16; // r4
  _DWORD *v17; // r0
  _DWORD *v18; // r4
  unsigned int v19; // r1
  unsigned int v20; // r3
  unsigned int v21; // r1
  unsigned int v22; // r3
  unsigned int v23; // r1
  unsigned int v24; // r3
  unsigned int v25; // r1
  int v26; // r10
  unsigned int *v27; // r4
  int v28; // r1
  unsigned int v29; // t1
  int v30; // r3
  void *v31; // r2
  int v32; // [sp+4h] [bp-18h]
  int v33; // [sp+Ch] [bp-10h]
  void *s; // [sp+10h] [bp-Ch]
  int n; // [sp+14h] [bp-8h]

  v4 = (a3 + 63) & (a3 >> 31);
  if ( a3 >= 0 )
    v4 = a3;
  v5 = v4 >> 6;
  v6 = a3;
  result = sub_B89D8((int)a1, a2[1] + v5 + 1);
  if ( result )
  {
    v9 = a2[1];
    if ( v9 )
    {
      v10 = v6 & 0x3F;
      s = *a1;
      v32 = (64 - (v6 & 0x3F)) & 0x3F;
      v33 = *a2;
      v11 = *(_DWORD *)(*a2 + 4 * (v9 + 0x3FFFFFFF));
      v12 = -v32 | ((unsigned int)-v32 >> 8);
      n = 4 * v5;
      v13 = v9 + 0x3FFFFFFF;
      v14 = v9 - 1;
      v15 = (char *)*a1 + 4 * v5;
      v15[v13 + 1] = (v11 >> ((64 - (v6 & 0x3F)) & 0x3F)) & v12;
      if ( v9 - 1 > 0 )
      {
        if ( v9 > 9 )
        {
          v16 = v13 * 4 - 64;
          v17 = &v15[v13 - 15];
          v18 = (_DWORD *)(v16 + v33);
          do
          {
            v19 = v18[15];
            __pld(v18);
            v14 -= 8;
            __pld(v17);
            v18 -= 8;
            v17 -= 8;
            v17[23] = (v19 >> v32) & v12 | (v11 << v10);
            v20 = v18[22];
            v17[22] = (v20 >> v32) & v12 | (v19 << v10);
            v21 = v18[21];
            v17[21] = (v21 >> v32) & v12 | (v20 << v10);
            v22 = v18[20];
            v17[20] = (v22 >> v32) & v12 | (v21 << v10);
            v23 = v18[19];
            v17[19] = (v23 >> v32) & v12 | (v22 << v10);
            v24 = v18[18];
            v17[18] = (v24 >> v32) & v12 | (v23 << v10);
            v25 = v18[17];
            v17[17] = (v25 >> v32) & v12 | (v24 << v10);
            v11 = v18[16];
            v17[16] = (v11 >> v32) & v12 | (v25 << v10);
          }
          while ( v14 != v9 - 9 - ((v9 - 10) & 0xFFFFFFF8) );
        }
        v26 = v33 + 4 * v14;
        v27 = &v15[v14];
        do
        {
          v28 = v11 << v10;
          v29 = *(_DWORD *)(v26 - 4);
          v26 -= 4;
          v11 = v29;
          --v14;
          *v27-- = v28 | (v29 >> v32) & v12;
        }
        while ( v14 );
      }
      *v15 = v11 << v10;
      v30 = v9;
      if ( !v5 )
        goto LABEL_14;
    }
    else
    {
      n = 4 * v5;
      s = *a1;
      *((_DWORD *)*a1 + v5) = 0;
      v30 = 0;
      if ( !v5 )
        goto LABEL_14;
    }
    memset(s, 0, n);
    v30 = a2[1];
LABEL_14:
    v31 = (void *)a2[3];
    a1[1] = (void *)(v5 + v30 + 1);
    a1[3] = v31;
    return 1;
  }
  return result;
}
