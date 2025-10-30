int __fastcall BN_nist_mod_256(int *a1, int *a2, int a3, int ***a4)
{
  int v7; // r9
  _DWORD *v8; // r10
  int v9; // r7
  int v11; // r0
  int v12; // r6
  size_t v13; // r2
  int v14; // r9
  _DWORD *p_dest; // r3
  __int64 v16; // r8
  unsigned int v17; // r7
  unsigned __int64 v18; // r2
  __int64 v19; // r10
  __int64 v20; // r2
  __int64 v21; // r8
  __int64 v22; // r0
  unsigned int v23; // kr10_4
  unsigned int v24; // r7
  __int64 v25; // r0
  unsigned int v26; // kr14_4
  unsigned int v27; // r7
  __int64 v28; // r2
  unsigned int v29; // kr18_4
  unsigned int v30; // r7
  __int64 v31; // kr20_8
  unsigned int v32; // kr1C_4
  unsigned int v33; // r7
  __int64 v34; // r2
  __int64 v35; // r10
  __int64 v36; // r0
  unsigned int (__fastcall *v37)(_DWORD *, _DWORD *, int *, int); // r8
  int v38; // r1
  int v39; // r9
  int v40; // r0
  __int64 v41; // [sp+0h] [bp-44h]
  __int64 v42; // [sp+8h] [bp-3Ch]
  __int64 v43; // [sp+10h] [bp-34h]
  unsigned int dest; // [sp+20h] [bp-24h] BYREF
  unsigned int v45; // [sp+24h] [bp-20h]
  unsigned int v46; // [sp+28h] [bp-1Ch]
  unsigned int v47; // [sp+2Ch] [bp-18h]
  _DWORD v48[5]; // [sp+30h] [bp-14h] BYREF

  v7 = a2[1];
  v8 = (_DWORD *)*a2;
  if ( sub_B8720((int)a2) )
    return sub_1337FC(a1, a2, off_21002C, a4);
  v9 = 0;
  if ( sub_B82F8(a2, off_210040) >= 0 )
    return sub_1337FC(a1, a2, off_21002C, a4);
  v11 = sub_B82F8(off_21002C, a2);
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
    if ( !sub_B89D8((int)a1, 4) )
      return v9;
    v12 = *a1;
    *(_DWORD *)v12 = *v8;
    *(_DWORD *)(v12 + 4) = v8[1];
    *(_DWORD *)(v12 + 8) = v8[2];
    *(_DWORD *)(v12 + 12) = v8[3];
  }
  if ( v7 <= 4 )
  {
    v14 = 0;
    p_dest = &dest;
    goto LABEL_15;
  }
  v13 = 4 * (v7 + 1073741820);
  v14 = v7 - 4;
  p_dest = memcpy(&dest, v8 + 4, v13);
  if ( v14 <= 3 )
LABEL_15:
    memset(&p_dest[v14], 0, 16 - 4 * v14);
  v43 = dest;
  v16 = v45;
  v17 = *(_DWORD *)(v12 + 8);
  v41 = v47;
  v18 = v45 + dest + (unsigned __int64)*(unsigned int *)v12 - v47;
  *(_DWORD *)v12 = v18;
  v19 = v16;
  v20 = v16 + SHIDWORD(v18) + (unsigned __int64)*(unsigned int *)(v12 + 4);
  v21 = v46;
  v22 = v20 + __PAIR64__(v17, v46);
  *(_DWORD *)(v12 + 4) = v20 + v46;
  v23 = v17;
  v24 = *(_DWORD *)(v12 + 12);
  LODWORD(v22) = HIDWORD(v22);
  HIDWORD(v22) = (SHIDWORD(v22) + (unsigned __int64)v23) >> 32;
  v25 = v41 + v22 + v21;
  *(_DWORD *)(v12 + 8) = v25;
  v26 = v24;
  v27 = *(_DWORD *)(v12 + 16);
  v28 = v41 + v41 + SHIDWORD(v25) + (unsigned __int64)v26 - v43 - v19;
  *(_DWORD *)(v12 + 12) = v28;
  v29 = v27;
  v30 = *(_DWORD *)(v12 + 20);
  v31 = SHIDWORD(v28) + (unsigned __int64)v29 - v19 - v21;
  *(_DWORD *)(v12 + 16) = v31;
  v32 = v30;
  v33 = *(_DWORD *)(v12 + 28);
  v34 = SHIDWORD(v31) + (unsigned __int64)v32 - v21 - v41;
  *(_DWORD *)(v12 + 20) = v34;
  v35 = SHIDWORD(v34) + (unsigned __int64)*(unsigned int *)(v12 + 24) - v43 - v19;
  *(_DWORD *)(v12 + 24) = v35;
  v36 = v43 + SHIDWORD(v35) + (unsigned __int64)v33 - v21;
  *(_DWORD *)(v12 + 28) = v36 - v41;
  v42 = (int)((unsigned __int64)(v36 - v41) >> 32);
  v37 = bn_sub_words;
  v38 = (unsigned __int64)(v36 - v41) >> 32;
  if ( v38 < 1LL )
  {
    if ( v42 )
    {
      v39 = -bn_add_words((_DWORD *)v12, (_DWORD *)v12, &dword_1CB350[4 * ~v38], 4);
      v37 = (unsigned int (__fastcall *)(_DWORD *, _DWORD *, int *, int))(((unsigned int)bn_sub_words
                                                                         ^ (unsigned int)bn_add_words)
                                                                        & v39
                                                                        ^ (unsigned int)bn_add_words);
    }
    else
    {
      v39 = -1;
    }
  }
  else
  {
    v39 = -bn_sub_words((_DWORD *)v12, (_DWORD *)v12, &dword_1CB30C[4 * v42 + 13], 4);
  }
  v9 = 1;
  v40 = v37(v48, (_DWORD *)v12, dword_1CB350, 4);
  *(_DWORD *)v12 = *(_DWORD *)((v12 ^ (unsigned int)v48) & v39 & -v40 ^ (unsigned int)v48);
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(((v12 ^ (unsigned int)v48) & v39 & -v40 ^ (unsigned int)v48) + 4);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(((v12 ^ (unsigned int)v48) & v39 & -v40 ^ (unsigned int)v48) + 8);
  *(_DWORD *)(v12 + 12) = *(_DWORD *)(((v12 ^ (unsigned int)v48) & v39 & -v40 ^ (unsigned int)v48) + 0xC);
  a1[1] = 4;
  sub_B8ACC(a1);
  return v9;
}
