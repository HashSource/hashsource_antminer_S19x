int __fastcall sub_99260(_DWORD *a1, int *a2)
{
  int v2; // r3
  int v5; // r0
  int v6; // r11
  int v7; // r6
  unsigned int v8; // r7
  int v9; // r9
  int v10; // r3
  int result; // r0
  unsigned int v12; // r3
  unsigned int v13; // r2
  int v14; // r3
  unsigned int v15; // r8
  int v16; // r0
  unsigned __int8 *v17; // r3
  unsigned __int8 *v18; // r1
  int v19; // r6
  int v20; // lr
  int v21; // r2
  unsigned int v22; // r3
  unsigned int v23; // r3
  int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r3
  unsigned int v27; // r6
  unsigned int v28; // r3
  unsigned int v29; // r8
  unsigned int v30; // r6
  unsigned __int8 *v31; // r3
  unsigned int v32; // lr
  unsigned int v33; // r10
  unsigned int v34; // r2
  unsigned int v35; // r3
  unsigned __int8 *v36; // lr
  unsigned int v37; // r2
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r8
  unsigned int v44; // r3
  int v45; // r6
  int v46; // lr
  int v47; // r7
  int v48; // r1
  int v49; // r3
  unsigned int v50; // r3
  unsigned int v51; // r3
  int v52; // r10
  unsigned int v53; // r1
  unsigned int v54; // r3
  unsigned int v55; // r6
  unsigned int v56; // r3
  unsigned int v57; // r8
  unsigned int v58; // r3
  unsigned int v59; // r6
  unsigned int v60; // r2
  unsigned int v61; // r3
  unsigned int v62; // r1
  bool v63; // zf
  int v64; // r8
  unsigned int v65; // r7
  unsigned int v66; // r7
  unsigned int v67; // r10
  unsigned __int8 *v68; // r7
  int v69; // r0
  int v70; // r0
  int v71; // r3
  int v72; // r0
  int v73; // r6
  int v74; // r0
  int v75; // r6
  int v76; // r0
  unsigned __int8 *v77; // r3
  unsigned __int8 *v78; // r3
  int v79; // r1
  unsigned int v80; // r2
  int v81; // r2
  int v82; // r10
  int v83; // r6
  int v84; // r0
  bool v85; // zf
  int v86; // r3
  int v87; // r3
  int v88; // r3
  int v89; // r3
  int v90; // r2
  int v91; // [sp+Ch] [bp-28h]
  unsigned int v92; // [sp+Ch] [bp-28h]
  unsigned int v93; // [sp+Ch] [bp-28h]
  int v94; // [sp+Ch] [bp-28h]
  int v95; // [sp+10h] [bp-24h]
  unsigned int v96; // [sp+10h] [bp-24h]
  int v97; // [sp+10h] [bp-24h]
  unsigned __int8 *v98; // [sp+14h] [bp-20h]
  int v99; // [sp+14h] [bp-20h]
  unsigned int v100; // [sp+18h] [bp-1Ch]
  unsigned int v101; // [sp+1Ch] [bp-18h]
  int v102; // [sp+24h] [bp-10h] BYREF
  int v103; // [sp+28h] [bp-Ch] BYREF
  _DWORD v104[2]; // [sp+2Ch] [bp-8h] BYREF

  v2 = a1[31];
  v5 = *(_DWORD *)(v2 + 856);
  v6 = *a2;
  v7 = *(_DWORD *)(*(_DWORD *)(v2 + 528) + 16);
  v8 = a2[1];
  v102 = 0;
  sub_DA240(v5);
  v9 = v7 & 0x1C8;
  *(_DWORD *)(a1[31] + 856) = 0;
  if ( (v7 & 0x1C8) != 0 )
  {
    v12 = a2[1];
    if ( v12 <= 1
      || (v13 = v12 - 2, v14 = *a2 + 2, v15 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8), v15 > v13) )
    {
      sub_95494(a1, 50, 421, 159, (int)"ssl/statem/statem_clnt.c", 2002);
      goto LABEL_14;
    }
    *a2 = v14 + v15;
    a2[1] = v13 - v15;
    if ( v15 > 0x80 )
    {
      sub_95494(a1, 40, 421, 146, (int)"ssl/statem/statem_clnt.c", 2015);
      goto LABEL_14;
    }
    if ( v15 )
    {
      v95 = v14;
      v91 = a1[285];
      CRYPTO_free(*(_DWORD *)(v91 + 400), "ssl/statem/../packet_local.h", 482);
      v16 = sub_E9EF4(v95, v15, "ssl/statem/../packet_local.h", 485);
      *(_DWORD *)(v91 + 400) = v16;
      if ( !v16 )
      {
        sub_95494(a1, 80, 421, 68, (int)"ssl/statem/statem_clnt.c", 2025);
        goto LABEL_14;
      }
    }
    else
    {
      CRYPTO_free(*(_DWORD *)(a1[285] + 400), "ssl/statem/statem_clnt.c", 2020);
      *(_DWORD *)(a1[285] + 400) = 0;
    }
  }
  if ( (v7 & 0x48) != 0 )
    goto LABEL_7;
  if ( (v7 & 0x20) != 0 )
  {
    v22 = a2[1];
    if ( v22 <= 1 )
      goto LABEL_50;
    v23 = v22 - 2;
    v24 = *a2 + 2;
    v25 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8);
    if ( v25 > v23 )
      goto LABEL_50;
    v26 = v23 - v25;
    v27 = v24 + v25;
    a2[1] = v26;
    *a2 = v24 + v25;
    if ( v26 <= 1 )
      goto LABEL_50;
    v28 = v26 - 2;
    v29 = *(unsigned __int8 *)(v27 + 1) | (*(unsigned __int8 *)(v24 + v25) << 8);
    if ( v29 > v28 )
      goto LABEL_50;
    v30 = v27 + 2;
    v31 = (unsigned __int8 *)(v28 - v29);
    v32 = v30 + v29;
    a2[1] = (int)v31;
    *a2 = v30 + v29;
    if ( !v31 )
      goto LABEL_50;
    v33 = *(unsigned __int8 *)(v30 + v29);
    if ( v33 > (unsigned int)(v31 - 1) )
      goto LABEL_50;
    v34 = (unsigned int)&v31[-v33 - 1];
    v35 = v32 + 1;
    v36 = (unsigned __int8 *)(v32 + 1 + v33);
    a2[1] = v34;
    *a2 = (int)v36;
    if ( v34 <= 1 || (v37 = v34 - 2, v96 = v35, v92 = v36[1] | (*(unsigned __int8 *)(v35 + v33) << 8), v92 > v37) )
    {
LABEL_50:
      sub_95494(a1, 50, 422, 159, (int)"ssl/statem/statem_clnt.c", 2047);
      goto LABEL_14;
    }
    v98 = v36 + 2;
    *a2 = (int)&v36[v92 + 2];
    a2[1] = v37 - v92;
    v38 = ((int (*)(void))sub_B8AEC)();
    a1[392] = v38;
    if ( !v38
      || (v39 = sub_B8AEC(v30, v29, 0), (a1[393] = v39) == 0)
      || (v40 = sub_B8AEC(v96, v33, 0), (a1[394] = v40) == 0)
      || (v41 = sub_B8AEC(v98, v92, 0), (a1[395] = v41) == 0) )
    {
      sub_95494(a1, 80, 422, 3, (int)"ssl/statem/statem_clnt.c", 2065);
      goto LABEL_14;
    }
    if ( !sub_A6C5C(a1) )
    {
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    v10 = a1[31];
    if ( !(*(_DWORD *)(*(_DWORD *)(v10 + 528) + 20) << 30) )
      goto LABEL_8;
    goto LABEL_41;
  }
  if ( (v7 & 0x102) != 0 )
  {
    v50 = a2[1];
    v104[0] = v7 & 0x20;
    if ( v50 <= 1 )
      goto LABEL_53;
    v51 = v50 - 2;
    v52 = *a2 + 2;
    v53 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8);
    if ( v53 > v51 )
      goto LABEL_53;
    v54 = v51 - v53;
    v55 = v52 + v53;
    a2[1] = v54;
    *a2 = v52 + v53;
    if ( v54 <= 1 )
      goto LABEL_53;
    v56 = v54 - 2;
    v93 = v53;
    v57 = *(unsigned __int8 *)(v55 + 1) | (*(unsigned __int8 *)(v52 + v53) << 8);
    if ( v57 > v56 )
      goto LABEL_53;
    v58 = v56 - v57;
    v59 = v55 + 2;
    v60 = v59 + v57;
    *a2 = v59 + v57;
    a2[1] = v58;
    if ( v58 <= 1
      || (v61 = v58 - 2,
          v62 = *(unsigned __int8 *)(v60 + 1) | (*(unsigned __int8 *)(v59 + v57) << 8),
          v100 = v62,
          v62 > v61) )
    {
LABEL_53:
      sub_95494(a1, 50, 419, 159, (int)"ssl/statem/statem_clnt.c", 2101);
      goto LABEL_14;
    }
    v101 = v60 + 2;
    *a2 = v60 + 2 + v62;
    a2[1] = v61 - v62;
    v97 = EVP_PKEY_new();
    v99 = sub_BFD20();
    v63 = v99 == 0;
    if ( v99 )
      v63 = v97 == 0;
    if ( v63 )
    {
      v64 = 0;
      v83 = 0;
      v82 = 0;
      sub_95494(a1, 80, 419, 65, (int)"ssl/statem/statem_clnt.c", 2110);
    }
    else
    {
      v82 = sub_B8AEC(v52, v93, 0);
      v83 = sub_B8AEC(v59, v57, 0);
      v84 = sub_B8AEC(v101, v100, 0);
      v85 = v83 == 0;
      if ( v83 )
        v85 = v82 == 0;
      v64 = v84;
      v86 = v85;
      if ( !v84 )
        v86 |= 1u;
      if ( v86 )
      {
        v87 = 2122;
LABEL_106:
        sub_95494(a1, 80, 419, 3, (int)"ssl/statem/statem_clnt.c", v87);
        goto LABEL_63;
      }
      if ( sub_B85B0() )
      {
        sub_95494(a1, 47, 419, 102, (int)"ssl/statem/statem_clnt.c", 2129);
        goto LABEL_63;
      }
      if ( !sub_BFDBC(v99, v82, 0, v83) )
      {
        v87 = 2135;
        goto LABEL_106;
      }
      if ( sub_BF328(v99, v104) && !v104[0] )
      {
        v89 = sub_BFE38(v99, v64, 0);
        if ( v89 )
        {
          v64 = sub_D9F44(v97, 28, v99, v89);
          if ( v64 )
          {
            sub_D9AE4(v97);
            v64 = sub_854EC((int)a1, (int)&loc_40006 + 1);
            if ( v64 )
            {
              v10 = a1[31];
              v90 = *(_DWORD *)(v10 + 528);
              *(_DWORD *)(v10 + 856) = v97;
              if ( !(*(_DWORD *)(v90 + 20) << 30) )
                goto LABEL_8;
              goto LABEL_41;
            }
            v83 = 0;
            sub_95494(a1, 40, 419, 394, (int)"ssl/statem/statem_clnt.c", 2163);
            v82 = 0;
            v99 = 0;
          }
          else
          {
            v83 = 0;
            sub_95494(a1, 80, 419, 6, (int)"ssl/statem/statem_clnt.c", 2155);
            v82 = 0;
          }
        }
        else
        {
          v83 = 0;
          v82 = 0;
          sub_95494(a1, 80, 419, 3, (int)"ssl/statem/statem_clnt.c", 2148);
        }
      }
      else
      {
        v83 = 0;
        sub_95494(a1, 47, 419, 102, (int)"ssl/statem/statem_clnt.c", 2142);
        v82 = 0;
      }
    }
