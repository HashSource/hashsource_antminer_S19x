int __fastcall sub_323784(int a1)
{
  unsigned int v2; // r6
  int v3; // r3
  unsigned int *v4; // r1
  int v5; // r5
  unsigned int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r7
  int (__fastcall *v9)(_DWORD, unsigned int, int); // r3
  int result; // r0
  int v11; // r2
  int v12; // r3
  unsigned int *v13; // r7
  unsigned int v14; // r6
  unsigned int v15; // r5
  unsigned int v16; // t1
  int v17; // r0
  int v18; // r12
  int v19; // r1
  int v20; // r9
  unsigned int *v21; // r12
  unsigned int v22; // lr
  unsigned int v23; // r3
  int v24; // r2
  unsigned int *v25; // r8
  unsigned int v26; // r8
  unsigned int v27; // r12
  unsigned int v28; // r0
  int v29; // r2
  void (__fastcall *v30)(unsigned int *); // r3
  void (__fastcall *v31)(_DWORD, unsigned int *); // r3
  unsigned __int64 v32; // [sp+0h] [bp-14h]
  unsigned int *v33; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 24);
  v4 = *(unsigned int **)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 2 * v3;
  v33 = v4;
  if ( 2 * v3 > v2 )
    goto LABEL_24;
  v7 = 8 * v3;
  if ( v7 < 0x20 )
    v7 = 32;
  if ( v2 > v7 )
  {
LABEL_24:
    v5 = sub_3236D8(v6);
    v8 = dword_4381A8[4 * v5];
    v9 = *(int (__fastcall **)(_DWORD, unsigned int, int))(a1 + 48);
    if ( v9 )
    {
LABEL_8:
      result = v9(*(_DWORD *)(a1 + 44), v8, 4);
      goto LABEL_9;
    }
  }
  else
  {
    v8 = v2;
    v9 = *(int (__fastcall **)(_DWORD, unsigned int, int))(a1 + 48);
    if ( v9 )
      goto LABEL_8;
  }
  result = (*(int (__fastcall **)(unsigned int, int))(a1 + 36))(v8, 4);
LABEL_9:
  if ( result )
  {
    v11 = *(_DWORD *)(a1 + 24);
    v12 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v8;
    v13 = v33;
    v14 = (unsigned int)&v33[v2];
    *(_DWORD *)(a1 + 12) = result;
    *(_DWORD *)(a1 + 56) = v5;
    *(_DWORD *)(a1 + 20) = v12 - v11;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      v16 = *v13++;
      v15 = v16;
      if ( v16 > 1 )
      {
        v17 = (*(int (__fastcall **)(unsigned int))a1)(v15);
        v18 = *(_DWORD *)(a1 + 56);
        v19 = *(_DWORD *)(a1 + 12);
        v20 = dword_4381A8[4 * v18];
        v21 = &dword_4381A8[4 * v18];
        v22 = v21[3];
        v32 = (unsigned int)v17 * (unsigned __int64)v21[1];
        v23 = v17 - v20 * ((HIDWORD(v32) + ((unsigned int)(v17 - HIDWORD(v32)) >> 1)) >> v22);
        v24 = *(_DWORD *)(v19 + 4 * v23);
        v25 = (unsigned int *)(v19 + 4 * v23);
        if ( v24 )
        {
          if ( v24 == 1 )
LABEL_29:
            abort();
          v26 = v21[2];
          v27 = *(_DWORD *)(a1 + 16);
          v28 = v17
              + 1
              - (v20 - 2)
              * ((unsigned int)((((unsigned int)v17 * (unsigned __int64)v26) >> 32)
                              + ((unsigned int)(v17 - (((unsigned int)v17 * (unsigned __int64)v26) >> 32)) >> 1)) >> v22);
          while ( 1 )
          {
            v23 += v28;
            if ( v27 <= v23 )
              v23 -= v27;
            v29 = *(_DWORD *)(v19 + 4 * v23);
            v25 = (unsigned int *)(v19 + 4 * v23);
            if ( !v29 )
              break;
            if ( v29 == 1 )
              goto LABEL_29;
          }
        }
        *v25 = v15;
      }
    }
    while ( v14 > (unsigned int)v13 );
    v30 = *(void (__fastcall **)(unsigned int *))(a1 + 40);
    if ( v30 )
    {
      v30(v33);
      return 1;
    }
    else
    {
      v31 = *(void (__fastcall **)(_DWORD, unsigned int *))(a1 + 52);
      if ( v31 )
        v31(*(_DWORD *)(a1 + 44), v33);
      return 1;
    }
  }
  return result;
}
