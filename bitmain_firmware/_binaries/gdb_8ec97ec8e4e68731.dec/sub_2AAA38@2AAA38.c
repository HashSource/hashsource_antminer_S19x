_DWORD *__fastcall sub_2AAA38(int a1, int a2, int a3)
{
  _DWORD *v6; // r5
  unsigned int v7; // r6
  __int64 v8; // r0
  _DWORD *v9; // r2
  unsigned int v10; // r3
  const char *v11; // r0
  const char *v12; // r2
  int v13; // r1
  unsigned int v14; // r3
  const char *v15; // r1
  unsigned int v16; // r0
  int v17; // r3
  int v18; // r8
  char **v20; // r0
  unsigned int v21; // r1
  char *v22; // r10
  int v23; // r9
  _DWORD *v24; // r11
  int v25; // r9
  _DWORD *i; // r7
  _DWORD *v27; // t1
  int v28; // r0
  _DWORD *j; // r6
  _DWORD *v30; // r3
  __int64 v31; // r0
  const char *v32; // r3
  unsigned int v33; // r3

  v6 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int))(a1 + 4))(0, a1, a2);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v6[1] = a2;
    v6[2] = a3;
    v8 = sub_347674(a3, v7);
    v9 = *(_DWORD **)a1;
    v10 = *(_DWORD *)(a1 + 16) + 1;
    *v6 = *(_DWORD *)(*(_DWORD *)a1 + 4 * HIDWORD(v8));
    v9[HIDWORD(v8)] = v6;
    LOBYTE(v9) = *(_BYTE *)(a1 + 24);
    *(_DWORD *)(a1 + 16) = v10;
    if ( ((unsigned __int8)v9 & 1) == 0 && v10 > (3 * v7) >> 2 )
    {
      v11 = "bfd_hash_rename";
      v12 = (const char *)&unk_411B94;
      while ( 1 )
      {
        v13 = (int)(((v11 - v12) >> 2) + ((unsigned int)(v11 - v12) >> 31)) >> 1;
        v14 = *(_DWORD *)&v12[4 * v13];
        v15 = &v12[4 * v13];
        if ( v7 < v14 )
          break;
        v32 = v15;
LABEL_16:
        v12 = v32 + 4;
        if ( v32 + 4 == v11 )
          goto LABEL_10;
      }
      while ( 1 )
      {
        v17 = (v15 - v12) >> 2;
        if ( v12 == v15 )
          break;
        v16 = *(_DWORD *)&v12[4 * (v17 / 2)];
        v32 = &v12[4 * (v17 / 2)];
        if ( v7 >= v16 )
        {
          v11 = v15;
          goto LABEL_16;
        }
        v15 = v32;
      }
LABEL_10:
      v18 = *(_DWORD *)v12;
      if ( v7 < *(_DWORD *)v12
        && v18
        && (v18 & 0xC0000000) == 0
        && ((v20 = *(char ***)(a1 + 8), (v21 = (4 * v18 + 7) & 0xFFFFFFF8) == 0)
         || (v33 = (unsigned int)v20[1], v33 < v21)
          ? (v22 = (char *)sub_324C4C(v20, v21))
          : (v22 = *v20, v20[1] = (char *)(v33 - v21), *v20 = &v22[v21]),
            v22) )
      {
        memset(v22, 0, 4 * v18);
        v23 = *(_DWORD *)(a1 + 12);
        if ( v23 )
        {
          v24 = *(_DWORD **)a1;
          v25 = *(_DWORD *)a1 + 4 * v23;
          do
          {
            v27 = (_DWORD *)*v24++;
            for ( i = v27; i; i = (_DWORD *)*(v24 - 1) )
            {
              v28 = i[2];
              for ( j = i; ; j = (_DWORD *)*j )
              {
                v30 = (_DWORD *)*j;
                if ( !*j || v30[2] != v28 )
                  break;
              }
              *(v24 - 1) = v30;
              v31 = sub_347674(v28, v18);
              *j = *(_DWORD *)&v22[4 * HIDWORD(v31)];
              *(_DWORD *)&v22[4 * HIDWORD(v31)] = i;
            }
          }
          while ( (_DWORD *)v25 != v24 );
        }
        *(_DWORD *)a1 = v22;
        *(_DWORD *)(a1 + 12) = v18;
      }
      else
      {
        *(_BYTE *)(a1 + 24) |= 1u;
      }
    }
  }
  return v6;
}
