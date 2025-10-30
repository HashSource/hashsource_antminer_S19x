int __fastcall sub_166530(int a1, int a2, const void *a3, signed int a4, int a5, int a6, _DWORD *a7, _DWORD *a8)
{
  _DWORD *v8; // r5
  int v11; // r7
  _DWORD *v12; // r3
  int v13; // r0
  int v14; // r8
  int v15; // r9
  signed int v16; // r6
  int v17; // r4
  char *v18; // r6
  _BYTE *v19; // r7
  int v21; // r7
  int v22; // r8
  int v23; // r5
  _BYTE *v24; // r0
  int *v25; // r0
  bool v26; // cf
  char v27; // r3
  int v28; // r3
  unsigned int v29; // r3
  unsigned int v30; // r12
  unsigned int v31; // r3
  int v32; // r10
  unsigned int v33; // lr
  unsigned int v34; // r3
  int v35; // r8
  unsigned int v36; // lr
  unsigned int v37; // r4
  char *v38; // r2
  int v39; // r0
  int v40; // r1
  int v41; // r0
  int v42; // r1
  _BYTE *v43; // r4
  char *v44; // r1
  char *v45; // r1
  _BYTE *v46; // r4
  int v47; // r2
  int v48; // t1
  int v49; // t1
  int v50; // r3
  int v51; // r10
  _BOOL4 v52; // r3
  unsigned int v53; // r3
  int v54; // r2
  int v55; // r1
  int v56; // r2
  char *v57; // r1
  char *v58; // r0
  char v59; // t1
  char *v60; // r1
  char v61; // t1
  char *srca; // [sp+8h] [bp-54h]
  unsigned int v64; // [sp+Ch] [bp-50h]
  _BYTE *v65; // [sp+10h] [bp-4Ch]
  int *v66; // [sp+14h] [bp-48h] BYREF
  _DWORD v67[17]; // [sp+18h] [bp-44h] BYREF
  _DWORD *v68; // [sp+8Ch] [bp+30h]

  v8 = a7;
  v11 = a2 - 1;
  if ( !a7 )
    v8 = sub_D93D8();
  v12 = a8;
  if ( !a8 )
    v12 = v8;
  v68 = v12;
  v13 = sub_D8C78((int)v8);
  v14 = 2 * v13;
  v15 = v13;
  v16 = v11 - 2 * v13;
  if ( v16 <= a4 )
  {
    sub_D0048(4, 154, 110, (int)"crypto/rsa/rsa_oaep.c", 62);
    return 0;
  }
  else if ( v11 <= v14 )
  {
    sub_D0048(4, 154, 120, (int)"crypto/rsa/rsa_oaep.c", 68);
    return 0;
  }
  else
  {
    v17 = 0;
    v64 = v13 + 1 + a1;
    *(_BYTE *)a1 = 0;
    if ( sub_D18F0(a5, a6, v64, 0, v8, 0)
      && (v21 = v11 - a4,
          v22 = v21 - v14,
          memset((void *)(v64 + v15), 0, v22 - 1),
          v23 = a1 + 1,
          *(_BYTE *)(v22 + v64 + v15 - 1) = 1,
          memcpy((void *)(v21 - v15 + v64), a3, a4),
          sub_F497C(a1 + 1, v15) > 0) )
    {
      v18 = (char *)(v16 + v15);
      v24 = CRYPTO_malloc(v18);
      v19 = v24;
      if ( v24 )
      {
        if ( sub_166460((int)v24, (int)v18, a1 + 1, v15, v68) >= 0 )
        {
          if ( (int)v18 > 0 )
          {
            v25 = (int *)v64;
            v26 = v64 >= (unsigned int)(v19 + 4);
            if ( v64 < (unsigned int)(v19 + 4) )
              v26 = (unsigned int)v19 >= v15 + 5 + a1;
            v27 = v26;
            if ( (unsigned int)v18 <= 6 )
              v27 = 0;
            v28 = v27 & 1;
            if ( (((unsigned __int8)v64 | (unsigned __int8)v19) & 3) != 0 )
              v28 = 0;
            if ( v28 )
            {
              v29 = (unsigned int)(v18 - 4) >> 2;
              v30 = v29 + 1;
              v31 = v29 - 8;
              v32 = 4 * v30;
              if ( v31 > 0xFFFFFFF6 )
              {
                v36 = 0;
                v44 = (char *)v64;
                v43 = v19;
              }
              else
              {
                v33 = v31 & 0xFFFFFFF8;
                v34 = v64 + 32;
                v35 = 0;
                v36 = v33 + 8;
                v37 = v64 + 32;
                v38 = v19 + 32;
                do
                {
                  v39 = *((_DWORD *)v38 - 8);
                  v35 += 8;
                  v40 = *(_DWORD *)(v34 - 32);
                  __pld((void *)(v34 + 48));
                  srca = (char *)v34;
                  v34 += 32;
                  v65 = v38;
                  *(_DWORD *)(v37 - 32) = v40 ^ v39;
                  v38 += 32;
                  v41 = *((_DWORD *)v38 - 15);
                  v42 = *(_DWORD *)(v34 - 60);
                  v66 = (int *)v37;
                  v37 += 32;
                  *(_DWORD *)(v37 - 60) = v42 ^ v41;
                  *(_DWORD *)(v37 - 56) = *(_DWORD *)(v34 - 56) ^ *((_DWORD *)v38 - 14);
                  *(_DWORD *)(v37 - 52) = *(_DWORD *)(v34 - 52) ^ *((_DWORD *)v38 - 13);
                  *(_DWORD *)(v37 - 48) = *(_DWORD *)(v34 - 48) ^ *((_DWORD *)v38 - 12);
                  *(_DWORD *)(v37 - 44) = *(_DWORD *)(v34 - 44) ^ *((_DWORD *)v38 - 11);
                  *(_DWORD *)(v37 - 40) = *(_DWORD *)(v34 - 40) ^ *((_DWORD *)v38 - 10);
                  *(_DWORD *)(v37 - 36) = *(_DWORD *)(v34 - 36) ^ *((_DWORD *)v38 - 9);
                }
                while ( v35 != v36 );
                v25 = v66;
                v43 = v65;
                v44 = srca;
              }
              v45 = v44 - 4;
              v46 = v43 - 4;
              do
              {
                v48 = *((_DWORD *)v45 + 1);
                v45 += 4;
                v47 = v48;
                ++v36;
                v49 = *((_DWORD *)v46 + 1);
                v46 += 4;
                *v25++ = v49 ^ v47;
              }
              while ( v36 < v30 );
              if ( v18 != (char *)v32 )
              {
                v50 = v32 + 1;
                *(_BYTE *)(v64 + 4 * v30) ^= v19[4 * v30];
                if ( (int)v18 > v32 + 1 )
                {
                  v51 = v32 + 2;
                  *(_BYTE *)(v64 + v50) ^= v19[v50];
                  if ( (int)v18 > v51 )
                    *(_BYTE *)(v64 + v51) ^= v19[v51];
                }
              }
            }
            else
            {
              v57 = (char *)v64;
              v58 = v19 - 1;
              do
              {
                v59 = *++v58;
                *v57++ ^= v59;
              }
              while ( v57 != &v18[v64] );
            }
          }
          if ( sub_166460((int)v67, v15, v64, (int)v18, v68) < 0 )
          {
            v17 = 0;
          }
          else
          {
            if ( v15 > 0 )
            {
              v52 = (unsigned int)v15 > 5;
              if ( (v23 & 3) != 0 )
                v52 = 0;
              if ( v52 )
              {
                v53 = ((unsigned int)(v15 - 4) >> 2) + 1;
                *(_DWORD *)(a1 + 1) ^= v67[0];
                v54 = 4 * v53;
                if ( (unsigned int)(v15 - 4) >> 2 )
                {
                  *(_DWORD *)(a1 + 5) ^= v67[1];
                  if ( (unsigned int)(v15 - 4) >> 2 != 1 )
                  {
                    *(_DWORD *)(a1 + 9) ^= v67[2];
                    if ( (unsigned int)(v15 - 4) >> 2 != 2 )
                    {
                      *(_DWORD *)(a1 + 13) ^= v67[3];
                      if ( (unsigned int)(v15 - 4) >> 2 != 3 )
                      {
                        *(_DWORD *)(a1 + 17) ^= v67[4];
                        if ( (unsigned int)(v15 - 4) >> 2 != 4 )
                        {
                          *(_DWORD *)(a1 + 21) ^= v67[5];
                          if ( (unsigned int)(v15 - 4) >> 2 != 5 )
                          {
                            *(_DWORD *)(a1 + 25) ^= v67[6];
                            if ( (unsigned int)(v15 - 4) >> 2 != 6 )
                            {
                              *(_DWORD *)(a1 + 29) ^= v67[7];
                              if ( (unsigned int)(v15 - 4) >> 2 != 7 )
                              {
                                *(_DWORD *)(a1 + 33) ^= v67[8];
                                if ( (unsigned int)(v15 - 4) >> 2 != 8 )
                                {
                                  *(_DWORD *)(a1 + 37) ^= v67[9];
                                  if ( (unsigned int)(v15 - 4) >> 2 != 9 )
                                  {
                                    *(_DWORD *)(a1 + 41) ^= v67[10];
                                    if ( (unsigned int)(v15 - 4) >> 2 != 10 )
                                    {
                                      *(_DWORD *)(a1 + 45) ^= v67[11];
                                      if ( (unsigned int)(v15 - 4) >> 2 != 11 )
                                      {
                                        *(_DWORD *)(a1 + 49) ^= v67[12];
                                        if ( (unsigned int)(v15 - 4) >> 2 != 12 )
                                        {
                                          *(_DWORD *)(a1 + 53) ^= v67[13];
                                          if ( (unsigned int)(v15 - 4) >> 2 != 13 )
                                          {
                                            *(_DWORD *)(a1 + 57) ^= v67[14];
                                            if ( (unsigned int)(v15 - 4) >> 2 != 14 )
                                              *(_DWORD *)(a1 + 61) ^= v67[15];
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
                }
                if ( v15 != v54 )
                {
                  v55 = v54 + 1;
                  *(_BYTE *)(v23 + 4 * v53) ^= LOBYTE(v67[v53]);
                  if ( v15 > v54 + 1 )
                  {
                    v56 = v54 + 2;
                    *(_BYTE *)(v23 + v55) ^= *((_BYTE *)v67 + v55);
                    if ( v15 > v56 )
                      *(_BYTE *)(v23 + v56) ^= *((_BYTE *)v67 + v56);
                  }
                }
              }
              else
              {
                v60 = (char *)&v66 + 3;
                do
                {
                  v61 = *++v60;
                  *(_BYTE *)v23++ ^= v61;
                }
                while ( v64 != v23 );
              }
            }
            v17 = 1;
          }
        }
      }
      else
      {
        sub_D0048(4, 154, 65, (int)"crypto/rsa/rsa_oaep.c", 87);
        v17 = 0;
      }
    }
    else
    {
      v18 = 0;
      v19 = 0;
      v17 = 0;
    }
    sub_E07F8(v67, 0x40u);
    sub_E0758(v19, (size_t)v18, (size_t)"crypto/rsa/rsa_oaep.c");
    return v17;
  }
}
