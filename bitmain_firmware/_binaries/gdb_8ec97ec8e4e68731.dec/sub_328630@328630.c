int __fastcall sub_328630(_WORD *a1, int a2, int a3)
{
  __int64 v3; // r4
  int v4; // r3
  int v5; // r1
  int v6; // r12
  int v7; // lr
  bool v8; // cc
  int v9; // r8
  int v10; // r12
  int v11; // r3
  _WORD *v12; // r4
  unsigned int v13; // r12
  unsigned int v14; // r1
  int v15; // r5
  int v16; // r3
  char *v17; // r12
  unsigned int v18; // r2
  unsigned int v19; // r6
  int v20; // r1
  bool v21; // cc
  char *v22; // r12
  int v23; // r9
  __int16 v24; // r7
  unsigned int v25; // r3
  int v26; // r6
  __int16 v27; // r2
  unsigned int v28; // t1
  __int16 v29; // r10
  _WORD *v32; // r1
  unsigned int v33; // r3
  char *v34; // r12
  unsigned int v35; // r2
  char *v36; // r3
  __int16 v37; // t1

  v4 = 3 * a2;
  if ( 3 * a2 == a3 )
  {
    *a1 = 0;
    return 1;
  }
  else
  {
    v5 = a2;
    if ( a3 <= 49 )
    {
      LODWORD(v3) = *((unsigned __int8 *)&dword_438B18[5] + a3);
      v6 = 3 * (v3 - 1);
      v7 = a3 - v6;
      if ( a3 - v6 != 3 )
        goto LABEL_4;
    }
    else
    {
      v3 = 2863311531LL * (unsigned int)(a3 + 2);
      LODWORD(v3) = (a3 + 2) / 3u;
      v6 = 3 * (v3 - 1);
      v7 = a3 - v6;
      if ( a3 - v6 != 3 )
      {
LABEL_4:
        v8 = v6 <= 49;
        v9 = dword_438B18[v7];
        if ( v6 <= 49 )
          v6 += (int)dword_438B18;
        else
          LOWORD(v3) = -21845;
        if ( v8 )
        {
          v10 = *(unsigned __int8 *)(v6 + 20);
        }
        else
        {
          v10 = v6 + 2;
          WORD1(v3) = -21846;
          v3 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v3;
        }
        v11 = v4 - a3;
        v12 = a1;
        if ( v8 )
          v13 = 2 * v10;
        else
          v13 = HIDWORD(v3) & 0xFFFFFFFE;
        v14 = *(unsigned __int16 *)((char *)a1 + v13);
        v15 = 3 - v7;
        v16 = v11 - (3 - v7);
        v17 = (char *)a1 + v13;
        v18 = (v9 * (v14 >> v7)) >> 17;
        *a1 = v18;
        if ( v16 <= 0 )
          return 1;
        v19 = *((unsigned __int16 *)v17 + 1);
        v20 = v16 - v7;
        v21 = v16 - v7 <= 0;
        v22 = v17 + 2;
        v23 = dword_438D00[v7];
        if ( v16 - v7 > 0 )
          v20 -= v15;
        v24 = dword_438D00[v15];
        v25 = (v9 * (v19 >> v7)) >> 17;
        v26 = v19 - v23 * v25;
        v27 = v26 * v24 + v18;
        if ( !v21 )
          v26 = -v7 - v15;
        *a1 = v27;
        if ( v21 )
          return 1;
        do
        {
          v29 = v25;
          v8 = v20 <= 0;
          v20 += v26;
          a1[1] = v25;
          ++a1;
          if ( v8 )
            break;
          v28 = *((unsigned __int16 *)v22 + 1);
          v22 += 2;
          v25 = (v9 * (v28 >> v7)) >> 17;
          *a1 = (v28 - v23 * v25) * v24 + v29;
        }
        while ( v15 + v20 > 0 );
        return a1 - v12 + 1;
      }
    }
    v32 = &a1[v5];
    v33 = (unsigned int)&a1[v3];
    if ( v33 >= (unsigned int)v32 )
      return 0;
    v34 = (char *)(v33 - 2);
    v35 = (unsigned int)v32 + ~v33;
    v36 = (char *)(v33 + (v35 & 0xFFFFFFFE));
    do
    {
      v37 = *((_WORD *)v34 + 1);
      v34 += 2;
      *a1++ = v37;
    }
    while ( v36 != v34 );
    return (int)((v35 & 0xFFFFFFFE) + 2) >> 1;
  }
}
