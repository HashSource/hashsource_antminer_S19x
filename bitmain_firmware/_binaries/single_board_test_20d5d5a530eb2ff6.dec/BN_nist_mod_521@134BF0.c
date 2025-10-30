int __fastcall BN_nist_mod_521(int *a1, int *a2, int a3, int ***a4)
{
  int v7; // r9
  _DWORD *v8; // r10
  int v9; // r6
  int v11; // r0
  int v12; // r5
  int v13; // r9
  unsigned int v14; // r0
  unsigned int v15; // [sp+4h] [bp-24h] BYREF
  unsigned int v16; // [sp+8h] [bp-20h]
  unsigned int v17; // [sp+Ch] [bp-1Ch]
  unsigned int v18; // [sp+10h] [bp-18h]
  unsigned int v19; // [sp+14h] [bp-14h]
  unsigned int v20; // [sp+18h] [bp-10h]
  unsigned int v21; // [sp+1Ch] [bp-Ch]
  unsigned int v22; // [sp+20h] [bp-8h]
  unsigned int v23; // [sp+24h] [bp-4h]

  v7 = a2[1];
  v8 = (_DWORD *)*a2;
  if ( sub_B8720((int)a2) )
    return sub_1337FC(a1, a2, off_21007C, a4);
  v9 = 0;
  if ( sub_B82F8(a2, off_210090) >= 0 )
    return sub_1337FC(a1, a2, off_21007C, a4);
  v11 = sub_B82F8(off_21007C, a2);
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
      if ( !sub_B89D8((int)a1, 9) )
        return v9;
      v12 = *a1;
      *(_DWORD *)v12 = *v8;
      *(_DWORD *)(v12 + 4) = v8[1];
      *(_DWORD *)(v12 + 8) = v8[2];
      *(_DWORD *)(v12 + 12) = v8[3];
      *(_DWORD *)(v12 + 16) = v8[4];
      *(_DWORD *)(v12 + 20) = v8[5];
      *(_DWORD *)(v12 + 24) = v8[6];
      *(_DWORD *)(v12 + 28) = v8[7];
      *(_DWORD *)(v12 + 32) = v8[8];
    }
    v13 = v7 - 8;
    if ( v13 <= 0 )
    {
      v13 = 0;
    }
    else
    {
      v15 = v8[8];
      if ( v13 != 1 )
      {
        v16 = v8[9];
        if ( v13 != 2 )
        {
          v17 = v8[10];
          if ( v13 != 3 )
          {
            v18 = v8[11];
            if ( v13 != 4 )
            {
              v19 = v8[12];
              if ( v13 != 5 )
              {
                v20 = v8[13];
                if ( v13 != 6 )
                {
                  v21 = v8[14];
                  if ( v13 != 7 )
                  {
                    v22 = v8[15];
                    if ( v13 != 8 )
                      v23 = v8[16];
                  }
                }
              }
            }
          }
        }
      }
      if ( v13 > 8 )
        goto LABEL_25;
    }
    memset(&v15 + v13, 0, 36 - 4 * v13);
LABEL_25:
    v15 >>= 9;
    v16 >>= 9;
    v17 >>= 9;
    v18 >>= 9;
    v19 >>= 9;
    v21 >>= 9;
    v20 >>= 9;
    v23 >>= 9;
    v22 >>= 9;
    v9 = 1;
    *(_DWORD *)(v12 + 32) = 0;
    bn_add_words((_DWORD *)v12, (_DWORD *)v12, (int *)&v15, 9);
    v14 = bn_sub_words(&v15, (_DWORD *)v12, dword_1CB418, 9);
    *(_DWORD *)v12 = *(_DWORD *)((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15));
    *(_DWORD *)(v12 + 4) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 4);
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 8);
    *(_DWORD *)(v12 + 12) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 0xC);
    *(_DWORD *)(v12 + 16) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 0x10);
    *(_DWORD *)(v12 + 20) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 0x14);
    *(_DWORD *)(v12 + 24) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 0x18);
    *(_DWORD *)(v12 + 28) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 0x1C);
    *(_DWORD *)(v12 + 32) = *(_DWORD *)(((unsigned int)&v15 ^ -v14 & (v12 ^ (unsigned int)&v15)) + 0x20);
    a1[1] = 9;
    sub_B8ACC(a1);
    return v9;
  }
  return a2 == a1 || sub_B89E4((int)a1, (int)a2) != 0;
}
