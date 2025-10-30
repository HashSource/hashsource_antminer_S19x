int __fastcall sub_13FF6C(
        int *a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        const void *a5,
        unsigned int a6,
        void *a7,
        _DWORD *a8,
        int *a9,
        _DWORD *a10)
{
  int v10; // r9
  unsigned int v11; // r2
  bool v12; // zf
  const void *v13; // r6
  bool v17; // cf
  int v18; // r7
  int ***v19; // r0
  int ***v20; // r11
  int **v21; // r1
  int **v22; // r1
  int *v23; // r8
  int **v24; // r1
  int **v25; // r1
  int **v26; // r5
  int **v27; // r1
  int **v28; // r1
  int **v29; // r1
  int *v30; // r10
  int **v31; // r1
  int v32; // r7
  int *v33; // r0
  __int64 v34; // r0
  int v35; // r7
  int v36; // r2
  char v37; // r3
  int v38; // r2
  _BYTE *v39; // r1
  char v40; // r3
  unsigned int v41; // r5
  unsigned int v42; // r3
  int v43; // r5
  char *v44; // r11
  _BOOL4 v45; // r0
  int v46; // r5
  int v47; // r6
  char v48; // r3
  int v49; // r2
  _BYTE *v50; // r1
  char v51; // r3
  int *v52; // r0
  _BOOL4 v53; // r0
  int v54; // r3
  int v55; // r6
  int *v56; // r0
  int v57; // r7
  int *v58; // r0
  int v59; // r0
  int v60; // r3
  bool v61; // zf
  _DWORD *v62; // [sp+Ch] [bp-D8h]
  int **v63; // [sp+10h] [bp-D4h]
  int *v64; // [sp+14h] [bp-D0h]
  int v65; // [sp+18h] [bp-CCh]
  int v66; // [sp+1Ch] [bp-C8h]
  int *v67; // [sp+28h] [bp-BCh]
  int ***v68; // [sp+2Ch] [bp-B8h]
  int *v69; // [sp+30h] [bp-B4h]
  int v70; // [sp+34h] [bp-B0h]
  int **v71; // [sp+38h] [bp-ACh]
  int v72; // [sp+3Ch] [bp-A8h]
  int **v73; // [sp+40h] [bp-A4h]
  int *v74; // [sp+44h] [bp-A0h]
  int v75; // [sp+48h] [bp-9Ch]
  unsigned int v76; // [sp+50h] [bp-94h]
  _BYTE dest[32]; // [sp+60h] [bp-84h] BYREF
  int v78; // [sp+80h] [bp-64h] BYREF
  int v79; // [sp+84h] [bp-60h]
  int v80; // [sp+88h] [bp-5Ch]
  int v81; // [sp+8Ch] [bp-58h]
  int v82; // [sp+90h] [bp-54h]
  int v83; // [sp+94h] [bp-50h]
  int v84; // [sp+98h] [bp-4Ch]
  int v85; // [sp+9Ch] [bp-48h]
  _BYTE v86[32]; // [sp+A0h] [bp-44h] BYREF
  _DWORD v87[9]; // [sp+C0h] [bp-24h] BYREF

  v10 = a3 >> 3;
  v11 = (a3 >> 3) & 0xFFFFFFF7;
  v12 = v11 == 20;
  if ( v11 != 20 )
    v12 = v10 == 32;
  v62 = a4;
  v13 = a5;
  if ( !v12 )
    return 0;
  if ( a4 )
  {
    v10 = sub_D8C78((int)a4);
  }
  else if ( v10 == 20 )
  {
    v62 = sub_D93D8();
  }
  else if ( v10 == 28 )
  {
    v62 = sub_D93E4();
  }
  else
  {
    v62 = sub_D93F0();
  }
  v17 = a2 >= 0x200;
  if ( a2 < 0x200 )
    v18 = 512;
  else
    v18 = a2 + 63;
  if ( v17 )
    v18 &= 0xFFFFFFC0;
  if ( a5 )
  {
    if ( v10 > a6 )
    {
      sub_D0048(10, 125, 110, (int)"crypto/dsa/dsa_gen.c", 85);
      return 0;
    }
    memcpy(dest, a5, v10);
  }
  v64 = sub_B9478();
  if ( v64 && (v19 = (int ***)sub_130B08(), (v20 = v19) != 0) )
  {
    sub_130BC0((int)v19);
    v71 = sub_130CCC(v20, v21);
    v23 = (int *)sub_130CCC(v20, v22);
    v63 = sub_130CCC(v20, v24);
    v26 = sub_130CCC(v20, v25);
    v74 = (int *)sub_130CCC(v20, v27);
    v73 = sub_130CCC(v20, v28);
    v30 = (int *)sub_130CCC(v20, v29);
    v67 = (int *)sub_130CCC(v20, v31);
    if ( v67 )
    {
      v32 = v18 - 1;
      v75 = v32;
      v33 = (int *)sub_B81FC();
      if ( sub_BA5F8((void **)v67, v33, v32) )
      {
        v34 = 3435973837LL * (unsigned int)v32;
        v76 = ((unsigned int)(v10 - 4) >> 2) + 1;
        v70 = 0;
        v35 = v10 - 1;
        v36 = 0;
        v65 = v10 - 2;
        v68 = v20;
        v66 = HIDWORD(v34) >> 7;
        v69 = (int *)v26;
        while ( sub_134EE0(a10, 0, v36) && (v13 || sub_F497C((int)dest, v10) > 0) )
        {
          memcpy(v86, dest, v10);
          memcpy(v87, dest, v10);
          if ( v35 >= 0 )
          {
            v37 = v86[v35] + 1;
            v86[v35] = v37;
            if ( !v37 )
            {
              v38 = v10 - 1;
              v39 = &v86[v65];
              do
              {
                v17 = v38-- != 0;
                if ( !v17 )
                  break;
                v40 = *v39 + 1;
                *v39-- = v40;
              }
              while ( !v40 );
            }
          }
          v41 = 0;
          if ( !sub_D18F0((int)dest, v10, (int)&v78, 0, v62, 0) || !sub_D18F0((int)v86, v10, (int)v87, 0, v62, 0) )
            break;
          if ( v10 > 0 )
          {
            if ( (unsigned int)v35 <= 2 )
              goto LABEL_40;
            v78 ^= v87[0];
            if ( (unsigned int)(v10 - 4) >> 2 )
            {
              v79 ^= v87[1];
              if ( (unsigned int)(v10 - 4) >> 2 != 1 )
              {
                v80 ^= v87[2];
                if ( (unsigned int)(v10 - 4) >> 2 != 2 )
                {
                  v81 ^= v87[3];
                  if ( (unsigned int)(v10 - 4) >> 2 != 3 )
                  {
                    v82 ^= v87[4];
                    if ( (unsigned int)(v10 - 4) >> 2 != 4 )
                    {
                      v83 ^= v87[5];
                      if ( (unsigned int)(v10 - 4) >> 2 != 5 )
                      {
                        v84 ^= v87[6];
                        if ( (unsigned int)(v10 - 4) >> 2 != 6 )
                          v85 ^= v87[7];
                      }
                    }
                  }
                }
              }
            }
            v41 = 4 * v76;
            if ( v10 != 4 * v76 )
            {
LABEL_40:
              v42 = v41 + 1;
              *((_BYTE *)&v78 + v41) ^= LOBYTE(v87[v41 / 4]);
              if ( v10 > (int)(v41 + 1) )
              {
                v43 = v41 + 2;
                *((_BYTE *)&v87[-16] + v42) ^= *((_BYTE *)v87 + v42);
                if ( v10 > v43 )
                  *((_BYTE *)&v78 + v43) ^= *((_BYTE *)v87 + v43);
              }
            }
          }
          v44 = (char *)&v87[8] + v35;
          LOBYTE(v78) = v78 | 0x80;
          *((_BYTE *)&v78 + v35) |= 1u;
          if ( !sub_B8AEC(&v78, v10, v69) )
            break;
          v45 = sub_134F20(v69, 64, v68, v13 == 0, a10);
          if ( v45 > 0 )
          {
            if ( sub_134EE0(a10, 2, 0) && sub_134EE0(a10, 3, 0) )
            {
              v72 = 0;
LABEL_53:
              v46 = 0;
              v47 = 0;
              sub_B8930(v63, 0);
              while ( 1 )
              {
                if ( v35 >= 0 )
                {
                  v48 = *(v44 - 64) + 1;
                  *(v44 - 64) = v48;
                  if ( !v48 )
                  {
                    v49 = v10 - 1;
                    v50 = &v86[v65];
                    do
                    {
                      v17 = v49-- != 0;
                      if ( !v17 )
                        break;
                      v51 = *v50 + 1;
                      *v50-- = v51;
                    }
                    while ( !v51 );
                  }
                }
                if ( !sub_D18F0((int)v86, v10, (int)&v78, 0, v62, 0)
                  || !sub_B8AEC(&v78, v10, v71)
                  || !sub_BA5F8((void **)v71, (int *)v71, v46)
                  || !BN_add((int *)v63, (int *)v63, (int *)v71) )
                {
                  break;
                }
                ++v47;
                v46 += 8 * v10;
                if ( v66 < v47 )
                {
                  if ( !sub_B8C94((int *)v63, v75) )
                    goto LABEL_76;
                  if ( !sub_B89E4((int)v74, (int)v63) )
                    goto LABEL_76;
                  if ( !BN_add(v74, v74, v67) )
                    goto LABEL_76;
                  if ( !sub_BA234(v71, (int **)v69) )
                    goto LABEL_76;
                  if ( !sub_131220(0, v73, v74, v71, v68) )
                    goto LABEL_76;
                  v52 = (int *)sub_B81FC();
                  if ( !BN_sub((int *)v71, (int *)v73, v52) || !BN_sub(v30, v74, (int *)v71) )
                    goto LABEL_76;
                  if ( sub_B8354(v30, v67) >= 0 )
                  {
                    v53 = sub_134F20(v30, 64, v68, 1, a10);
                    if ( v53 > 0 )
                    {
                      v20 = v68;
                      if ( sub_134EE0(a10, 2, 1) )
                      {
                        v56 = (int *)sub_B81FC();
                        if ( BN_sub(v67, v30, v56) )
                        {
                          if ( sub_131220(v71, 0, v67, v69, v68)
                            && sub_B8930((int **)v67, 2)
                            && sub_B94F0((int)v64, (int **)v30, (int)v68) )
                          {
                            v57 = 2;
                            while ( BN_mod_exp_mont(v23, v67, v71, (int **)v30, v68, v64) )
                            {
                              if ( !sub_B86D8((int)v23) )
                              {
                                v55 = 0;
                                if ( !sub_134EE0(a10, 3, 1) )
                                  goto LABEL_77;
                                sub_B895C(a1[2]);
                                sub_B895C(a1[3]);
                                sub_B895C(a1[4]);
                                a1[2] = sub_B8A2C((int)v30);
                                a1[3] = sub_B8A2C((int)v69);
                                v59 = sub_B8A2C((int)v23);
                                v60 = a1[2];
                                a1[4] = v59;
                                if ( v60 )
                                {
                                  v61 = v59 == 0;
                                  if ( v59 )
                                    v61 = a1[3] == 0;
                                  if ( !v61 )
                                  {
                                    if ( a8 )
                                      *a8 = v72;
                                    if ( a9 )
                                      *a9 = v57;
                                    v55 = 1;
                                    if ( a7 )
                                    {
                                      v55 = 1;
                                      memcpy(a7, dest, v10);
                                    }
                                  }
                                }
                                else
                                {
                                  v55 = 0;
                                }
                                goto LABEL_78;
                              }
                              v58 = (int *)sub_B81FC();
                              if ( !BN_add(v67, v67, v58) )
                                goto LABEL_77;
                              ++v57;
                            }
                          }
                        }
                      }
                      goto LABEL_77;
                    }
                    if ( v53 )
                      goto LABEL_76;
                  }
                  v54 = ++v72;
                  if ( v72 == 4096 )
                    goto LABEL_46;
                  if ( sub_134EE0(a10, 0, v54) )
                    goto LABEL_53;
                  goto LABEL_76;
                }
              }
            }
            break;
          }
          if ( v45 )
            break;
LABEL_46:
          v13 = 0;
          v36 = ++v70;
        }
LABEL_76:
        v20 = v68;
      }
    }
  }
  else
  {
    v20 = 0;
  }
LABEL_77:
  v55 = 0;
LABEL_78:
  sub_130C74(v20);
  sub_130B5C((void **)v20);
  sub_B94B4(v64);
  return v55;
}
