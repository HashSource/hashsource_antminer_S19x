int __fastcall sub_C4A74(int a1)
{
  int v1; // r4
  int v2; // r0
  _DWORD *v3; // r0
  unsigned int *v4; // r8
  _DWORD *v5; // r9
  unsigned int *v6; // r10
  char *v7; // r6
  char *v8; // r2
  char *v9; // lr
  unsigned int v10; // r4
  unsigned int v11; // t1
  size_t v12; // r5
  char *v13; // r12
  unsigned int v14; // r1
  unsigned int v15; // r7
  void *v16; // r5
  int v17; // r12
  unsigned int v19; // r7
  _DWORD *v20; // r0
  unsigned int v21; // r1
  int v22; // r2
  bool v23; // cf
  unsigned int v24; // r2
  size_t v25; // r5
  char *v26; // r0
  char *v27; // r5
  unsigned int v28; // r2
  char *v29; // r0
  char *v30; // r5
  char *v31; // r1
  char *v32; // [sp+Ch] [bp-10h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = sub_183688(a1);
  v3 = (_DWORD *)sub_C4914(v2);
  v4 = *(unsigned int **)(v1 + 136);
  v5 = v3;
  v6 = *(unsigned int **)(v1 + 140);
  ++v3[4];
  if ( v6 != v4 )
  {
    v7 = (char *)v3[1];
    while ( 1 )
    {
      v8 = (char *)v5[2];
      v9 = v7;
      v11 = *v4++;
      v10 = v11;
      v12 = v8 - v7;
      v13 = v8;
      v14 = (v8 - v7) >> 2;
      if ( v11 >= v14 )
      {
        v15 = v10 + 1;
        if ( v10 + 1 > v14 )
        {
          v19 = v15 - v14;
          if ( v19 )
          {
            if ( v19 > (v5[3] - (int)v8) >> 2 )
            {
              if ( v19 > 0x3FFFFFFF - v14 )
                sub_33D184("vector::_M_default_append");
              if ( v14 < v19 )
                v22 = v19;
              else
                v22 = (v8 - v7) >> 2;
              v23 = __CFADD__(v14, v22);
              v24 = v14 + v22;
              if ( v23 || v24 > 0x3FFFFFFF )
              {
                v25 = -4;
LABEL_25:
                v26 = (char *)sub_9836C(v25);
                v31 = (char *)v5[1];
                v13 = (char *)v5[2];
                v7 = v26;
                v32 = &v26[v25];
                v9 = v31;
                v12 = v13 - v31;
              }
              else
              {
                if ( v24 )
                {
                  v25 = 4 * v24;
                  goto LABEL_25;
                }
                v31 = v7;
                v32 = 0;
                v7 = 0;
              }
              if ( v13 != v9 )
              {
                memmove(v7, v31, v12);
                v31 = (char *)v5[1];
              }
              v27 = &v7[v12];
              v28 = v19;
              v29 = v27;
              do
              {
                --v28;
                *(_DWORD *)v29 = 0;
                v29 += 4;
              }
              while ( v28 );
              v30 = &v27[4 * v19];
              if ( v31 )
                sub_339E64(v31);
              v5[1] = v7;
              v5[2] = v30;
              v5[3] = v32;
              goto LABEL_3;
            }
            v20 = (_DWORD *)v5[2];
            v21 = v19;
            do
            {
              --v21;
              *v20++ = 0;
            }
            while ( v21 );
            v5[2] = &v8[4 * v19];
          }
        }
        else if ( v10 + 1 < v14 )
        {
          v5[2] = &v7[4 * v15];
        }
      }
LABEL_3:
      ++*(_DWORD *)&v7[4 * v10];
      if ( v6 == v4 )
        goto LABEL_10;
    }
  }
  ++*v3;
LABEL_10:
  v16 = off_489A8C;
  v17 = ps_getpid_0((int)&dword_4878EC);
  return ((int (__fastcall *)(int *, int, bool, _DWORD, _DWORD, int))v16)(
           &dword_4899A0,
           v17,
           v5[4] != 0,
           *v5,
           v5[1],
           (v5[2] - v5[1]) >> 2);
}
