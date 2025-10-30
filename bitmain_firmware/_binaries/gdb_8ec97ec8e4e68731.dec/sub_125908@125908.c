void sub_125908()
{
  int v0; // r7
  unsigned int *v1; // r0
  unsigned int v2; // r4
  unsigned int v3; // r5
  _DWORD *v4; // r2
  int v5; // r2
  int v6; // r3
  int v7; // r8
  int v8; // r10
  int v9; // r0
  char v10; // r12
  unsigned int *v11; // r3
  int v12; // r11
  unsigned int v13; // r7
  _DWORD *v14; // r0
  unsigned int v15; // r7
  int v16; // r5
  int v17; // r1
  int v18; // r2
  _DWORD *v19; // r3
  _DWORD *v20; // r2
  int v21; // lr
  bool v22; // zf
  int v23; // r2
  _DWORD *v24; // r1
  _DWORD *v25; // lr
  _DWORD *v26; // r2
  int v27; // t1
  int v28; // [sp+14h] [bp-10h]
  void *ptr; // [sp+1Ch] [bp-8h] BYREF

  v0 = dword_4872D8;
  v1 = *(unsigned int **)(dword_4872D8 + 440);
  if ( v1 )
  {
    if ( *v1 )
    {
      v2 = 0;
      while ( 1 )
      {
        v3 = v1[v2 + 2];
        if ( (*(_BYTE *)(v3 + 10) & 4) == 0 )
        {
          v4 = *(_DWORD **)(v3 + 28);
          if ( v4 )
          {
            if ( *v4 )
            {
              v5 = *(unsigned __int8 *)(v0 + 417);
              ptr = (void *)(*(_BYTE *)(v3 + 10) & 4);
              v6 = *(_DWORD *)(v3 + 24);
              v7 = v5 ? *(_DWORD *)(v6 + 4) : *(_DWORD *)(v6 + 56);
              if ( v7 )
              {
                v8 = sub_323AE0(1, off_4714A0, off_47149C[0], 0, sub_93094, &loc_11C838);
                v9 = sub_323AE0(1, off_4714A0, off_47149C[0], 0, sub_93094, &loc_11C838);
                v11 = *(unsigned int **)(v3 + 28);
                v12 = v9;
                if ( v11 && *v11 )
                {
                  v13 = 0;
                  do
                  {
                    ((void (__fastcall *)(void **, int, int, unsigned int, int))loc_12572C)(
                      &ptr,
                      v8,
                      v12,
                      v11[v13 + 2],
                      v7);
                    v11 = *(unsigned int **)(v3 + 28);
                    ++v13;
                  }
                  while ( v11 && v13 < *v11 );
                }
                v14 = ptr;
                if ( ptr )
                {
                  v15 = 4 * (*(_DWORD *)ptr + 1);
                  v28 = *(_DWORD *)ptr;
                }
                else
                {
                  v28 = 0;
                  v15 = 4;
                }
                v16 = *(_DWORD *)(dword_4872D8 + 344);
                v17 = *(_DWORD *)(v16 + 64);
                v18 = *(_DWORD *)(v16 + 60);
                if ( v17 - v18 < v15 )
                {
                  obstack_newchunk((struct obstack *)(v16 + 48), v15);
                  v18 = *(_DWORD *)(v16 + 60);
                  v17 = *(_DWORD *)(v16 + 64);
                  v14 = ptr;
                }
                v19 = *(_DWORD **)(v16 + 56);
                v20 = (_DWORD *)(v18 + v15);
                v21 = *(_DWORD *)(v16 + 72);
                *(_DWORD *)(v16 + 60) = v20;
                v22 = v20 == v19;
                if ( v20 == v19 )
                  v10 = *(_BYTE *)(v16 + 88);
                v23 = ((unsigned int)v20 + v21) & ~v21;
                *(_DWORD *)(v16 + 60) = v23;
                if ( v22 )
                  *(_BYTE *)(v16 + 88) = v10 | 2;
                if ( v23 - *(_DWORD *)(v16 + 52) > (unsigned int)(v17 - *(_DWORD *)(v16 + 52)) )
                {
                  v23 = v17;
                  *(_DWORD *)(v16 + 60) = v17;
                }
                *(_DWORD *)(v16 + 56) = v23;
                *(_DWORD *)(v7 + 52) = v19;
                v24 = &v19[v28];
                if ( v14 )
                {
                  if ( *v14 )
                  {
                    v25 = &v19[*v14];
                    v26 = v14 + 1;
                    do
                    {
                      v27 = v26[1];
                      ++v26;
                      *v19++ = v27;
                    }
                    while ( v25 != v19 );
                  }
                  *v24 = 0;
                  free(v14);
                }
                else
                {
                  v19[v28] = 0;
                }
                ptr = 0;
                sub_323B84(v8);
                sub_323B84(v12);
              }
            }
          }
        }
        v0 = dword_4872D8;
        ++v2;
        v1 = *(unsigned int **)(dword_4872D8 + 440);
        if ( !v1 )
          break;
        if ( v2 >= *v1 )
          goto LABEL_36;
      }
    }
    else
    {
LABEL_36:
      free(v1);
    }
  }
  *(_DWORD *)(v0 + 440) = 0;
}
