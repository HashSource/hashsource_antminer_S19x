_DWORD *__fastcall sub_166FC(int a1, int a2)
{
  char *v4; // r0
  char *v5; // r4
  _DWORD *v6; // r6
  int v7; // r1
  int v8; // r6
  char *v9; // r7
  unsigned int v10; // r1
  unsigned int v11; // r3
  int v12; // r9
  int v13; // t1
  int v14; // r5
  int v15; // r0
  int v16; // r3
  _DWORD *v17; // r2
  char *v18; // r0
  int v19; // r1
  bool v20; // zf
  int v21; // r12

  v4 = (char *)sub_2AB3B4(a1, 4);
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = a2;
  v8 = a2 + 20 * a1;
  v9 = v4;
  while ( v8 != v7 )
  {
    if ( *(_DWORD *)(v7 + 16) )
    {
      *(_DWORD *)v9 = v7;
      v9 += 4;
    }
    v7 += 20;
  }
  qsort(v4, (v9 - v4) >> 2, 4u, (__compar_fn_t)sub_2DB868);
  if ( v9 <= v5 )
  {
    v12 = 0;
  }
  else
  {
    v11 = (unsigned int)v5;
    v12 = 1;
    while ( 1 )
    {
      v10 = v11;
      if ( v11 >= (unsigned int)(v9 - 4) )
        break;
      v13 = *(_DWORD *)(v11 + 4);
      v11 += 4;
      if ( *(_DWORD *)(*(_DWORD *)v10 + 16) != *(_DWORD *)(v13 + 16) )
        ++v12;
    }
  }
  v14 = 12 * v12 + 12;
  v15 = sub_2AB368(v14 + 8 * ((v9 - v5) >> 2), v10);
  v6 = (_DWORD *)v15;
  if ( v15 )
  {
    v16 = v15 + v14;
    v17 = (_DWORD *)v15;
    v18 = v5;
    v6[1] = v12;
    *v6 = 0;
    v6[2] = 0;
    while ( v9 > v18 )
    {
      v19 = *(_DWORD *)v18;
      v20 = v18 == v5;
      v18 += 4;
      v21 = *(_DWORD *)(v19 + 16);
      if ( v20 || v17[2] != v21 )
      {
        v17[3] = v16;
        v17 += 3;
        v17[1] = 0;
        v17[2] = v21;
      }
      v16 += 8;
      *(_DWORD *)(v16 - 8) = *(_DWORD *)(v19 + 8);
      *(_BYTE *)(v16 - 4) = *(_BYTE *)(v19 + 12);
      *(_BYTE *)(v16 - 3) = *(_BYTE *)(v19 + 13);
      ++v17[1];
    }
    if ( -1431655765 * (v17 - v6) != v12 || v16 - (_DWORD)v6 != v14 + 8 * ((v9 - v5) >> 2) )
      sub_2A6BBC("elflink.c", 7734);
  }
  free(v5);
  return v6;
}
