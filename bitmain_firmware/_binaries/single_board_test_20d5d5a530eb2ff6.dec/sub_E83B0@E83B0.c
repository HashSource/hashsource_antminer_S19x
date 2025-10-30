int __fastcall sub_E83B0(int a1, _BYTE *a2, _BYTE *a3, unsigned int a4)
{
  unsigned int v4; // r4
  __int64 v5; // r6
  _BYTE *v6; // r11
  unsigned __int64 v8; // r0
  bool v9; // zf
  _BYTE *v10; // r6
  _BYTE *v11; // r8
  unsigned int v12; // r4
  unsigned __int64 v13; // r2
  int result; // r0
  unsigned __int64 v15; // kr00_8
  __int64 v16; // r2
  _BYTE *v17; // lr
  __int64 v18; // r4
  int v19; // r12
  int v20; // r11
  __int64 v21; // r4
  __int64 v22; // r4
  unsigned int v23; // t1
  __int64 v24; // r2
  unsigned __int64 v25; // r6
  __int64 v26; // r6
  __int64 v27; // r2
  __int64 v28; // r4
  __int64 v29; // r0
  unsigned int v30; // r11
  int v31; // r12
  __int64 v32; // r0
  __int64 v33; // r2
  size_t v34; // r6
  __int64 v35; // r4
  bool v36; // cf
  char v37; // r3
  int v38; // r3
  unsigned int v39; // r3
  unsigned int v40; // r2
  size_t v41; // r3
  __int64 v42; // r4
  __int64 v43; // r0
  unsigned int v44; // r3
  unsigned int v45; // r1
  unsigned __int64 v46; // [sp+10h] [bp-34h]
  __int64 v47; // [sp+10h] [bp-34h]
  _BYTE *v48; // [sp+1Ch] [bp-28h]
  unsigned __int64 v49; // [sp+20h] [bp-24h]
  char v51; // [sp+2Ch] [bp-18h]
  unsigned __int64 v52; // [sp+30h] [bp-14h] BYREF
  __int64 v53; // [sp+38h] [bp-Ch]
  _BYTE v54[4]; // [sp+40h] [bp-4h] BYREF

  v4 = a4 >> 4;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v51 = a4;
  v8 = v5 + (a4 >> 4);
  v49 = v8;
  if ( !(a4 >> 4) )
    goto LABEL_5;
  v9 = HIDWORD(v8) == 0;
  if ( !HIDWORD(v8) )
    v9 = 1;
  if ( v9 && *(_DWORD *)(a1 + 16) )
  {
    v44 = (unsigned int)v8 >> 1;
    if ( (unsigned int)v8 >> 1 )
    {
      v45 = 0;
      do
      {
        v44 >>= 1;
        ++v45;
      }
      while ( v44 );
    }
    else
    {
      v45 = 0;
    }
    result = (int)sub_E778C((_DWORD *)a1, v45);
    if ( result )
    {
      (*(void (__fastcall **)(_BYTE *, _BYTE *, unsigned int, _DWORD, int, int, _DWORD, int))(a1 + 16))(
        a2,
        v6,
        v4,
        *(_DWORD *)(a1 + 8),
        *(_DWORD *)(a1 + 80) + 1,
        a1 + 120,
        *(_DWORD *)(a1 + 64),
        a1 + 136);
      v34 = v51 & 0xF;
      if ( (v51 & 0xF) == 0 )
        goto LABEL_15;
      goto LABEL_17;
    }
  }
  else
  {
LABEL_5:
    v46 = v5 + 1;
    if ( v8 < v5 + 1 )
    {
LABEL_14:
      v34 = v51 & 0xF;
      if ( (v51 & 0xF) == 0 )
      {
LABEL_15:
        result = 1;
        *(_QWORD *)(a1 + 80) = v49;
        return result;
      }
LABEL_17:
      v47 = *(_QWORD *)(a1 + 128);
      v35 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 120) ^= *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 128) = v47 ^ v35;
      (*(void (__fastcall **)(int, unsigned __int64 *, _DWORD))a1)(a1 + 120, &v52, *(_DWORD *)(a1 + 8));
      v36 = v6 >= a2 + 4;
      if ( v6 < a2 + 4 )
        v36 = a2 >= v6 + 4;
      v37 = v36;
      if ( v34 <= 5 )
        v37 = 0;
      v38 = v37 & 1;
      if ( (((unsigned __int8)v6 | (unsigned __int8)a2) & 3) != 0 )
        v38 = 0;
      if ( !v38 )
      {
        *v6 = v52 ^ *a2;
        if ( v34 != 1 )
        {
          v6[1] = BYTE1(v52) ^ a2[1];
          if ( v34 != 2 )
          {
            v6[2] = BYTE2(v52) ^ a2[2];
            if ( v34 != 3 )
            {
              v6[3] = BYTE3(v52) ^ a2[3];
              if ( v34 != 4 )
              {
                v6[4] = BYTE4(v52) ^ a2[4];
                if ( v34 > 5 )
                {
                  v6[5] = BYTE5(v52) ^ a2[5];
                  if ( v34 > 6 )
                  {
                    v6[6] = BYTE6(v52) ^ a2[6];
                    if ( v34 != 7 )
                    {
                      v6[7] = HIBYTE(v52) ^ a2[7];
                      if ( v34 != 8 )
                      {
                        v6[8] = v53 ^ a2[8];
                        if ( v34 != 9 )
                        {
                          v6[9] = BYTE1(v53) ^ a2[9];
                          if ( v34 != 10 )
                          {
                            v6[10] = BYTE2(v53) ^ a2[10];
                            if ( v34 != 11 )
                            {
                              v6[11] = BYTE3(v53) ^ a2[11];
                              if ( v34 != 12 )
                              {
                                v6[12] = BYTE4(v53) ^ a2[12];
                                if ( v34 != 13 )
                                {
                                  v6[13] = BYTE5(v53) ^ a2[13];
                                  if ( v34 == 15 )
                                    v6[14] = BYTE6(v53) ^ a2[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_36;
      }
      v39 = 4 * (((v34 - 4) >> 2) + 1);
      if ( v34 - 1 <= 2 )
      {
        v39 = 0;
      }
      else
      {
        *(_DWORD *)v6 = *(_DWORD *)a2 ^ v52;
        if ( (v34 - 4) >> 2 )
        {
          *((_DWORD *)v6 + 1) = HIDWORD(v52) ^ *((_DWORD *)a2 + 1);
          if ( (v34 - 4) >> 2 != 1 )
          {
            *((_DWORD *)v6 + 2) = v53 ^ *((_DWORD *)a2 + 2);
            if ( (v34 - 4) >> 2 != 2 )
              *((_DWORD *)v6 + 3) = HIDWORD(v53) ^ *((_DWORD *)a2 + 3);
          }
        }
        if ( v34 == v39 )
          goto LABEL_36;
      }
      v40 = v39 + 1;
      v6[v39] = *((_BYTE *)&v52 + v39) ^ a2[v39];
      if ( v34 > v39 + 1 )
      {
        v41 = v39 + 2;
        v6[v40] = *((_BYTE *)&v52 + v40) ^ a2[v40];
        if ( v34 > v41 )
          v6[v41] = *((_BYTE *)&v52 + v41) ^ a2[v41];
      }
LABEL_36:
      v52 = 0;
      v53 = 0;
      memcpy(&v52, a2, v34);
      v54[v34 - 16] = 0x80;
      v42 = v53;
      v43 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) ^= v52;
      *(_QWORD *)(a1 + 144) = v43 ^ v42;
      goto LABEL_15;
    }
    v10 = a3 + 16;
    v11 = a2 + 16;
    while ( 1 )
    {
      if ( (v46 & 1) != 0 )
      {
        v12 = 0;
      }
      else
      {
        v13 = v46;
        v12 = 0;
        do
        {
          v13 >>= 1;
          ++v12;
        }
        while ( (v13 & 1) == 0 );
      }
      result = (int)sub_E778C((_DWORD *)a1, v12);
      if ( !result )
        break;
      v15 = v46;
      v16 = *(_QWORD *)result;
      v17 = v11;
      v18 = *(_QWORD *)(a1 + 120);
      __pld(v11 + 16);
      a2 = v11;
      v46 = v15 + 1;
      HIDWORD(v16) ^= HIDWORD(v18);
      v19 = HIDWORD(v16);
      LODWORD(v16) = v18 ^ v16;
      v20 = v16;
      v21 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = v16;
      v11 += 16;
      v48 = v10;
      v22 = v21 ^ *(_QWORD *)(result + 8);
      *(_QWORD *)(a1 + 128) = v22;
      v23 = *((_DWORD *)v17 - 4);
      v17 -= 16;
      v24 = *((_QWORD *)v17 + 1);
      v52 = __PAIR64__(*((_DWORD *)v17 + 1), v23);
      v53 = v24;
      v25 = v52;
      LODWORD(v52) = v20 ^ v23;
      HIDWORD(v52) ^= v19;
      *(_QWORD *)(a1 + 136) ^= v25;
      v26 = *(_QWORD *)(a1 + 144);
      v27 = v24 ^ v22;
      v28 = v53;
      v53 = v27;
      LODWORD(v27) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 144) = v26 ^ v28;
      (*(void (__fastcall **)(unsigned __int64 *, unsigned __int64 *, _DWORD))a1)(&v52, &v52, v27);
      v29 = *(_QWORD *)(a1 + 120);
      HIDWORD(v28) = v48;
      v30 = v52 ^ v29;
      v31 = HIDWORD(v52) ^ HIDWORD(v29);
      v32 = *(_QWORD *)(a1 + 128);
      v10 = v48 + 16;
      v33 = v53;
      __pld(v48 + 16);
      v52 = __PAIR64__(v31, v30);
      v53 = v33 ^ v32;
      *(_DWORD *)(HIDWORD(v28) - 12) = v31;
      *(_QWORD *)(HIDWORD(v28) - 8) = v33 ^ v32;
      *(_DWORD *)(HIDWORD(v28) - 16) = v30;
      if ( v49 < v46 )
      {
        v6 = v48;
        goto LABEL_14;
      }
    }
  }
  return result;
}
