int __fastcall tls_construct_new_session_ticket(int *a1, int a2)
{
  int *v2; // r3
  _DWORD *v5; // r6
  int v6; // r5
  int v7; // r3
  _BOOL4 v8; // r2
  int v9; // r8
  int v10; // r7
  _DWORD *v11; // r5
  int v12; // r1
  int (__fastcall *v14)(int *, _DWORD); // r3
  int *v15; // r3
  int v16; // r3
  _BOOL4 v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r10
  _BOOL4 v21; // r6
  int v22; // r5
  int v23; // r9
  int v24; // r8
  int v25; // r7
  int *v26; // r2
  int v27; // r2
  _BOOL4 v28; // r1
  __int64 v29; // r2
  int v30; // r5
  int v31; // kr00_4
  int v32; // r0
  bool v33; // zf
  int v34; // r3
  int v35; // r0
  int v36; // r3
  int v37; // r0
  _BOOL4 v38; // r10
  int v39; // r2
  unsigned int v40; // r3
  unsigned int v41; // r5
  int v42; // r2
  unsigned int v43; // r3
  int v44; // r5
  time_t v45; // r0
  int v46; // r3
  int v47; // r5
  int v48; // r0
  _DWORD *v49; // r1
  int (__fastcall *v50)(int *, _DWORD); // r3
  int v51; // r0
  int (__fastcall *v52)(int *, _DWORD *, _BYTE *, int, int, int); // r6
  int v53; // r0
  int v54; // r3
  int v55; // r10
  int v56; // r0
  int v57; // r6
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r3
  _DWORD *v62; // [sp+20h] [bp-6Ch]
  int v63; // [sp+24h] [bp-68h]
  int v64; // [sp+24h] [bp-68h]
  int v65; // [sp+28h] [bp-64h]
  int v66; // [sp+2Ch] [bp-60h]
  int v67; // [sp+30h] [bp-5Ch] BYREF
  int v68; // [sp+34h] [bp-58h] BYREF
  int v69; // [sp+38h] [bp-54h] BYREF
  int v70; // [sp+3Ch] [bp-50h] BYREF
  int v71; // [sp+40h] [bp-4Ch] BYREF
  int v72; // [sp+44h] [bp-48h] BYREF
  int v73; // [sp+48h] [bp-44h] BYREF
  int v74; // [sp+4Ch] [bp-40h] BYREF
  int v75; // [sp+50h] [bp-3Ch] BYREF
  unsigned int v76; // [sp+54h] [bp-38h] BYREF
  int v77; // [sp+58h] [bp-34h] BYREF
  int v78; // [sp+5Ch] [bp-30h] BYREF
  _BYTE v79[8]; // [sp+60h] [bp-2Ch] BYREF
  _BYTE v80[16]; // [sp+68h] [bp-24h] BYREF
  _DWORD v81[4]; // [sp+78h] [bp-14h] BYREF

  v2 = (int *)a1[1];
  v67 = 0;
  v5 = (_DWORD *)a1[376];
  v6 = *(_DWORD *)(v2[25] + 48) & 8;
  if ( v6 )
  {
    v14 = (int (__fastcall *)(int *, _DWORD))v5[141];
    if ( !v14 )
    {
      v6 = 0;
      v62 = (_DWORD *)a1[376];
      goto LABEL_28;
    }
  }
  else
  {
    v7 = *v2;
    v8 = v7 >= 772;
    if ( v7 == 0x10000 )
      v8 = 0;
    if ( v8 )
    {
      v9 = sub_86508((int)a1);
      v10 = sub_D8C78(v9);
      if ( v10 < 0 )
      {
        v36 = 4081;
        goto LABEL_52;
      }
      if ( a1[988] || a1[35] )
      {
        v11 = sub_8D794((_DWORD *)a1[285], 0);
        if ( !v11 )
          return 0;
        sub_8D6A4(a1[285]);
        v12 = (int)v11;
        a1[285] = (int)v11;
      }
      else
      {
        v12 = a1[285];
      }
      if ( !sub_8D53C(a1, v12) )
        return 0;
      if ( sub_F497C(&v67, 4) <= 0 )
      {
        v30 = 0;
        sub_95494(a1, 80, 428, 68, (int)"ssl/statem/statem_srvr.c", 4110);
      }
      else
      {
        v40 = a1[990];
        v41 = a1[991];
        v42 = a1[285];
        v79[7] = v40;
        v43 = (v40 >> 8) | (v41 << 24);
        v79[6] = v43;
        *(_DWORD *)(v42 + 476) = v67;
        v79[5] = BYTE1(v43);
        v79[4] = (unsigned __int16)(v43 >> 8) >> 8;
        v79[3] = (unsigned __int16)(((v43 >> 8) | (v41 >> 8 << 24)) >> 8) >> 8;
        v79[0] = ((((((v43 >> 8) | (v41 >> 8 << 24)) >> 8) | (HIWORD(v41) << 24)) >> 8) | (HIBYTE(v41) << 24)) >> 24;
        v79[2] = (unsigned __int16)(((((v43 >> 8) | (v41 >> 8 << 24)) >> 8) | (HIWORD(v41) << 24)) >> 8) >> 8;
        v79[1] = ((((((v43 >> 8) | (v41 >> 8 << 24)) >> 8) | (HIWORD(v41) << 24)) >> 8) | (HIBYTE(v41) << 24)) >> 16;
        if ( !sub_A5334(a1, v9, a1 + 99, "resumption", 10, v79, 8, v42 + 72, v10, 1) )
          return 0;
        v44 = a1[285];
        *(_DWORD *)(v44 + 4) = v10;
        v45 = time(0);
        v46 = a1[31];
        *(_DWORD *)(v44 + 432) = v45;
        if ( !*(_DWORD *)(v46 + 832) )
        {
          v49 = (_DWORD *)a1[285];
          goto LABEL_69;
        }
        CRYPTO_free(*(_DWORD *)(a1[285] + 484), "ssl/statem/statem_srvr.c", 4135);
        v47 = a1[285];
        v48 = sub_E9E68(*(_DWORD *)(a1[31] + 832), *(_DWORD *)(a1[31] + 836), "ssl/statem/statem_srvr.c", 4137);
        v49 = (_DWORD *)a1[285];
        *(_DWORD *)(v47 + 484) = v48;
        v30 = v49[121];
        if ( v30 )
        {
          v49[122] = *(_DWORD *)(a1[31] + 836);
LABEL_69:
          v50 = (int (__fastcall *)(int *, _DWORD))v5[141];
          v49[120] = a1[980];
          if ( v50 )
          {
            v6 = v50(a1, v5[143]);
            if ( !v6 )
              goto LABEL_51;
          }
          goto LABEL_14;
        }
        v49[122] = 0;
        sub_95494(a1, 80, 428, 65, (int)"ssl/statem/statem_srvr.c", 4142);
      }
      return v30;
    }
    v14 = (int (__fastcall *)(int *, _DWORD))v5[141];
    if ( !v14 )
      goto LABEL_26;
  }
  v6 = v14(a1, v5[143]);
  if ( v6 )
  {
LABEL_14:
    v15 = (int *)a1[1];
    if ( (*(_DWORD *)(v15[25] + 48) & 8) != 0 )
    {
      v6 = v67;
      v62 = (_DWORD *)a1[376];
      goto LABEL_28;
    }
    v16 = *v15;
    v6 = v67;
    v17 = v16 >= 772;
    if ( v16 == 0x10000 )
      v17 = 0;
    if ( v17 )
    {
      v18 = a1[315];
      if ( (v18 & 0x4000) != 0 || a1[980] && (v18 & 0x1000000) == 0 )
      {
        if ( !sub_9DF84(a1, a2, v67, (int)v79) )
          return 0;
        if ( !sub_A851C(a2) || !sub_A7EDC(a2) )
        {
          sub_95494(a1, 80, 636, 68, (int)"ssl/statem/statem_srvr.c", 4052);
          return 0;
        }
        goto LABEL_33;
      }
      v62 = (_DWORD *)a1[376];
LABEL_28:
      v19 = i2d_SSL_SESSION(a1[285], 0);
      v20 = v19;
      v21 = v19 > 65280;
      if ( !v19 )
        v21 = 1;
      if ( v21 )
      {
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        sub_95494(a1, 80, 637, 68, (int)"ssl/statem/statem_srvr.c", 3890);
        goto LABEL_32;
      }
      v25 = CRYPTO_malloc(v19, "ssl/statem/statem_srvr.c", 3893);
      if ( !v25 )
      {
        v22 = 0;
        v23 = 0;
        v24 = 0;
        sub_95494(a1, 80, 637, 65, (int)"ssl/statem/statem_srvr.c", 3896);
        goto LABEL_32;
      }
      v24 = sub_D7A5C();
      v32 = sub_DCB64();
      v33 = v32 == 0;
      if ( v32 )
        v33 = v24 == 0;
      v23 = v32;
      v34 = v33;
      v63 = v34;
      if ( v33 )
      {
        v22 = 0;
        sub_95494(a1, 80, 637, 65, (int)"ssl/statem/statem_srvr.c", 3904);
        goto LABEL_32;
      }
      v35 = a1[285];
      v68 = v25;
      if ( !i2d_SSL_SESSION(v35, &v68) )
      {
        v22 = 0;
        sub_95494(a1, 80, 637, 68, (int)"ssl/statem/statem_srvr.c", 3911);
        goto LABEL_32;
      }
      v73 = v25;
      v37 = d2i_SSL_SESSION(v63, &v73, v20);
      v65 = v37;
      if ( !v37 )
      {
        v22 = 0;
        sub_95494(a1, 80, 637, 68, (int)"ssl/statem/statem_srvr.c", 3922);
        goto LABEL_32;
      }
      v66 = i2d_SSL_SESSION(v37, v63);
      v38 = v20 < v66;
      if ( v66 )
        v39 = v38;
      else
        v39 = v38 | 1;
      if ( v39 )
      {
        v22 = v63;
        sub_95494(a1, 80, 637, 68, (int)"ssl/statem/statem_srvr.c", 3930);
        sub_8D6A4(v65);
        goto LABEL_32;
      }
      v68 = v25;
      if ( !i2d_SSL_SESSION(v65, &v68) )
      {
        v22 = 0;
        sub_95494(a1, 80, 637, 68, (int)"ssl/statem/statem_srvr.c", 3937);
        sub_8D6A4(v65);
        goto LABEL_32;
      }
      v51 = sub_8D6A4(v65);
      v52 = (int (__fastcall *)(int *, _DWORD *, _BYTE *, int, int, int))v62[83];
      if ( v52 )
      {
        v53 = v52(a1, v81, v80, v24, v23, 1);
        if ( !v53 )
        {
          if ( sub_A8450(a2, 4, 0, 0, 4) && sub_A8450(a2, 2, 0, 0, 2) )
          {
            CRYPTO_free(v25, "ssl/statem/statem_srvr.c", 3962);
            sub_D7A6C(v24);
            sub_DCA8C(v23);
LABEL_33:
            v26 = (int *)a1[1];
            if ( (*(_DWORD *)(v26[25] + 48) & 8) != 0 )
              return 1;
            v27 = *v26;
            v28 = v27 != 0x10000;
            if ( v27 < 772 )
              v28 = 0;
            if ( !v28 )
              return 1;
            if ( !sub_8F72C(a1, a2, 0x2000, 0, 0) )
              return 0;
            v29 = *((_QWORD *)a1 + 495);
            v30 = 1;
            v31 = a1[990];
            ++a1[988];
            *((_QWORD *)a1 + 495) = __PAIR64__(HIDWORD(v29), v31) + 1;
            sub_8A430(a1, 2);
            return v30;
          }
          v54 = 3959;
          goto LABEL_86;
        }
        if ( v53 < 0 )
        {
          sub_95494(a1, 80, 637, 234, (int)"ssl/statem/statem_srvr.c", 3969);
          goto LABEL_78;
        }
        sub_D8944(v24);
      }
      else
      {
        v55 = sub_D3240(v51);
        v64 = sub_D8940(v55);
        if ( sub_F497C(v80, v64) <= 0
          || (v56 = sub_D875C(v24, v55, 0, v62[82] + 32, v80)) == 0
          || (v57 = v62[82], v58 = sub_D93F0(v56), !sub_DC8C4(v23, v57, 32, v58, 0)) )
        {
          v54 = 3984;
          goto LABEL_86;
        }
        v59 = v62[79];
        v60 = v62[80];
        v61 = v62[81];
        v81[0] = v62[78];
        v81[1] = v59;
        v81[2] = v60;
        v81[3] = v61;
      }
      if ( !sub_9DF84(a1, a2, v6, (int)v79) )
      {
LABEL_78:
        v22 = 0;
        goto LABEL_32;
      }
      if ( sub_A820C(a2, &v77)
        && sub_A851C(a2)
        && sub_A851C(a2)
        && sub_A8250(a2, v66 + 32, &v69)
        && sub_D7C9C(v24, v69, &v74, v25, v66)
        && sub_A82B8(a2, v74, &v70)
        && v69 == v70
        && sub_D7FA4(v24, v74 + v69, &v75)
        && sub_A82B8(a2, v75, &v70)
        && v70 == v69 + v74
        && v66 + 32 >= v75 + v74
        && sub_A820C(a2, &v78)
        && sub_DCA18(v23, *(_DWORD *)(a1[27] + 4) + v77, v78 - v77)
        && sub_A8250(a2, 64, &v71)
        && sub_DCA28(v23, v71, &v76)
        && v76 <= 0x40
        && sub_A82B8(a2, v76, &v72)
        && v71 == v72 )
      {
        if ( sub_A7EDC(a2) )
        {
          v22 = 1;
LABEL_32:
          CRYPTO_free(v25, "ssl/statem/statem_srvr.c", 4034);
          sub_D7A6C(v24);
          sub_DCA8C(v23);
          if ( !v22 )
            return 0;
          goto LABEL_33;
        }
        v54 = 4028;
      }
      else
      {
        v54 = 4021;
      }
LABEL_86:
      sub_95494(a1, 80, 637, 68, (int)"ssl/statem/statem_srvr.c", v54);
      goto LABEL_78;
    }
    v5 = (_DWORD *)a1[376];
LABEL_26:
    v62 = v5;
    goto LABEL_28;
  }
LABEL_51:
  v36 = 4154;
LABEL_52:
  sub_95494(a1, 80, 428, 68, (int)"ssl/statem/statem_srvr.c", v36);
  return v6;
}
