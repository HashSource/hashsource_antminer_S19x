void __fastcall sub_6DA14(int a1, int *a2, int a3)
{
  int v3; // r4
  _DWORD *v5; // r9
  int v6; // r10
  int v7; // r8
  int v8; // r4
  int v9; // r0
  int v10; // r3
  int v11; // r11
  int v12; // r4
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r5
  int v17; // r4
  int v18; // r11
  int v19; // r7
  int v20; // r8
  const char *v21; // r6
  const char *v22; // r0
  _BYTE *v23; // r0
  _BYTE *v24; // r4
  _DWORD *v25; // r3
  size_t v26; // r0
  size_t v27; // r4
  _DWORD *v28; // r2
  _DWORD *v29; // r0
  int v30; // r1
  void *v31; // r3
  _DWORD *v32; // r12
  bool v33; // zf
  _DWORD *v34; // lr
  int v35; // r2
  _DWORD *v36; // r2
  _BYTE *v37; // r1
  bool v38; // zf
  int v39; // r3
  _DWORD *v40; // r1
  _DWORD *v41; // r2
  size_t v42; // r0
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  int v45; // [sp+4h] [bp-9Ch]
  char *s; // [sp+8h] [bp-98h]
  int v47; // [sp+10h] [bp-90h]
  int v48; // [sp+14h] [bp-8Ch]
  int v49; // [sp+18h] [bp-88h]
  int v51; // [sp+24h] [bp-7Ch]
  int v52; // [sp+28h] [bp-78h]
  int v53; // [sp+2Ch] [bp-74h]
  int v54; // [sp+30h] [bp-70h]
  int v55; // [sp+34h] [bp-6Ch]
  size_t v56; // [sp+44h] [bp-5Ch] BYREF
  void *ptr; // [sp+48h] [bp-58h] BYREF
  size_t v58; // [sp+4Ch] [bp-54h]
  _DWORD v59[4]; // [sp+50h] [bp-50h] BYREF
  void *v60; // [sp+60h] [bp-40h] BYREF
  _BYTE *v61; // [sp+64h] [bp-3Ch]
  _DWORD v62[4]; // [sp+68h] [bp-38h] BYREF

  if ( !*(_DWORD *)(a3 + 180) )
  {
    v3 = *(_DWORD *)(a3 + 36);
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 160) + 2308) )
    {
      v60 = 0;
      v53 = *a2;
      v54 = a2[1];
      sub_2ADCFC(v3, sub_6C76C, &v60);
      if ( v60 )
      {
        v5 = *(_DWORD **)(*(_DWORD *)(v3 + 160) + 2308);
        v49 = *((_DWORD *)v60 + 7);
        if ( v5 )
        {
          v6 = a3;
          do
          {
            v16 = v5 + 2;
            v17 = sub_2A789C(*(_DWORD *)(v6 + 36)) / 8;
            v18 = 2 * v17;
            v47 = sub_1B7250(v6);
            v19 = 3 * v17;
            v20 = sub_1780B4(v47);
            v21 = (char *)v5 + 3 * v17 + 8;
            v45 = sub_3385F0(v21, 0, v5[1] - 3 * v17);
            if ( v45 )
            {
              v7 = *(_DWORD *)(v20 + 152);
              s = (char *)(v45 + 1);
              v51 = sub_15AEA8(v5 + 2, v7);
              v8 = v49 - sub_15AEA8((char *)v5 + v17 + 8, v7);
              v52 = v8;
              v9 = sub_15AEA8((char *)v5 + v18 + 8, v7);
              v11 = v9;
              if ( v9 )
                v10 = v8;
              v12 = v5[1];
              if ( v9 )
                v11 = v9 + v10;
              v48 = (char *)v16 + v12 - s;
              v13 = sub_3385F0(s, 0, v48);
              if ( v13 )
              {
                v14 = v13 + 1;
                v55 = v14;
                if ( v14 )
                {
                  if ( (_DWORD *)sub_3385F0(v14, 0, v48) == (_DWORD *)((char *)v16 + v12 - 1) )
                  {
                    v60 = v62;
                    v23 = (_BYTE *)strlen(s);
                    v24 = v23;
                    ptr = v23;
                    if ( (unsigned int)v23 > 0xF )
                    {
                      v43 = (_DWORD *)sub_33B2BC(&v60, &ptr, 0);
                      v60 = v43;
                      v62[0] = ptr;
                    }
                    else
                    {
                      if ( v23 == (_BYTE *)1 )
                      {
                        v25 = v62;
                        LOBYTE(v62[0]) = *(_BYTE *)(v45 + 1);
                        goto LABEL_28;
                      }
                      if ( !v23 )
                      {
                        v25 = v62;
LABEL_28:
                        v61 = v24;
                        v24[(_DWORD)v25] = 0;
                        ptr = v59;
                        v26 = strlen(v21);
                        v27 = v26;
                        v56 = v26;
                        if ( v26 > 0xF )
                        {
                          v44 = (_DWORD *)sub_33B2BC(&ptr, &v56, 0);
                          ptr = v44;
                          v59[0] = v56;
                        }
                        else
                        {
                          if ( v26 == 1 )
                          {
                            v28 = v59;
                            LOBYTE(v59[0]) = *((_BYTE *)v5 + v19 + 8);
LABEL_31:
                            v58 = v27;
                            *((_BYTE *)v28 + v27) = 0;
                            v29 = (_DWORD *)sub_9836C(84);
                            v31 = v60;
                            v32 = v29;
                            v33 = v60 == v62;
                            *v29 = &unk_35D3DC;
                            v34 = v29 + 3;
                            v29[1] = v29 + 3;
                            if ( v33 )
                            {
                              v29 = (_DWORD *)v62[0];
                              v30 = v62[1];
                              v35 = v62[2];
                              v31 = (void *)v62[3];
                            }
                            else
                            {
                              v35 = v62[0];
                              v29[1] = v31;
                            }
                            if ( v33 )
                              v32[3] = v29;
                            else
                              v32[3] = v35;
                            if ( v33 )
                              v34[2] = v35;
                            v36 = ptr;
                            if ( v33 )
                              v34[1] = v30;
                            v37 = v61;
                            if ( v33 )
                              v34[3] = v31;
                            v38 = v36 == v59;
                            v61 = 0;
                            LOBYTE(v62[0]) = 0;
                            v32[2] = v37;
                            if ( v36 == v59 )
                            {
                              v29 = (_DWORD *)v59[0];
                              v37 = (_BYTE *)v59[1];
                              v36 = (_DWORD *)v59[2];
                              v39 = v59[3];
                            }
                            else
                            {
                              v39 = v59[0];
                            }
                            v32[7] = v32 + 9;
                            if ( v38 )
                              v32[12] = v39;
                            else
                              v32[9] = v39;
                            if ( v38 )
                            {
                              v32[9] = v29;
                              v32[11] = v36;
                            }
                            else
                            {
                              v32[7] = v36;
                            }
                            if ( v38 )
                              v32[10] = v37;
                            v40 = (_DWORD *)a2[1];
                            v32[15] = v11;
                            v41 = (_DWORD *)a2[2];
                            v32[13] = v51 + v52;
                            v32[17] = v55;
                            v32[14] = v47;
                            v42 = v58;
                            v60 = v32;
                            *v32 = &off_35D454;
                            v32[8] = v42;
                            *((_BYTE *)v32 + 64) = 0;
                            v32[18] = 0;
                            v32[19] = 0;
                            v32[20] = 0;
                            if ( v40 == v41 )
                            {
                              sub_6E384(a2);
                            }
                            else
                            {
                              if ( v40 )
                                *v40 = v32;
                              a2[1] = (int)(v40 + 1);
                            }
                            goto LABEL_15;
                          }
                          if ( !v26 )
                          {
                            v28 = v59;
                            goto LABEL_31;
                          }
                          v44 = v59;
                        }
                        memcpy(v44, v21, v27);
                        v27 = v56;
                        v28 = ptr;
                        goto LABEL_31;
                      }
                      v43 = v62;
                    }
                    memcpy(v43, s, (size_t)v24);
                    v24 = ptr;
                    v25 = v60;
                    goto LABEL_28;
                  }
                }
              }
              if ( dword_47AC88 > 0 )
              {
                v15 = sub_1B87A8(v6);
                sub_F43B4(&off_46D334, "corrupt probe argument when reading `%s'", v15);
              }
            }
            else if ( dword_47AC88 > 0 )
            {
              v22 = (const char *)sub_1B87A8(v6);
              sub_F43B4(&off_46D334, "corrupt probe name when reading `%s'", v22);
            }
LABEL_15:
            v5 = (_DWORD *)*v5;
          }
          while ( v5 );
        }
        if ( (a2[1] - *a2) >> 2 == (v54 - v53) >> 2 && dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "could not parse SystemTap probe(s) from inferior");
      }
      else if ( dword_47AC88 > 0 )
      {
        sub_F43B4(
          &off_46D334,
          "could not obtain base address for SystemTap section on objfile `%s'.",
          *(const char **)v3);
      }
    }
  }
}
