int __fastcall sub_BBC9C(int a1, int a2, unsigned __int64 a3, unsigned __int64 a4, int a5)
{
  int v6; // r4
  int v7; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r7
  int v11; // r12
  int v12; // r0
  int v13; // r5
  int result; // r0
  unsigned int v15; // r9
  unsigned int v16; // r7
  unsigned int v17; // r10
  unsigned int v18; // r8
  unsigned int v19; // r3
  int v20; // r6
  unsigned int v21; // r8
  unsigned __int64 v22; // r4
  unsigned int v23; // r9
  int v24; // kr00_4
  unsigned int v25; // r3
  int v26; // r0
  int v27; // lr
  int v28; // r6
  int v29; // r0
  void *v30; // r5
  void *v31; // r0
  int v32; // [sp-4h] [bp-50h]
  unsigned __int64 v33; // [sp+8h] [bp-44h] BYREF
  int v34; // [sp+10h] [bp-3Ch]
  int v35; // [sp+14h] [bp-38h]
  unsigned __int64 v36; // [sp+18h] [bp-34h]
  _DWORD v37[3]; // [sp+20h] [bp-2Ch] BYREF

  v6 = a1;
  v36 = a3;
  v7 = sub_16F654(a1);
  v8 = *(_DWORD *)(sub_1780B4(v7) + 152);
  v9 = *(_DWORD *)(v8 + 20);
  sub_1B141C((int)v37, "_dl_auxv");
  if ( !v37[0] )
    return -1;
  v10 = *(_DWORD *)(v37[0] + 24);
  if ( v10 != v9 )
    return -1;
  v11 = *(__int16 *)(v37[0] + 22);
  if ( v11 == -1 )
  {
    sub_94700((int)"auxv.c", 108, "Section index is uninitialized");
    goto LABEL_34;
  }
  if ( sub_230020(
         *(_DWORD *)(v37[0] + 8) + *(_DWORD *)(*(_DWORD *)(v37[1] + 144) + 4 * v11),
         &v33,
         *(_DWORD *)(v37[0] + 24)) )
  {
    return -1;
  }
  v12 = sub_15AEA8(&v33, v8);
  if ( !v12 )
    return -1;
  v13 = v12 + v36;
  if ( a2 )
  {
    if ( !sub_230484(v12 + v36, a2, a4) )
    {
      *(_QWORD *)a5 = a4;
      return 1;
    }
    return -1;
  }
  v15 = 2 * v10;
  v33 = (unsigned int)(2 * v10);
  if ( v33 > v36 )
    goto LABEL_10;
  if ( sub_230020(v13 - v15, &v33, v10) )
    return -1;
  result = sub_15AEA8(&v33, v8);
  if ( !result )
    return result;
LABEL_10:
  if ( (unsigned __int64)sub_347674(1024, 2 * v10) >> 32 )
  {
LABEL_34:
    v26 = sub_94700(
            (int)"auxv.c",
            168,
            "%s: Assertion `%s' failed.",
            "target_xfer_status ld_so_xfer_auxv(gdb_byte*, const gdb_byte*, ULONGEST, ULONGEST, ULONGEST*)",
            "block % auxv_pair_size == 0");
    v32 = v27;
    v28 = v26;
    v29 = sub_183680(v26, dword_478250);
    v30 = (void *)v29;
    if ( !v29 )
      __asm { POPEQ           {R4-R6,PC} }
    v31 = *(void **)(v29 + 8);
    if ( v31 )
      free(v31);
    free(v30);
    return sub_183678(v28, dword_478250, 0);
  }
  if ( a4 )
  {
    v16 = 0;
    v17 = 1024;
    v18 = 0;
    v35 = -v15;
    while ( 1 )
    {
      if ( v17 > a4 )
        v17 = a4;
      v17 &= v35;
      if ( !v17 )
        break;
      if ( sub_230020(v13, v6, v17) )
      {
        if ( v15 >= v17 )
          break;
        v17 = v15;
      }
      else
      {
        v13 += v17;
        a4 -= v17;
        if ( v15 <= v17 )
        {
          v19 = v18;
          LODWORD(v36) = v8;
          v34 = v13;
          v20 = v6;
          v21 = v15;
          v22 = v33;
          v23 = v19;
          do
          {
            v24 = v16 + v22;
            v23 = (__PAIR64__(v23, v16) + v22) >> 32;
            v16 += v22;
            if ( !sub_15AEA8(v20, v36) )
            {
              *(_DWORD *)a5 = v24;
              *(_DWORD *)(a5 + 4) = v23;
              return 1;
            }
            v17 -= v21;
            v20 += v21;
          }
          while ( v21 <= v17 );
          v6 = v20;
          v13 = v34;
          v8 = v36;
          v25 = v23;
          v15 = v21;
          v18 = v25;
        }
        if ( !a4 )
          break;
      }
    }
  }
  else
  {
    v18 = 0;
    v16 = 0;
  }
  *(_DWORD *)a5 = v16;
  *(_DWORD *)(a5 + 4) = v18;
  return 1;
}
