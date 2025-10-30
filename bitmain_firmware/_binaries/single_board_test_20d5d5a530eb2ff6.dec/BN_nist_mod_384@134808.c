int __fastcall BN_nist_mod_384(int *a1, int *a2, int a3, int ***a4)
{
  int v7; // r9
  _DWORD *v8; // r10
  int v9; // r6
  int v11; // r0
  int v12; // r5
  size_t v13; // r2
  int v14; // r9
  _DWORD *v15; // r3
  __int64 v16; // r6
  unsigned int v17; // r3
  unsigned __int64 v18; // r0
  unsigned int v19; // r9
  unsigned int v20; // r10
  unsigned int v21; // r2
  unsigned __int64 v22; // r10
  __int64 v23; // r0
  unsigned __int64 v24; // r6
  unsigned __int64 v25; // r2
  unsigned __int64 v26; // r0
  __int64 v27; // r0
  __int64 v28; // r0
  unsigned __int64 v29; // r6
  unsigned __int64 v30; // r0
  unsigned int (__fastcall *v31)(_DWORD *, _DWORD *, _DWORD *, int); // r9
  int v32; // r10
  int v33; // r0
  __int64 v34; // [sp+0h] [bp-54h]
  __int64 v35; // [sp+0h] [bp-54h]
  __int64 v36; // [sp+8h] [bp-4Ch]
  __int64 v37; // [sp+10h] [bp-44h]
  _DWORD dest[4]; // [sp+20h] [bp-34h] BYREF
  unsigned int v39; // [sp+30h] [bp-24h]
  int v40; // [sp+34h] [bp-20h]
  _BYTE v41[28]; // [sp+38h] [bp-1Ch] BYREF

  v7 = a2[1];
  v8 = (_DWORD *)*a2;
  if ( sub_B8720((int)a2) )
    return sub_1337FC(a1, a2, off_210054, a4);
  v9 = 0;
  if ( sub_B82F8(a2, off_210068) >= 0 )
    return sub_1337FC(a1, a2, off_210054, a4);
  v11 = sub_B82F8(off_210054, a2);
  if ( !v11 )
  {
    sub_B8930((int **)a1, 0);
    return 1;
  }
  if ( v11 > 0 )
    return a2 == a1 || sub_B89E4((int)a1, (int)a2) != 0;
  if ( a2 == a1 )
  {
    v12 = (int)v8;
  }
  else
  {
    if ( !sub_B89D8((int)a1, 6) )
      return v9;
    v12 = *a1;
    *(_DWORD *)v12 = *v8;
    *(_DWORD *)(v12 + 4) = v8[1];
    *(_DWORD *)(v12 + 8) = v8[2];
    *(_DWORD *)(v12 + 12) = v8[3];
    *(_DWORD *)(v12 + 16) = v8[4];
    *(_DWORD *)(v12 + 20) = v8[5];
  }
  if ( v7 <= 6 )
  {
    v14 = 0;
    v15 = dest;
    goto LABEL_15;
  }
  v13 = 4 * (v7 + 1073741818);
  v14 = v7 - 6;
  v15 = memcpy(dest, v8 + 6, v13);
  if ( v14 <= 5 )
LABEL_15:
    memset(&v15[v14], 0, 24 - 4 * v14);
  v16 = dest[0];
  v17 = dest[1];
  v18 = dest[0] + (unsigned __int64)*(unsigned int *)v12;
  *(_DWORD *)v12 = v18;
  LODWORD(v18) = dest[2];
  v20 = (v17 + SHIDWORD(v18) + (unsigned __int64)*(unsigned int *)(v12 + 4)) >> 32;
  v19 = v17 + HIDWORD(v18) + *(_DWORD *)(v12 + 4);
  *(_DWORD *)(v12 + 4) = v19 - v16;
  v36 = (unsigned int)v18;
  v21 = dest[3];
  v22 = (unsigned int)v18
      + (int)((__PAIR64__(v20, v19) - v16) >> 32)
      + (unsigned __int64)*(unsigned int *)(v12 + 8)
      - v17;
  *(_DWORD *)(v12 + 8) = v22;
  v37 = v21;
  v23 = v21 + SHIDWORD(v22) + (unsigned __int64)*(unsigned int *)(v12 + 12) + v16;
  *(_DWORD *)(v12 + 12) = v23 - v36;
  v34 = v39;
  v24 = v17
      + v39
      + (int)((unsigned __int64)(v23 - v36) >> 32)
      + (unsigned __int64)*(unsigned int *)(v12 + 16)
      + v16
      - v21;
  HIDWORD(v23) = *(_DWORD *)(v12 + 20);
  LODWORD(v23) = v24;
  LODWORD(v24) = v40;
  *(_DWORD *)(v12 + 16) = v23;
  v25 = v17 + v36 + SHIDWORD(v24) + (unsigned __int64)HIDWORD(v23) + (unsigned int)v24;
  *(_DWORD *)(v12 + 20) = v25 - v34;
  v26 = v36 + v37 + (int)((v25 - v34) >> 32) + (unsigned __int64)*(unsigned int *)(v12 + 24) - (unsigned int)v24;
  *(_DWORD *)(v12 + 24) = v26;
  v27 = v37 + v34 + SHIDWORD(v26) + (unsigned __int64)*(unsigned int *)(v12 + 28);
  HIDWORD(v25) = *(_DWORD *)(v12 + 32);
  *(_DWORD *)(v12 + 28) = v27;
  v28 = v34 + SHIDWORD(v27) + (unsigned __int64)HIDWORD(v25) + (unsigned int)v24;
  *(_DWORD *)(v12 + 32) = v28;
  LODWORD(v22) = (SHIDWORD(v28) + (unsigned __int64)*(unsigned int *)(v12 + 36) + (unsigned int)v24) >> 32;
  *(_DWORD *)(v12 + 36) += HIDWORD(v28) + v24;
  v35 = (int)v22;
  v29 = (int)v22 + (unsigned __int64)*(unsigned int *)(v12 + 40);
  *(_DWORD *)(v12 + 40) = v29;
  v30 = SHIDWORD(v29) + (unsigned __int64)*(unsigned int *)(v12 + 44);
  *(_DWORD *)(v12 + 44) = v30;
  v31 = bn_sub_words;
  if ( SHIDWORD(v30) < 1LL )
  {
    if ( HIDWORD(v30) )
    {
      v32 = -bn_add_words((_DWORD *)v12, (_DWORD *)v12, &dword_1CB3A0[6 * ~HIDWORD(v30)], 6);
      v31 = (unsigned int (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, int))(((unsigned int)bn_sub_words
                                                                            ^ (unsigned int)bn_add_words)
                                                                           & v32
                                                                           ^ (unsigned int)bn_add_words);
    }
    else
    {
      v32 = -1;
    }
  }
  else
  {
    v32 = -bn_sub_words((_DWORD *)v12, (_DWORD *)v12, &dword_1CB3A0[6 * HIDWORD(v30) - 6], 6);
  }
  v9 = 1;
  v33 = ((int (__fastcall *)(_BYTE *, int, int *, int, _DWORD, _DWORD, _DWORD, int))v31)(
          v41,
          v12,
          dword_1CB3A0,
          6,
          v35,
          HIDWORD(v35),
          HIDWORD(v29),
          SHIDWORD(v29) >> 31);
  *(_DWORD *)v12 = *(_DWORD *)((v12 ^ (unsigned int)v41) & v32 & -v33 ^ (unsigned int)v41);
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(((v12 ^ (unsigned int)v41) & v32 & -v33 ^ (unsigned int)v41) + 4);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(((v12 ^ (unsigned int)v41) & v32 & -v33 ^ (unsigned int)v41) + 8);
  *(_DWORD *)(v12 + 12) = *(_DWORD *)(((v12 ^ (unsigned int)v41) & v32 & -v33 ^ (unsigned int)v41) + 0xC);
  *(_DWORD *)(v12 + 16) = *(_DWORD *)(((v12 ^ (unsigned int)v41) & v32 & -v33 ^ (unsigned int)v41) + 0x10);
  *(_DWORD *)(v12 + 20) = *(_DWORD *)(((v12 ^ (unsigned int)v41) & v32 & -v33 ^ (unsigned int)v41) + 0x14);
  a1[1] = 6;
  sub_B8ACC(a1);
  return v9;
}
