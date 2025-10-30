int __fastcall BN_nist_mod_192(int *a1, int *a2, int a3, int ***a4)
{
  int v7; // r9
  _DWORD *v8; // r10
  int v9; // r6
  int v11; // r0
  int v12; // r5
  size_t v13; // r2
  int v14; // r9
  _DWORD *v15; // r3
  unsigned int v16; // r7
  __int64 v17; // r10
  unsigned __int64 v18; // r0
  unsigned int v19; // r6
  unsigned __int64 v20; // r6
  unsigned int v21; // r2
  unsigned int v22; // r3
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // r0
  __int64 v26; // r2
  __int64 v27; // r0
  __int64 v28; // r6
  unsigned __int64 v29; // r2
  unsigned int v30; // r8
  unsigned int v31; // r3
  __int64 v32; // [sp+0h] [bp-2Ch]
  unsigned int v33; // [sp+0h] [bp-2Ch]
  unsigned int v34; // [sp+Ch] [bp-20h]
  _DWORD dest[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v36[4]; // [sp+1Ch] [bp-10h] BYREF

  v7 = a2[1];
  v8 = (_DWORD *)*a2;
  if ( sub_B8720((int)a2) )
    return sub_1337FC(a1, a2, off_20FFDC, a4);
  v9 = 0;
  if ( sub_B82F8(a2, off_20FFF0) >= 0 )
    return sub_1337FC(a1, a2, off_20FFDC, a4);
  v11 = sub_B82F8(off_20FFDC, a2);
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
    if ( !sub_B89D8((int)a1, 3) )
      return v9;
    v12 = *a1;
    *(_DWORD *)v12 = *v8;
    *(_DWORD *)(v12 + 4) = v8[1];
    *(_DWORD *)(v12 + 8) = v8[2];
  }
  if ( v7 <= 3 )
  {
    v14 = 0;
    v15 = dest;
    goto LABEL_15;
  }
  v13 = 4 * (v7 + 1073741821);
  v14 = v7 - 3;
  v15 = memcpy(dest, v8 + 3, v13);
  if ( v14 <= 2 )
LABEL_15:
    memset(&v15[v14], 0, 12 - 4 * v14);
  v16 = *(_DWORD *)(v12 + 4);
  v17 = dest[0];
  v18 = dest[0] + (unsigned __int64)*(unsigned int *)v12;
  v19 = dest[1];
  v34 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)v12 = v18;
  v32 = v19;
  v20 = v19 + SHIDWORD(v18) + (unsigned __int64)v16;
  v21 = dest[2];
  v22 = *(_DWORD *)(v12 + 12);
  *(_DWORD *)(v12 + 4) = v20;
  v23 = SHIDWORD(v20) + (unsigned __int64)v34 + v17;
  v24 = v21;
  v25 = v23 + v21;
  *(_DWORD *)(v12 + 8) = v25;
  v26 = v32 + SHIDWORD(v25) + (unsigned __int64)v22;
  LODWORD(v20) = *(_DWORD *)(v12 + 20);
  v27 = SHIDWORD(v26);
  HIDWORD(v26) = *(_DWORD *)(v12 + 16);
  *(_DWORD *)(v12 + 12) = v26;
  v33 = v20;
  v28 = v27 + HIDWORD(v26) + v24;
  *(_DWORD *)(v12 + 16) = v28;
  v29 = SHIDWORD(v28) + (unsigned __int64)v33;
  *(_DWORD *)(v12 + 20) = v29;
  if ( SHIDWORD(v29) >= 1LL )
    v30 = -bn_sub_words(
             (_DWORD *)v12,
             (_DWORD *)v12,
             &dword_1CB30C[3 * ((SHIDWORD(v28) + (unsigned __int64)v33) >> 32) - 3],
             3);
  else
    v30 = -1;
  v9 = 1;
  v31 = (v12 ^ (unsigned int)v36) & v30 & -bn_sub_words(v36, (_DWORD *)v12, dword_1CB30C, 3);
  *(_DWORD *)v12 = *(_DWORD *)((unsigned int)v36 ^ v31);
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(((unsigned int)v36 ^ v31) + 4);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(((unsigned int)v36 ^ v31) + 8);
  a1[1] = 3;
  sub_B8ACC(a1);
  return v9;
}
