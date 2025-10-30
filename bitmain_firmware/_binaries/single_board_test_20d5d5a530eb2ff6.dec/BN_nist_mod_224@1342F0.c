int __fastcall BN_nist_mod_224(int *a1, int *a2, int a3, int ***a4)
{
  int v7; // r9
  _DWORD *v8; // r10
  int v9; // r5
  int v11; // r0
  int v12; // r4
  int v13; // r9
  unsigned int v14; // r0
  _DWORD v15[4]; // [sp+0h] [bp-20h] BYREF
  int v16; // [sp+10h] [bp-10h] BYREF
  int v17; // [sp+14h] [bp-Ch]
  int v18; // [sp+18h] [bp-8h]
  int v19; // [sp+1Ch] [bp-4h]

  v7 = a2[1];
  v8 = (_DWORD *)*a2;
  if ( sub_B8720((int)a2) )
    return sub_1337FC(a1, a2, off_210004, a4);
  v9 = 0;
  if ( sub_B82F8(a2, off_210018) >= 0 )
    return sub_1337FC(a1, a2, off_210004, a4);
  v11 = sub_B82F8(off_210004, a2);
  if ( !v11 )
  {
    sub_B8930((int **)a1, 0);
    return 1;
  }
  if ( v11 <= 0 )
  {
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
    v13 = v7 - 3;
    if ( v13 <= 0 )
    {
      v13 = 0;
    }
    else
    {
      v15[0] = v8[3];
      if ( v13 != 1 )
      {
        v15[1] = v8[4];
        if ( v13 != 2 )
        {
          v15[2] = v8[5];
          if ( v13 != 3 )
            v15[3] = v8[6];
        }
      }
      if ( v13 > 3 )
        goto LABEL_20;
    }
    memset(&v15[v13], 0, 16 - 4 * v13);
LABEL_20:
    v16 = 0;
    v9 = 1;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    bn_add_words((_DWORD *)v12, (_DWORD *)v12, &v16, 4);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    bn_add_words((_DWORD *)v12, (_DWORD *)v12, &v16, 4);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    bn_sub_words((_DWORD *)v12, (_DWORD *)v12, &v16, 4);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    bn_sub_words((_DWORD *)v12, (_DWORD *)v12, &v16, 4);
    v14 = bn_sub_words(v15, (_DWORD *)v12, dword_1CB330, 4);
    *(_DWORD *)v12 = *(_DWORD *)((unsigned int)v15 ^ (v12 ^ (unsigned int)v15) & -v14);
    *(_DWORD *)(v12 + 4) = *(_DWORD *)(((unsigned int)v15 ^ (v12 ^ (unsigned int)v15) & -v14) + 4);
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(((unsigned int)v15 ^ (v12 ^ (unsigned int)v15) & -v14) + 8);
    *(_DWORD *)(v12 + 12) = *(_DWORD *)(((unsigned int)v15 ^ (v12 ^ (unsigned int)v15) & -v14) + 0xC);
    a1[1] = 4;
    sub_B8ACC(a1);
    return v9;
  }
  return a2 == a1 || sub_B89E4((int)a1, (int)a2) != 0;
}