LABEL_63:
    sub_B895C(v82);
    sub_B895C(v83);
    sub_B895C(v64);
    sub_BFB8C(v99);
    sub_DA240(v97);
    goto LABEL_14;
  }
  if ( (v7 & 0x84) == 0 )
  {
    if ( v7 )
    {
      v9 = v7 & 0x84;
      sub_95494(a1, 10, 365, 244, (int)"ssl/statem/statem_clnt.c", 2303);
      goto LABEL_15;
    }
    goto LABEL_7;
  }
  v17 = (unsigned __int8 *)a2[1];
  if ( !v17
    || (v18 = (unsigned __int8 *)*a2,
        v19 = *(unsigned __int8 *)*a2,
        ++*a2,
        a2[1] = (int)(v17 - 1),
        (unsigned int)(v17 - 1) <= 1) )
  {
    sub_95494(a1, 50, 420, 160, (int)"ssl/statem/statem_clnt.c", 2207);
    goto LABEL_14;
  }
  v20 = v18[1];
  v21 = v18[2];
  *a2 = (int)(v18 + 3);
  a2[1] = (int)(v17 - 3);
  if ( v19 != 3 || (v73 = v21 | (v20 << 8), !sub_A2A78(a1, v73, 1)) )
  {
    sub_95494(a1, 47, 420, 378, (int)"ssl/statem/statem_clnt.c", 2217);
    goto LABEL_14;
  }
  v74 = v73;
  v75 = a1[31];
  v76 = sub_830B4(v74);
  *(_DWORD *)(v75 + 856) = v76;
  if ( !v76 )
  {
    sub_95494(a1, 80, 420, 314, (int)"ssl/statem/statem_clnt.c", 2223);
    goto LABEL_14;
  }
  v77 = (unsigned __int8 *)a2[1];
  if ( !v77 || (v78 = v77 - 1, v79 = *a2 + 1, v80 = *(unsigned __int8 *)*a2, v80 > (unsigned int)v78) )
  {
    sub_95494(a1, 50, 420, 159, (int)"ssl/statem/statem_clnt.c", 2229);
    goto LABEL_14;
  }
  *a2 = v79 + v80;
  a2[1] = (int)&v78[-v80];
  if ( !sub_DA738(*(_DWORD *)(a1[31] + 856), v79, v80) )
  {
    sub_95494(a1, 47, 420, 306, (int)"ssl/statem/statem_clnt.c", 2237);
    goto LABEL_14;
  }
  v10 = a1[31];
  v81 = *(_DWORD *)(*(_DWORD *)(v10 + 528) + 20);
  if ( (v81 & 8) != 0 || (v81 & 1) != 0 )
  {
LABEL_41:
    v42 = sub_10E89C(*(_DWORD *)(a1[285] + 412));
    v43 = v42;
    if ( v42 )
    {
      v44 = a2[1];
      v9 = 0;
      v103 = 0;
      v45 = v8 - v44;
      if ( v8 - v44 <= v8 && v45 >= 0 )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) != 0 )
        {
          if ( v44 <= 1 )
          {
            sub_95494(a1, 50, 365, 160, (int)"ssl/statem/statem_clnt.c", 2333);
            goto LABEL_15;
          }
          v46 = *(unsigned __int8 *)*a2;
          v47 = *a2 + 2;
          v48 = *(unsigned __int8 *)(*a2 + 1);
          a2[1] = v44 - 2;
          *a2 = v47;
          if ( sub_A2F90(a1, v48 | (v46 << 8), v42) <= 0 )
            goto LABEL_15;
        }
        else
        {
          v9 = sub_A3718(a1, v42);
          if ( !v9 )
          {
            v49 = 2342;
            goto LABEL_49;
          }
        }
        v9 = sub_A2D04(*(_DWORD *)(a1[31] + 632), &v103);
        if ( !v9 )
        {
          v49 = 2348;
LABEL_49:
          sub_95494(a1, 80, 365, 68, (int)"ssl/statem/statem_clnt.c", v49);
          goto LABEL_15;
        }
        v65 = a2[1];
        if ( v65 <= 1
          || (v66 = v65 - 2,
              v94 = *a2 + 2,
              v67 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8),
              v67 > v66)
          || (v68 = (unsigned __int8 *)(v66 - v67), *a2 += 2 + v67, (a2[1] = (int)v68) != 0) )
        {
          sub_95494(a1, 50, 365, 159, (int)"ssl/statem/statem_clnt.c", 2360);
          goto LABEL_14;
        }
        v69 = sub_D9AF8(v43);
        if ( v69 < 0 )
        {
          v9 = 0;
          sub_95494(a1, 80, 365, 68, (int)"ssl/statem/statem_clnt.c", 2366);
          goto LABEL_15;
        }
        v70 = sub_D14F4(v69);
        v9 = v70;
        if ( !v70 )
        {
          sub_95494(a1, 80, 365, 65, (int)"ssl/statem/statem_clnt.c", 2383);
          goto LABEL_15;
        }
        if ( sub_D954C(v70, &v102, v103, 0, v43) <= 0 )
        {
          v88 = 2389;
LABEL_109:
          sub_95494(a1, 80, 365, 6, (int)"ssl/statem/statem_clnt.c", v88);
          goto LABEL_15;
        }
        v71 = *(_DWORD *)(a1[31] + 632);
        if ( v71
          && *(_DWORD *)(v71 + 16) == 912
          && (sub_F89C8(v102, -1, 4097, 6, 0) <= 0 || sub_F89C8(v102, 24, 4098, -1, 0) <= 0) )
        {
          v88 = 2397;
          goto LABEL_109;
        }
        v72 = sub_9D99C(a1, v104, v6, v45);
        if ( v72 )
        {
          sub_D98A4(v9, v94, v67, v104[0], v72);
          CRYPTO_free(v104[0], "ssl/statem/statem_clnt.c", 2410);
          sub_D1504(v9);
          return 3;
        }
LABEL_15:
        sub_D1504(v9);
        return 0;
      }
      sub_95494(a1, 50, 365, 68, (int)"ssl/statem/statem_clnt.c", 2324);
      goto LABEL_14;
    }
LABEL_7:
    v10 = a1[31];
  }
LABEL_8:
  if ( (*(_DWORD *)(*(_DWORD *)(v10 + 528) + 20) & 0x44) == 0 && !v9 )
  {
    if ( sub_99170(a1) )
      sub_95494(a1, 50, 365, 390, (int)"ssl/statem/statem_clnt.c", 2425);
    goto LABEL_15;
  }
  result = 3;
  if ( a2[1] )
  {
    sub_95494(a1, 50, 365, 153, (int)"ssl/statem/statem_clnt.c", 2433);
    goto LABEL_14;
  }
  return result;
}
