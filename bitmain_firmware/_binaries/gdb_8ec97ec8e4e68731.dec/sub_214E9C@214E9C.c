int __fastcall sub_214E9C(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r12
  int v6; // r6
  int v7; // r3
  char v8; // r2
  int v9; // r1
  void *v10; // r0
  void *v11; // r3
  int v12; // lr
  bool v13; // zf
  int v14; // r3
  int v15; // r5
  int v16; // r3
  int v17; // r0
  int v18; // r3
  bool v19; // zf
  int v20; // r0
  int v21; // r0
  int v22; // r3
  bool v23; // zf
  int v24; // r0
  int v25; // r0
  int v26; // r3
  bool v27; // zf
  int v28; // r0
  int v29; // r0
  int v30; // r3
  bool v31; // zf
  int v32; // r5
  int v33; // r0
  _DWORD *v34; // r0
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // t1
  int v39; // r2
  int result; // r0
  int *v41; // r2
  int v42; // r3
  int v43; // t1
  int v44; // r7
  int v45; // r0
  int i; // r6
  int v47; // r3
  int v48; // r0
  _DWORD v49[2]; // [sp+0h] [bp-8h] BYREF

  v4 = sub_16304C(*(_DWORD *)(a1 + 36));
  v5 = *(_DWORD *)(a1 + 64);
  v6 = 4 * v4;
  v7 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 148) = v4;
  v8 = v5 - v7;
  if ( 4 * v4 > (unsigned int)(v5 - v7) )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 4 * v4);
    v7 = *(_DWORD *)(a1 + 60);
    v5 = *(_DWORD *)(a1 + 64);
    v9 = *(_DWORD *)(a1 + 148);
  }
  else
  {
    v9 = v4;
  }
  v10 = *(void **)(a1 + 56);
  v11 = (void *)(v7 + v6);
  v12 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v11;
  v13 = v11 == v10;
  *(_DWORD *)(a1 + 144) = v10;
  if ( v11 == v10 )
    v8 = *(_BYTE *)(a1 + 88);
  v14 = ((unsigned int)v11 + v12) & ~v12;
  *(_DWORD *)(a1 + 60) = v14;
  if ( v13 )
    *(_BYTE *)(a1 + 88) = v8 | 2;
  if ( v14 - *(_DWORD *)(a1 + 52) > (unsigned int)(v5 - *(_DWORD *)(a1 + 52)) )
  {
    v14 = v5;
    *(_DWORD *)(a1 + 60) = v5;
  }
  *(_DWORD *)(a1 + 56) = v14;
  sub_211FD8(v10, v9, a2);
  v15 = *(_DWORD *)(a1 + 36);
  if ( ((*(_DWORD *)(v15 + 40) >> 5) & 0x42) == 0 )
  {
    v16 = *(_DWORD *)(v15 + 100);
    if ( v16 )
    {
      while ( !*(_DWORD *)(v16 + 28) )
      {
        v16 = *(_DWORD *)(v16 + 12);
        if ( !v16 )
          goto LABEL_62;
      }
    }
    else
    {
LABEL_62:
      v44 = *(_DWORD *)(a1 + 144);
      v45 = *(_DWORD *)(a1 + 36);
      v49[0] = v44;
      v49[1] = 0;
      sub_2ADCFC(v45, sub_210B18, v49);
      for ( i = *(_DWORD *)(v15 + 100); i; i = *(_DWORD *)(i + 12) )
      {
        if ( (*(_DWORD *)(i + 20) & 1) != 0 )
        {
          v47 = *(_DWORD *)(i + 8);
          v48 = *(_DWORD *)(v44 + 4 * v47);
          *(_BYTE *)(i + 24) |= 1u;
          *(_DWORD *)(i + 32) = v48;
          *(_DWORD *)(i + 28) = v48;
          sub_95AF0(*(const char **)v15, v47, *(_DWORD *)(v44 + 4 * v47));
          *(_DWORD *)(v44 + 4 * *(_DWORD *)(i + 8)) = 0;
        }
      }
      v15 = *(_DWORD *)(a1 + 36);
    }
  }
  v17 = sub_2AD7AC(v15, ".text");
  v19 = v17 == 0;
  if ( v17 )
    v18 = *(_DWORD *)(v17 + 8);
  v20 = *(_DWORD *)(a1 + 36);
  if ( !v19 )
    *(_DWORD *)(a1 + 152) = v18;
  v21 = sub_2AD7AC(v20, ".data");
  v23 = v21 == 0;
  if ( v21 )
    v22 = *(_DWORD *)(v21 + 8);
  v24 = *(_DWORD *)(a1 + 36);
  if ( !v23 )
    *(_DWORD *)(a1 + 156) = v22;
  v25 = sub_2AD7AC(v24, ".bss");
  v27 = v25 == 0;
  if ( v25 )
    v26 = *(_DWORD *)(v25 + 8);
  v28 = *(_DWORD *)(a1 + 36);
  if ( !v27 )
    *(_DWORD *)(a1 + 160) = v26;
  v29 = sub_2AD7AC(v28, ".rodata");
  v31 = v29 == 0;
  v32 = *(_DWORD *)(a1 + 36);
  if ( v29 )
    v30 = *(_DWORD *)(v29 + 8);
  v33 = *(_DWORD *)(a1 + 36);
  if ( !v31 )
    *(_DWORD *)(a1 + 164) = v30;
  v34 = (_DWORD *)sub_214E30(v33);
  if ( v34 )
  {
    if ( (unsigned int)(*v34 - 1) <= 1 )
    {
      v35 = *(_DWORD *)(v32 + 100);
      if ( v35 )
      {
        v36 = v34[3] - 4;
        while ( 1 )
        {
          v38 = *(_DWORD *)(v36 + 4);
          v36 += 4;
          v37 = v38;
          if ( v38 != 1 )
            break;
          if ( *(_DWORD *)(a1 + 152) == -1 )
            *(_DWORD *)(a1 + 152) = *(_DWORD *)(v35 + 8);
          if ( *(_DWORD *)(a1 + 164) == -1 )
          {
            v39 = *(_DWORD *)(v35 + 8);
            v35 = *(_DWORD *)(v35 + 12);
            *(_DWORD *)(a1 + 164) = v39;
            if ( !v35 )
              goto LABEL_46;
          }
          else
          {
LABEL_40:
            v35 = *(_DWORD *)(v35 + 12);
            if ( !v35 )
              goto LABEL_46;
          }
        }
        if ( v37 == 2 )
        {
          if ( *(_DWORD *)(a1 + 156) == -1 )
            *(_DWORD *)(a1 + 156) = *(_DWORD *)(v35 + 8);
          if ( *(_DWORD *)(a1 + 160) == -1 )
            *(_DWORD *)(a1 + 160) = *(_DWORD *)(v35 + 8);
        }
        goto LABEL_40;
      }
    }
LABEL_46:
    sub_214E58(v34);
  }
  result = *(_DWORD *)(a1 + 148);
  if ( result <= 0 )
  {
    if ( result )
      return result;
  }
  else
  {
    v41 = *(int **)(a1 + 144);
    v42 = *v41;
    if ( *v41 )
      return result;
    while ( ++v42 != result )
    {
      v43 = v41[1];
      ++v41;
      if ( v43 )
        return result;
    }
  }
  if ( *(_DWORD *)(a1 + 152) == -1 )
    *(_DWORD *)(a1 + 152) = 0;
  if ( *(_DWORD *)(a1 + 156) == -1 )
    *(_DWORD *)(a1 + 156) = 0;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    *(_DWORD *)(a1 + 160) = 0;
  if ( *(_DWORD *)(a1 + 164) == -1 )
    *(_DWORD *)(a1 + 164) = 0;
  return result;
}
