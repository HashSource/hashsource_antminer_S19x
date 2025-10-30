int __fastcall sub_3CAE0(int result, int a2, int a3)
{
  int v3; // r0
  int *v4; // r12
  unsigned int *v5; // r1
  char *v6; // r8
  char *v7; // r7
  char *v8; // r6
  char *v9; // r5
  int *v10; // r4
  int v11; // lr
  unsigned int v12; // r3
  unsigned int v13; // t1
  unsigned int v14; // r12
  unsigned int v15; // t1
  int v16; // r1
  int v17; // t1
  int v18; // t1
  int v19; // r3
  int *v20; // r2
  int v21; // r0
  int v22; // t1
  int v23; // lr
  int v24; // r9
  int v25; // r7
  int v26; // r12
  int v27; // r4
  int v28; // r6
  int v29; // r5
  int v30; // r10
  int *v31; // r8
  int v32; // t1
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int *v37; // r8
  int v38; // r7
  int v39; // r9
  int v40; // r2
  int v41; // t1
  int v42; // t1
  int *v43; // [sp+4h] [bp-140h]
  int i; // [sp+8h] [bp-13Ch]
  int v45; // [sp+Ch] [bp-138h]
  int v48; // [sp+1Ch] [bp-128h] BYREF
  int v49; // [sp+20h] [bp-124h] BYREF
  int v50; // [sp+24h] [bp-120h]
  int v51; // [sp+28h] [bp-11Ch]
  int v52; // [sp+2Ch] [bp-118h]
  int v53; // [sp+30h] [bp-114h]
  int v54; // [sp+34h] [bp-110h]
  int v55; // [sp+38h] [bp-10Ch]
  int v56; // [sp+3Ch] [bp-108h] BYREF
  char v57; // [sp+40h] [bp-104h] BYREF
  char v58; // [sp+60h] [bp-E4h] BYREF
  char v59; // [sp+74h] [bp-D0h] BYREF
  char v60; // [sp+7Ch] [bp-C8h] BYREF

  if ( a3 > 0 )
  {
    v45 = result + 132;
    v48 = result + 164;
    for ( i = 0; i != a3; ++i )
    {
      v3 = 0;
      v4 = &v56;
      do
      {
        v5 = (unsigned int *)(a2 + (i << 6) + 4 * v3++);
        v4[1] = _byteswap_ulong(*v5);
        ++v4;
      }
      while ( v3 != 16 );
      v6 = &v59;
      v7 = &v58;
      v8 = &v57;
      v9 = &v60;
      v10 = &v56;
      v11 = 48;
      do
      {
        v13 = *((_DWORD *)v6 + 1);
        v6 += 4;
        v12 = v13;
        --v11;
        v15 = *((_DWORD *)v8 + 1);
        v8 += 4;
        v14 = v15;
        v17 = v10[1];
        ++v10;
        v16 = v17;
        v18 = *((_DWORD *)v7 + 1);
        v7 += 4;
        *((_DWORD *)v9 + 1) = v16
                            + v18
                            + (__ROR4__(v12, 17) ^ __ROR4__(v12, 19) ^ (v12 >> 10))
                            + (__ROR4__(v14, 7) ^ __ROR4__(v14, 18) ^ (v14 >> 3));
        v9 += 4;
      }
      while ( v11 );
      v19 = v45;
      v20 = &v48;
      v21 = v48;
      do
      {
        v22 = *(_DWORD *)(v19 + 4);
        v19 += 4;
        v20[1] = v22;
        ++v20;
      }
      while ( v19 != v21 );
      v23 = v53;
      v24 = v54;
      v25 = v55;
      v26 = v56;
      v27 = v49;
      v28 = v50;
      v29 = v51;
      v30 = v52;
      v31 = &dword_B3094;
      v43 = &v56;
      while ( 1 )
      {
        v32 = v31[1];
        ++v31;
        v33 = v43[1] + v32;
        ++v43;
        v34 = v33 + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25)) + (v25 & ~v23 ^ v24 & v23) + v26;
        v35 = (v29 & v28 ^ (v29 ^ v28) & v27) + (__ROR4__(v27, 2) ^ __ROR4__(v27, 13) ^ __ROR4__(v27, 22)) + v34;
        v36 = v30 + v34;
        v26 = v25;
        v30 = v29;
        if ( v31 == (int *)&unk_B3194 )
          break;
        v29 = v28;
        v25 = v24;
        v28 = v27;
        v24 = v23;
        v27 = v35;
        v23 = v36;
      }
      v56 = v25;
      result = v35;
      v55 = v24;
      v37 = &v49;
      v38 = v45;
      v39 = 8;
      v54 = v23;
      v53 = v36;
      v52 = v29;
      v51 = v28;
      v50 = v27;
      v49 = v35;
      v40 = v45;
      while ( 1 )
      {
        v42 = *(_DWORD *)(v40 + 4);
        v40 += 4;
        --v39;
        *(_DWORD *)(v38 + 4) = result + v42;
        v38 += 4;
        if ( !v39 )
          break;
        v41 = v37[1];
        ++v37;
        result = v41;
      }
    }
  }
  return result;
}
