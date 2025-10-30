void __fastcall sub_1F31AC(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r9
  int v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int v13; // r4
  char *v14; // r3
  _BYTE *v15; // r0
  _BYTE *v16; // r0
  unsigned __int8 *v17; // r5
  _BYTE *v18; // r7
  unsigned __int8 v19; // t1
  int v20; // r0
  const char *v21; // r9
  int v22; // r0
  const char *v23; // r11
  unsigned int v24; // r5
  int v25; // r7
  int v26; // r0
  int v27; // r11
  unsigned int v28; // r0
  char *v29; // r6
  _BOOL4 v30; // r3
  _DWORD *v31; // r3
  _DWORD *v32; // r5
  _DWORD *v33; // r4
  int v34; // r1
  int v35; // r2
  int v36; // r0
  _DWORD *v37; // r4
  _DWORD *v38; // r2
  void *v39; // r0
  unsigned int *v40; // r6
  unsigned int *v41; // r10
  char *v42; // r4
  int v43; // r2
  unsigned int *v44; // r2
  _BYTE *v45; // r3
  int v46; // r2
  int v47; // r3
  int v48; // r3
  int v49; // r3
  int v50; // r1
  int v51; // r2
  int v52; // r0
  _DWORD *v53; // r5
  unsigned int *v54; // r2
  _BYTE *v55; // r3
  void *v56; // r3
  _DWORD *v57; // r4
  _DWORD *v58; // r5
  void *v59; // r0
  _DWORD *v60; // r0
  _DWORD *v61; // r0
  unsigned int *v62; // r4
  void *v63; // r0
  unsigned int *v64; // r0
  unsigned int *v65; // r0
  int v66; // r0
  int v67; // r1
  int v68; // r2
  int v69; // r0
  char *v70; // r3
  unsigned __int8 *v71; // r1
  unsigned __int8 *v72; // r3
  char *v73; // r3
  int v74; // r3
  int v75; // r1
  char *v76; // r2
  char v77; // t1
  unsigned __int8 *v78; // r5
  int v79; // r4
  unsigned __int8 *v80; // r3
  int v81; // r2
  int v82; // t1
  int v83; // [sp+8h] [bp-6Ch]
  int v84; // [sp+Ch] [bp-68h]
  int v85; // [sp+10h] [bp-64h]
  int v86; // [sp+14h] [bp-60h]
  void *ptr; // [sp+18h] [bp-5Ch] BYREF
  unsigned __int8 *v88; // [sp+1Ch] [bp-58h] BYREF
  _DWORD v89[2]; // [sp+20h] [bp-54h] BYREF
  void *v90; // [sp+28h] [bp-4Ch] BYREF
  unsigned int *v91; // [sp+2Ch] [bp-48h]
  int v92; // [sp+30h] [bp-44h]
  _DWORD v93[3]; // [sp+34h] [bp-40h] BYREF
  int v94; // [sp+40h] [bp-34h]
  int v95; // [sp+44h] [bp-30h]
  int v96; // [sp+48h] [bp-2Ch]
  _BYTE v97[12]; // [sp+4Ch] [bp-28h] BYREF
  _DWORD v98[3]; // [sp+58h] [bp-1Ch] BYREF
  _DWORD v99[4]; // [sp+64h] [bp-10h] BYREF

  v90 = 0;
  v91 = 0;
  v92 = 0;
  v2 = ((int (__fastcall *)(int))loc_1E2198)(27);
  if ( v2 == 1 )
  {
    sub_230590(&ptr, a1, 17, 0);
    v56 = ptr;
    if ( !ptr )
      goto LABEL_18;
    if ( *(_BYTE *)ptr )
    {
      sub_274C9C("threads", "threads.dtd", &off_3D4C20, ptr, &v90);
      v56 = ptr;
      if ( !ptr )
        goto LABEL_18;
    }
    free(v56);
    if ( v91 != v90 )
      goto LABEL_19;
  }
  else
  {
    v3 = sub_16F654(v2);
    v4 = ((int (__fastcall *)(int))loc_1E2770)(v3);
    v5 = dword_488C94;
    if ( !*(_DWORD *)(dword_488C94 + 128) )
      goto LABEL_3;
    sub_1E7DEC("qfThreadInfo");
    v4 = sub_1E4EB8((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
    v70 = *(char **)v5;
    v88 = (unsigned __int8 *)v70;
    if ( !*v70 )
    {
      *(_DWORD *)(v5 + 128) = (unsigned __int8)*v70;
LABEL_3:
      v6 = sub_16F654(v4);
      v7 = ((int (__fastcall *)(int))loc_1E2770)(v6);
      LOBYTE(v8) = 1;
      v83 = 1001;
      v86 = dword_488C94;
      v84 = dword_488C94 + 144;
      v85 = dword_488C94 + 152;
      while ( 1 )
      {
        v9 = sub_16F654(v7);
        v10 = ((int (__fastcall *)(int))loc_1E2770)(v9);
        v11 = dword_488C94;
        v12 = sub_1E2890(v10);
        v13 = v12 <= 538 ? sub_1E2890(v12) / 16 - 2 : 32;
        v14 = *(char **)v11;
        *v14 = 113;
        v14[1] = 76;
        v15 = sub_99144(v14 + 2, v8);
        v16 = sub_9915C(v15, v13);
        v17 = (unsigned __int8 *)v84;
        v18 = v16 + 16;
        do
        {
          v19 = *v17++;
          v16 = sub_9915C(v16, v19);
        }
        while ( v18 > v16 );
        *v16 = 0;
        sub_1E7DEC(*(const char **)v11);
        v20 = sub_1E4EB8((char **)v11, (size_t *)(v11 + 4), 0, 0, 0);
        v21 = *(const char **)v11;
        if ( !**(_BYTE **)v11 )
          break;
        v22 = sub_16F654(v20);
        ((void (__fastcall *)(int))loc_1E2770)(v22);
        v23 = v21 + 5;
        v24 = (unsigned int)&v21[*(_DWORD *)(dword_488C94 + 4) - 14];
        v25 = sub_1E0E24((unsigned __int8 *)v21 + 2, 2);
        v8 = sub_990E4(*((unsigned __int8 *)v21 + 4));
        v26 = (int)v23;
        v27 = 0;
        v28 = sub_1E0E90(v26, (char *)(v11 + 136));
        v29 = (char *)v85;
        while ( 1 )
        {
          v30 = v25 - v27 > 0;
          if ( v24 <= v28 )
            v30 = 0;
          if ( !v30 )
            break;
          ++v27;
          v28 = sub_1E0E90(v28, v29);
          v29 += 8;
          if ( v13 <= v27 - 1 )
            goto LABEL_88;
        }
        if ( !v27 )
        {
          if ( v8 != 1 )
            sub_946B0("RMT ERROR : failed to get remote thread list.");
          goto LABEL_18;
        }
LABEL_88:
        if ( v13 < v27 )
        {
          sub_946B0("RMT ERROR: threadlist response longer than requested.");
          goto LABEL_18;
        }
        v74 = 8 * (v27 + 18);
        v75 = v86 + 143;
        v76 = (char *)(v86 + v74);
        do
        {
          v77 = *v76++;
          *(_BYTE *)++v75 = v77;
        }
        while ( v76 != (char *)(v86 + v74 + 8) );
        v78 = (unsigned __int8 *)(v86 + 156);
        v79 = v86 + 156 + v74 - 144;
        do
        {
          v80 = v78;
          v81 = 0;
          do
          {
            v82 = *v80++;
            v81 = v82 | (v81 << 8);
          }
          while ( v78 + 4 != v80 );
          v98[0] = dword_4878EC;
          v98[1] = v81;
          v98[2] = 0;
          v7 = sub_1F5874(&v90, v98);
          v78 += 8;
        }
        while ( (unsigned __int8 *)v79 != v78 );
        if ( v8 )
          goto LABEL_18;
        if ( !--v83 )
        {
          sub_946B0("Remote fetch threadlist -infinite loop-.");
          goto LABEL_18;
        }
      }
      sub_23E8E8(v20);
LABEL_66:
      v62 = (unsigned int *)v90;
      v40 = v91;
      if ( v90 != v91 )
      {
        do
        {
          v63 = (void *)v62[16];
          if ( v63 )
            sub_339E64(v63);
          v64 = (unsigned int *)v62[9];
          if ( v64 != v62 + 11 )
            sub_339E64(v64);
          v65 = (unsigned int *)v62[3];
          if ( v65 != v62 + 5 )
            sub_339E64(v65);
          v62 += 19;
        }
        while ( v40 != v62 );
        v40 = (unsigned int *)v90;
      }
      goto LABEL_75;
    }
    v71 = (unsigned __int8 *)(v70 + 1);
    v88 = (unsigned __int8 *)(v70 + 1);
    if ( *v70 == 109 )
    {
      do
      {
        do
        {
          sub_1E13D4((int)v97, v71, &v88);
          sub_1F5874(&v90, v97);
          v72 = v88;
          v71 = ++v88;
        }
        while ( *v72 == 44 );
        sub_1E7DEC("qsThreadInfo");
        sub_1E4EB8((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
        v73 = *(char **)v5;
        v71 = (unsigned __int8 *)(*(_DWORD *)v5 + 1);
        v88 = v71;
      }
      while ( *v73 == 109 );
    }
LABEL_18:
    if ( v91 != v90 )
      goto LABEL_19;
  }
  if ( !sub_1E3660(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0)) )
  {
LABEL_19:
    v31 = (_DWORD *)dword_48A4D4;
    if ( dword_48A4D4 )
    {
      do
      {
        while ( 1 )
        {
          v32 = v31 + 2;
          v33 = (_DWORD *)v31[1];
          v34 = v31[3];
          v35 = v31[4];
          v93[0] = v31[2];
          v93[1] = v34;
          v93[2] = v35;
          v36 = sub_1F5908(v90, v91, v93, 0);
          if ( v91 == (unsigned int *)v36 )
            break;
          v31 = v33;
          if ( !v33 )
            goto LABEL_24;
        }
        sub_23E38C(*v32, v32[1], v32[2]);
        v31 = v33;
      }
      while ( v33 );
LABEL_24:
      v37 = (_DWORD *)dword_48A4D4;
      if ( dword_48A4D4 )
      {
        do
        {
          if ( v37[11] != 2 )
          {
            v38 = v37[42] ? v37 + 38 : v37 + 52;
            if ( (unsigned int)(*v38 - 4) <= 1 )
            {
              v66 = v38[1];
              v67 = v38[2];
              v68 = v38[3];
              v99[0] = v66;
              v99[1] = v67;
              v99[2] = v68;
              v69 = sub_1F5D00(v90, v91, v99);
              if ( (unsigned int *)v69 != v91 )
                sub_1F5268(&v90, v69);
            }
          }
          v37 = (_DWORD *)v37[1];
        }
        while ( v37 );
      }
    }
    sub_1E7CD0((const char **)&off_46DB30);
    v89[0] = &v90;
    v89[1] = 0;
    v39 = (void *)((int (__fastcall *)(int, int (*)(), _DWORD *))loc_1E7958)(dword_488CE4, sub_1F507C, v89);
    v40 = (unsigned int *)v90;
    v41 = v91;
    if ( v91 == v90 )
    {
LABEL_75:
      if ( v40 )
        sub_339E64(v40);
      return;
    }
    v42 = (char *)v90 + 76;
    while ( *((_DWORD *)v42 - 19) == dword_475848 && *((_QWORD *)v42 - 9) == qword_47584C )
    {
LABEL_41:
      v40 += 19;
      v42 += 76;
      if ( v41 == v40 )
        goto LABEL_66;
    }
    v49 = sub_232950(v39);
    sub_1EC668(*v40, v40[1], v40[2], v49 != 0);
    v50 = *((_DWORD *)v42 - 18);
    v51 = *((_DWORD *)v42 - 17);
    v94 = *((_DWORD *)v42 - 19);
    v95 = v50;
    v96 = v51;
    v52 = sub_23E408(v94, v50, v51);
    v53 = (_DWORD *)((int (__fastcall *)(int))loc_1E38EC)(v52);
    v53[13] = *((_DWORD *)v42 - 4);
    v54 = (unsigned int *)*((_DWORD *)v42 - 16);
    v55 = (_BYTE *)v53[1];
    if ( v54 == v40 + 5 )
    {
      sub_33B48C(v53 + 1, v40 + 3);
      v55 = (_BYTE *)*((_DWORD *)v42 - 16);
    }
    else
    {
      v53[1] = v54;
      if ( v55 == (_BYTE *)(v53 + 3) )
      {
        v53[2] = *((_DWORD *)v42 - 15);
        v53[3] = *((_DWORD *)v42 - 14);
      }
      else
      {
        v43 = v53[3];
        v53[2] = *((_DWORD *)v42 - 15);
        v53[3] = *((_DWORD *)v42 - 14);
        if ( v55 )
        {
          *((_DWORD *)v42 - 16) = v55;
          *((_DWORD *)v42 - 14) = v43;
          goto LABEL_35;
        }
      }
      *((_DWORD *)v42 - 16) = v40 + 5;
      v55 = v40 + 5;
    }
LABEL_35:
    *((_DWORD *)v42 - 15) = 0;
    *v55 = 0;
    v44 = (unsigned int *)*((_DWORD *)v42 - 10);
    v45 = (_BYTE *)v53[7];
    if ( v44 == v40 + 11 )
    {
      sub_33B48C(v53 + 7, v40 + 9);
      v45 = (_BYTE *)*((_DWORD *)v42 - 10);
    }
    else
    {
      v53[7] = v44;
      if ( v45 == (_BYTE *)(v53 + 9) )
      {
        v53[8] = *((_DWORD *)v42 - 9);
        v53[9] = *((_DWORD *)v42 - 8);
      }
      else
      {
        v46 = v53[9];
        v53[8] = *((_DWORD *)v42 - 9);
        v53[9] = *((_DWORD *)v42 - 8);
        if ( v45 )
        {
          *((_DWORD *)v42 - 10) = v45;
          *((_DWORD *)v42 - 8) = v46;
          goto LABEL_39;
        }
      }
      *((_DWORD *)v42 - 10) = v40 + 11;
      v45 = v40 + 11;
    }
LABEL_39:
    *((_DWORD *)v42 - 9) = 0;
    *v45 = 0;
    v53[15] = 0;
    v53[16] = 0;
    v39 = (void *)v53[14];
    v53[14] = 0;
    v53[14] = *((_DWORD *)v42 - 3);
    *((_DWORD *)v42 - 3) = 0;
    v47 = v53[15];
    v53[15] = *((_DWORD *)v42 - 2);
    *((_DWORD *)v42 - 2) = v47;
    v48 = v53[16];
    v53[16] = *((_DWORD *)v42 - 1);
    *((_DWORD *)v42 - 1) = v48;
    if ( v39 )
      sub_339E64(v39);
    goto LABEL_41;
  }
  v57 = v90;
  v58 = v91;
  if ( v90 != v91 )
  {
    do
    {
      v59 = (void *)v57[16];
      if ( v59 )
        sub_339E64(v59);
      v60 = (_DWORD *)v57[9];
      if ( v60 != v57 + 11 )
        sub_339E64(v60);
      v61 = (_DWORD *)v57[3];
      if ( v61 != v57 + 5 )
        sub_339E64(v61);
      v57 += 19;
    }
    while ( v58 != v57 );
    v58 = v90;
  }
  if ( v58 )
    sub_339E64(v58);
}
