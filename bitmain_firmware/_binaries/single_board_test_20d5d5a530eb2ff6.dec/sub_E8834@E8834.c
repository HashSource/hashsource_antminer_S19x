int __fastcall sub_E8834(int a1, _BYTE *a2, _BYTE *a3, unsigned int a4)
{
  unsigned int v4; // r4
  __int64 v5; // r6
  _BYTE *v6; // r11
  unsigned __int64 v8; // r0
  bool v9; // zf
  _BYTE *v10; // r4
  _BYTE *v11; // r8
  unsigned int v12; // r5
  unsigned __int64 v13; // r2
  int result; // r0
  unsigned __int64 v15; // kr00_8
  __int64 v16; // r2
  _BYTE *v17; // lr
  __int64 v18; // r6
  __int64 v19; // kr08_8
  __int64 v20; // r6
  void (__fastcall *v21)(__int64 *, __int64 *, _DWORD); // r4
  __int64 v22; // r6
  int v23; // t1
  __int64 v24; // r2
  __int64 v25; // r2
  int v26; // r12
  __int64 v27; // r2
  __int64 v28; // r6
  __int64 v29; // r0
  __int64 v30; // r2
  size_t v31; // r6
  __int64 v32; // r4
  bool v33; // cf
  char v34; // r3
  int v35; // r3
  unsigned int v36; // r3
  unsigned int v37; // r2
  size_t v38; // r3
  __int64 v39; // r4
  __int64 v40; // r0
  unsigned int v41; // r3
  unsigned int v42; // r1
  unsigned __int64 v43; // [sp+10h] [bp-3Ch]
  __int64 v44; // [sp+10h] [bp-3Ch]
  _BYTE *v45; // [sp+1Ch] [bp-30h]
  unsigned __int64 v46; // [sp+20h] [bp-2Ch]
  unsigned __int64 v47; // [sp+28h] [bp-24h]
  char v49; // [sp+34h] [bp-18h]
  __int64 v50; // [sp+38h] [bp-14h] BYREF
  __int64 v51; // [sp+40h] [bp-Ch]
  _BYTE v52[4]; // [sp+48h] [bp-4h] BYREF

  v4 = a4 >> 4;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v49 = a4;
  v8 = v5 + (a4 >> 4);
  v47 = v8;
  if ( !(a4 >> 4) )
    goto LABEL_5;
  v9 = HIDWORD(v8) == 0;
  if ( !HIDWORD(v8) )
    v9 = 1;
  if ( v9 && *(_DWORD *)(a1 + 16) )
  {
    v41 = (unsigned int)v8 >> 1;
    if ( (unsigned int)v8 >> 1 )
    {
      v42 = 0;
      do
      {
        v41 >>= 1;
        ++v42;
      }
      while ( v41 );
    }
    else
    {
      v42 = 0;
    }
    result = (int)sub_E778C((_DWORD *)a1, v42);
    if ( result )
    {
      (*(void (__fastcall **)(_BYTE *, _BYTE *, unsigned int, _DWORD, int, int, _DWORD, int))(a1 + 16))(
        a2,
        v6,
        v4,
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 80) + 1,
        a1 + 120,
        *(_DWORD *)(a1 + 64),
        a1 + 136);
      v31 = v49 & 0xF;
      if ( (v49 & 0xF) == 0 )
        goto LABEL_15;
      goto LABEL_17;
    }
  }
  else
  {
LABEL_5:
    v43 = v5 + 1;
    if ( v8 < v5 + 1 )
    {
LABEL_14:
      v31 = v49 & 0xF;
      if ( (v49 & 0xF) == 0 )
      {
LABEL_15:
        result = 1;
        *(_QWORD *)(a1 + 80) = v47;
        return result;
      }
LABEL_17:
      v44 = *(_QWORD *)(a1 + 128);
      v32 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 120) ^= *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 128) = v44 ^ v32;
      (*(void (__fastcall **)(int, __int64 *, _DWORD))a1)(a1 + 120, &v50, *(_DWORD *)(a1 + 8));
      v33 = v6 >= a2 + 4;
      if ( v6 < a2 + 4 )
        v33 = a2 >= v6 + 4;
      v34 = v33;
      if ( v31 <= 5 )
        v34 = 0;
      v35 = v34 & 1;
      if ( (((unsigned __int8)v6 | (unsigned __int8)a2) & 3) != 0 )
        v35 = 0;
      if ( !v35 )
      {
        *v6 = v50 ^ *a2;
        if ( v31 != 1 )
        {
          v6[1] = BYTE1(v50) ^ a2[1];
          if ( v31 != 2 )
          {
            v6[2] = BYTE2(v50) ^ a2[2];
            if ( v31 != 3 )
            {
              v6[3] = BYTE3(v50) ^ a2[3];
              if ( v31 != 4 )
              {
                v6[4] = BYTE4(v50) ^ a2[4];
                if ( v31 > 5 )
                {
                  v6[5] = BYTE5(v50) ^ a2[5];
                  if ( v31 > 6 )
                  {
                    v6[6] = BYTE6(v50) ^ a2[6];
                    if ( v31 != 7 )
                    {
                      v6[7] = HIBYTE(v50) ^ a2[7];
                      if ( v31 != 8 )
                      {
                        v6[8] = v51 ^ a2[8];
                        if ( v31 != 9 )
                        {
                          v6[9] = BYTE1(v51) ^ a2[9];
                          if ( v31 != 10 )
                          {
                            v6[10] = BYTE2(v51) ^ a2[10];
                            if ( v31 != 11 )
                            {
                              v6[11] = BYTE3(v51) ^ a2[11];
                              if ( v31 != 12 )
                              {
                                v6[12] = BYTE4(v51) ^ a2[12];
                                if ( v31 != 13 )
                                {
                                  v6[13] = BYTE5(v51) ^ a2[13];
                                  if ( v31 == 15 )
                                    v6[14] = BYTE6(v51) ^ a2[14];
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
      v36 = 4 * (((v31 - 4) >> 2) + 1);
      if ( v31 - 1 <= 2 )
      {
        v36 = 0;
      }
      else
      {
        *(_DWORD *)v6 = *(_DWORD *)a2 ^ v50;
        if ( (v31 - 4) >> 2 )
        {
          *((_DWORD *)v6 + 1) = HIDWORD(v50) ^ *((_DWORD *)a2 + 1);
          if ( (v31 - 4) >> 2 != 1 )
          {
            *((_DWORD *)v6 + 2) = v51 ^ *((_DWORD *)a2 + 2);
            if ( (v31 - 4) >> 2 != 2 )
              *((_DWORD *)v6 + 3) = HIDWORD(v51) ^ *((_DWORD *)a2 + 3);
          }
        }
        if ( v31 == v36 )
          goto LABEL_36;
      }
      v37 = v36 + 1;
      v6[v36] = *((_BYTE *)&v50 + v36) ^ a2[v36];
      if ( v31 > v36 + 1 )
      {
        v38 = v36 + 2;
        v6[v37] = *((_BYTE *)&v50 + v37) ^ a2[v37];
        if ( v31 > v38 )
          v6[v38] = *((_BYTE *)&v50 + v38) ^ a2[v38];
      }
LABEL_36:
      v50 = 0;
      v51 = 0;
      memcpy(&v50, v6, v31);
      v52[v31 - 16] = 0x80;
      v39 = v51;
      v40 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) ^= v50;
      *(_QWORD *)(a1 + 144) = v40 ^ v39;
      goto LABEL_15;
    }
    v10 = a3 + 16;
    v11 = a2 + 16;
    while ( 1 )
    {
      if ( (v43 & 1) != 0 )
      {
        v12 = 0;
      }
      else
      {
        v13 = v43;
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
      v15 = v43;
      v16 = *(_QWORD *)result;
      v17 = v11;
      v18 = *(_QWORD *)(a1 + 120);
      __pld(v11 + 16);
      a2 = v11;
      v43 = v15 + 1;
      v19 = v18 ^ v16;
      v20 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = v19;
      v11 += 16;
      v45 = v10;
      v21 = *(void (__fastcall **)(__int64 *, __int64 *, _DWORD))(a1 + 4);
      v22 = v20 ^ *(_QWORD *)(result + 8);
      *(_QWORD *)(a1 + 128) = v22;
      v23 = *((_DWORD *)v17 - 4);
      v17 -= 16;
      v24 = *((_QWORD *)v17 + 1);
      HIDWORD(v50) = *((_DWORD *)v17 + 1);
      LODWORD(v50) = v19 ^ v23;
      HIDWORD(v50) ^= HIDWORD(v19);
      v51 = v24 ^ v22;
      v21(&v50, &v50, *(_DWORD *)(a1 + 12));
      v25 = *(_QWORD *)(a1 + 120);
      v26 = HIDWORD(v50) ^ HIDWORD(v25);
      v10 = v45 + 16;
      v50 ^= v25;
      v46 = __PAIR64__(v26, v50);
      v27 = *(_QWORD *)(a1 + 136);
      v28 = v51 ^ *(_QWORD *)(a1 + 128);
      __pld(v45 + 16);
      v51 = v28;
      *(_QWORD *)(a1 + 136) = v46 ^ v27;
      v29 = v50;
      v30 = v51;
      *(_QWORD *)(a1 + 144) ^= v28;
      *((_QWORD *)v45 - 1) = v30;
      *((_QWORD *)v45 - 2) = v29;
      if ( v47 < v43 )
      {
        v6 = v45;
        goto LABEL_14;
      }
    }
  }
  return result;
}
