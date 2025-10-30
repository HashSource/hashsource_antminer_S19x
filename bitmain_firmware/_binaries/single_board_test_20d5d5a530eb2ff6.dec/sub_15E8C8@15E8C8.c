bool __fastcall sub_15E8C8(const char *a1, size_t a2, int a3, int a4, int a5, _DWORD *a6, int a7, _DWORD *a8)
{
  int v11; // r0
  int v12; // r7
  _BOOL4 v13; // r9
  _DWORD *v14; // r6
  int v15; // r11
  signed int v16; // r3
  signed int v17; // r7
  int v18; // r0
  int v19; // r1
  unsigned int v20; // r9
  int v21; // r8
  unsigned int v22; // r2
  unsigned int v23; // r1
  signed int v24; // r2
  _BYTE *v26; // r0
  char *v27; // lr
  char v28; // t1
  int v29; // [sp+8h] [bp-6Ch]
  int v30; // [sp+Ch] [bp-68h]
  int v31; // [sp+18h] [bp-5Ch]
  _BYTE v34[3]; // [sp+2Ch] [bp-48h] BYREF
  char v35; // [sp+2Fh] [bp-45h] BYREF
  _DWORD v36[17]; // [sp+30h] [bp-44h] BYREF

  v11 = sub_D8C78((int)a6);
  if ( v11 < 0 )
    return 0;
  v12 = v11;
  v29 = sub_DCB64();
  if ( !v29 )
    return 0;
  if ( a1 )
  {
    if ( a2 == -1 )
      a2 = strlen(a1);
  }
  else
  {
    a2 = 0;
    a1 = &byte_1A4198;
  }
  v13 = sub_DC8C4(v29, a1, a2, a6, 0);
  if ( !v13 )
    goto LABEL_53;
  v14 = (_DWORD *)sub_DCB64();
  if ( !v14 )
  {
    v13 = 0;
    sub_DCA8C(v29);
    return v13;
  }
  if ( !a7 )
  {
LABEL_59:
    v13 = 1;
    sub_DCA8C((int)v14);
    sub_DCA8C(v29);
    return v13;
  }
  v15 = v12;
  v31 = 1;
  while ( 1 )
  {
    v34[2] = BYTE1(v31);
    v35 = v31;
    v16 = a7;
    v34[0] = HIBYTE(v31);
    v34[1] = BYTE2(v31);
    if ( a7 >= v15 )
      v16 = v15;
    v17 = v16;
    v18 = sub_DCB90((int)v14, v29);
    if ( !v18 )
    {
LABEL_52:
      v13 = v18;
      sub_DCA8C((int)v14);
LABEL_53:
      sub_DCA8C(v29);
      return v13;
    }
    if ( !sub_DCA18(v14, a3, a4) || !sub_DCA18(v14, (int)v34, 4) || !sub_DCA28((int)v14, (int)v36, 0) )
      break;
    memcpy(a8, v36, v17);
    if ( a5 > 1 )
    {
      if ( (unsigned int)v17 <= 5 )
        v19 = 0;
      v20 = ((unsigned int)(v17 - 4) >> 2) + 1;
      if ( (unsigned int)v17 > 5 )
        v19 = 1;
      if ( ((unsigned __int8)a8 & 3) != 0 )
        v19 = 0;
      v30 = v19;
      v21 = 1;
      while ( 1 )
      {
        v18 = sub_DCB90((int)v14, v29);
        if ( !v18 )
          goto LABEL_52;
        if ( !sub_DCA18(v14, (int)v36, v15) || !sub_DCA28((int)v14, (int)v36, 0) )
          goto LABEL_61;
        if ( v17 <= 0 )
          goto LABEL_44;
        if ( v30 )
        {
          if ( (unsigned int)(v17 - 1) > 2 )
          {
            *a8 ^= v36[0];
            if ( (unsigned int)(v17 - 4) >> 2 )
            {
              a8[1] ^= v36[1];
              if ( (unsigned int)(v17 - 4) >> 2 != 1 )
              {
                a8[2] ^= v36[2];
                if ( (unsigned int)(v17 - 4) >> 2 != 2 )
                {
                  a8[3] ^= v36[3];
                  if ( (unsigned int)(v17 - 4) >> 2 != 3 )
                  {
                    a8[4] ^= v36[4];
                    if ( (unsigned int)(v17 - 4) >> 2 != 4 )
                    {
                      a8[5] ^= v36[5];
                      if ( (unsigned int)(v17 - 4) >> 2 != 5 )
                      {
                        a8[6] ^= v36[6];
                        if ( (unsigned int)(v17 - 4) >> 2 != 6 )
                        {
                          a8[7] ^= v36[7];
                          if ( (unsigned int)(v17 - 4) >> 2 != 7 )
                          {
                            a8[8] ^= v36[8];
                            if ( (unsigned int)(v17 - 4) >> 2 != 8 )
                            {
                              a8[9] ^= v36[9];
                              if ( (unsigned int)(v17 - 4) >> 2 != 9 )
                              {
                                a8[10] ^= v36[10];
                                if ( (unsigned int)(v17 - 4) >> 2 != 10 )
                                {
                                  a8[11] ^= v36[11];
                                  if ( (unsigned int)(v17 - 4) >> 2 != 11 )
                                  {
                                    a8[12] ^= v36[12];
                                    if ( (unsigned int)(v17 - 4) >> 2 != 12 )
                                    {
                                      a8[13] ^= v36[13];
                                      if ( (unsigned int)(v17 - 4) >> 2 != 13 )
                                      {
                                        a8[14] ^= v36[14];
                                        if ( (unsigned int)(v17 - 4) >> 2 != 14 )
                                          a8[15] ^= v36[15];
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
            v22 = v20;
            if ( v17 == 4 * v20 )
              goto LABEL_44;
          }
          else
          {
            v22 = 0;
          }
          v23 = v22 * 4 + 1;
          LOBYTE(a8[v22]) ^= LOBYTE(v36[v22]);
          if ( v17 > (int)(v22 * 4 + 1) )
          {
            v24 = v22 * 4 + 2;
            *((_BYTE *)a8 + v23) ^= *((_BYTE *)v36 + v23);
            if ( v17 > v24 )
              *((_BYTE *)a8 + v24) ^= *((_BYTE *)v36 + v24);
          }
LABEL_44:
          if ( a5 == ++v21 )
            break;
        }
        else
        {
          v26 = a8;
          v27 = &v35;
          do
          {
            v28 = *++v27;
            *v26++ ^= v28;
          }
          while ( v26 != (char *)a8 + v17 );
          if ( a5 == ++v21 )
            break;
        }
      }
    }
    a8 = (_DWORD *)((char *)a8 + v17);
    ++v31;
    a7 -= v17;
    if ( !a7 )
      goto LABEL_59;
  }
LABEL_61:
  sub_DCA8C((int)v14);
  sub_DCA8C(v29);
  return 0;
}
