int __fastcall sub_9AC40(_DWORD *a1, int *a2, _DWORD *a3)
{
  int i; // r0
  int v5; // r0
  int v6; // r8
  int v7; // r7
  int v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r0
  unsigned __int8 *v11; // r11
  unsigned int v12; // r9
  unsigned int v13; // r7
  int v14; // r0
  bool v15; // cc
  void (__fastcall *v16)(_DWORD, _DWORD, int, _BYTE *, int, _DWORD *, _DWORD); // r7
  int v17; // r0
  int v18; // r5
  size_t v19; // r2
  int v20; // r2
  int v21; // r3
  int v22; // r2
  size_t v23; // r3
  int v24; // r2
  _BYTE *v25; // r5
  int v26; // r6
  __int16 v27; // r2
  void (__fastcall *v28)(_DWORD, _DWORD, int, _BYTE *, int, _DWORD *, _DWORD); // r7
  int result; // r0
  int v30; // r3
  int v31; // r3
  unsigned int v32; // r7
  int v33; // r10
  int v34; // r3
  int v35; // r0
  unsigned int v36; // r3
  unsigned int v37; // r3
  int v38; // r0
  _DWORD *v39; // lr
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r2
  void *v46; // r1
  int v47; // r5
  int v48; // r0
  size_t v49; // r1
  void (__fastcall *v50)(_DWORD, _DWORD, int, _BYTE *, int, _DWORD *, _DWORD); // r7
  int v51; // [sp+14h] [bp-168h]
  int v52; // [sp+18h] [bp-164h]
  int v55; // [sp+2Ch] [bp-150h] BYREF
  size_t v56; // [sp+30h] [bp-14Ch] BYREF
  int v57; // [sp+34h] [bp-148h] BYREF
  int s2; // [sp+38h] [bp-144h] BYREF
  int v59; // [sp+3Ch] [bp-140h]
  _BYTE v60[3]; // [sp+40h] [bp-13Ch] BYREF
  unsigned __int8 v61; // [sp+43h] [bp-139h]
  unsigned __int8 v62[4]; // [sp+4Ch] [bp-130h] BYREF
  unsigned int v63; // [sp+50h] [bp-12Ch]
  unsigned __int16 v64; // [sp+54h] [bp-128h]
  int v65; // [sp+58h] [bp-124h]
  unsigned int v66; // [sp+5Ch] [bp-120h]
  char v67; // [sp+6Ch] [bp-110h] BYREF

  v52 = a1[32];
  memset((void *)(v52 + 332), 0, 0x2Cu);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      for ( i = a1[32]; ; i = a1[32] )
      {
        v5 = sub_A8748(*(_DWORD *)(i + 272));
        v6 = v5;
        if ( !v5 )
          goto LABEL_6;
LABEL_4:
        v7 = *(_DWORD *)(v5 + 8);
        v8 = a1[32];
        v9 = *(unsigned __int16 *)(v7 + 8);
        v10 = *(unsigned __int16 *)(v8 + 268);
        if ( v9 >= v10 )
          break;
        sub_A874C(*(_DWORD *)(v8 + 272));
        sub_9A264(v7);
        sub_A86B0(v6);
      }
      if ( !*(_DWORD *)(v7 + 48) && v9 == v10 )
      {
        v18 = *(_DWORD *)(v7 + 16);
        sub_A874C(*(_DWORD *)(v8 + 272));
        if ( !sub_9A188(a1, (unsigned __int8 *)v7) )
        {
          sub_9A264(v7);
          sub_A86B0(v6);
          a1[29] = 0;
          return 0;
        }
        v19 = *(_DWORD *)(v7 + 16);
        if ( v19 )
          memcpy((void *)(*(_DWORD *)(a1[27] + 4) + *(_DWORD *)(v7 + 12) + 12), *(const void **)(v7 + 44), v19);
        sub_9A264(v7);
        sub_A86B0(v6);
        v20 = a1[31];
        a1[29] = v18;
        v21 = a1[27];
        v22 = *(_DWORD *)(v20 + 524);
        goto LABEL_34;
      }
      while ( 1 )
      {
LABEL_6:
        if ( (*(int (__fastcall **)(_DWORD *, int, int *, _BYTE *, int, _DWORD, size_t *))(a1[1] + 56))(
               a1,
               22,
               &v55,
               v60,
               12,
               0,
               &v56) <= 0 )
          goto LABEL_48;
        if ( v55 == 20 )
        {
          if ( v60[0] != 1 )
          {
            sub_95494(a1, 10, 370, 103, (int)"ssl/statem/statem_dtls.c", 772);
            goto LABEL_46;
          }
          memcpy(*(void **)(a1[27] + 4), v60, v56);
          v21 = a1[27];
          v22 = 257;
          v47 = a1[31];
          v48 = *(_DWORD *)(v21 + 4);
          v49 = v56 - 1;
          a1[29] = v56 - 1;
          a1[28] = v48 + 1;
          *(_DWORD *)(v47 + 520) = v49;
          *(_DWORD *)(v47 + 524) = 257;
LABEL_34:
          v25 = *(_BYTE **)(v21 + 4);
          *a2 = v22;
          *a3 = a1[29];
          if ( *a2 == 257 )
          {
            v50 = (void (__fastcall *)(_DWORD, _DWORD, int, _BYTE *, int, _DWORD *, _DWORD))a1[33];
            result = 1;
            if ( v50 )
            {
              v50(0, *a1, 20, v25, 1, a1, a1[34]);
              return 1;
            }
          }
          else
          {
            v26 = *(_DWORD *)(v52 + 336);
            *v25 = *(_BYTE *)(v52 + 332);
            v25[1] = BYTE2(v26);
            v25[3] = v26;
            v25[2] = BYTE1(v26);
            v25[4] = HIBYTE(*(_WORD *)(v52 + 340));
            v27 = *(_WORD *)(v52 + 340);
            v25[11] = v26;
            v25[9] = BYTE2(v26);
            v25[5] = v27;
            v25[10] = BYTE1(v26);
            v25[6] = 0;
            v25[7] = 0;
            v25[8] = 0;
            if ( *a1 == 256 )
              v25 += 12;
            else
              v26 += 12;
            if ( *a2 == 20 && !sub_9BE38(a1) || !sub_A91B0(a1, v25, v26) )
              return 0;
            v28 = (void (__fastcall *)(_DWORD, _DWORD, int, _BYTE *, int, _DWORD *, _DWORD))a1[33];
            if ( v28 )
              v28(0, *a1, 22, v25, v26, a1, a1[34]);
            memset((void *)(v52 + 332), 0, 0x2Cu);
            result = 1;
            v30 = *(_DWORD *)(a1[27] + 4) + 12;
            ++*(_WORD *)(a1[32] + 268);
            a1[28] = v30;
          }
          return result;
        }
        if ( v56 != 12 )
        {
          v31 = 788;
LABEL_45:
          sub_95494(a1, 10, 370, 244, (int)"ssl/statem/statem_dtls.c", v31);
LABEL_46:
          a1[29] = 0;
          return 0;
        }
        v11 = v62;
        sub_9ABF0((int)v60, v62);
        v12 = v66;
        v13 = v63;
        v51 = v65;
        if ( v12 > sub_7EF90((int)(a1 + 404)) )
        {
          v34 = 805;
          goto LABEL_55;
        }
        v14 = a1[32];
        if ( *(unsigned __int16 *)(v14 + 268) != v64 )
          break;
        v15 = v12 != 0;
        if ( v12 )
          v15 = v13 > v12;
        if ( v15 )
          goto LABEL_61;
        if ( a1[7] || *(_DWORD *)(v14 + 344) || a1[16] == 1 || v60[0] )
        {
          if ( sub_9A188(a1, v62) )
          {
            v23 = v12;
            if ( !v12 )
            {
LABEL_33:
              v24 = a1[31];
              a1[29] = v23;
              v21 = a1[27];
              v22 = *(_DWORD *)(v24 + 524);
              goto LABEL_34;
            }
            if ( (*(int (__fastcall **)(_DWORD *, int, _DWORD, int, unsigned int, _DWORD, size_t *))(a1[1] + 56))(
                   a1,
                   22,
                   0,
                   *(_DWORD *)(a1[27] + 4) + v51 + 12,
                   v12,
                   0,
                   &v56) <= 0 )
            {
LABEL_48:
              a1[5] = 3;
              return 0;
            }
            v23 = v56;
            if ( v12 == v56 )
              goto LABEL_33;
            v34 = 882;
LABEL_55:
            sub_95494(a1, 47, 370, 271, (int)"ssl/statem/statem_dtls.c", v34);
          }
          goto LABEL_46;
        }
        if ( v60[1] || v60[2] || v61 )
        {
          v31 = 846;
          goto LABEL_45;
        }
        v16 = (void (__fastcall *)(_DWORD, _DWORD, int, _BYTE *, int, _DWORD *, _DWORD))a1[33];
        if ( v16 )
        {
          v16(v61, *a1, 22, v60, 12, a1, a1[34]);
          v14 = a1[32];
        }
        v17 = *(_DWORD *)(v14 + 272);
        a1[29] = 0;
        v5 = sub_A8748(v17);
        v6 = v5;
        if ( v5 )
          goto LABEL_4;
      }
      v32 = v66;
      if ( v65 + v66 > v63 )
        goto LABEL_52;
      v59 = 0;
      v35 = *(_DWORD *)(v14 + 272);
      s2 = 0;
      HIWORD(v59) = HIBYTE(v64);
      HIBYTE(v59) = v64;
      v33 = sub_A8758(v35, &s2);
      if ( !v33 || v32 != v63 )
        break;
LABEL_67:
      if ( v32 )
      {
        while ( (*(int (__fastcall **)(_DWORD *, int))(a1[1] + 56))(a1, 22) > 0 )
        {
          v32 -= v57;
          if ( !v32 )
            goto LABEL_2;
        }
        if ( !v33 )
          goto LABEL_53;
        return 0;
      }
    }
    v36 = *(unsigned __int16 *)(a1[32] + 268);
    if ( v64 <= v36 || v64 > (int)(v36 + 10) )
    {
      v33 = 0;
      goto LABEL_67;
    }
    if ( !*(_WORD *)(a1[32] + 268) && v62[0] == 20 )
    {
      v33 = *(unsigned __int16 *)(a1[32] + 268);
      goto LABEL_67;
    }
    if ( v32 == v63 )
      break;
LABEL_61:
    if ( (unsigned int)(sub_9A2A8(a1, (int)v62) + 3) > 1 )
      return 0;
  }
  v37 = 17740;
  if ( a1[319] > 0x454Cu )
    v37 = a1[319];
  if ( v37 >= v32 && (v38 = sub_9A0C4(v32, 0), (v33 = v38) != 0) )
  {
    v39 = (_DWORD *)v38;
    do
    {
      v39 += 4;
      v40 = *(_DWORD *)v11;
      v41 = *((_DWORD *)v11 + 1);
      v42 = *((_DWORD *)v11 + 2);
      v43 = *((_DWORD *)v11 + 3);
      v11 += 16;
      *(v39 - 4) = v40;
      *(v39 - 3) = v41;
      *(v39 - 2) = v42;
      *(v39 - 1) = v43;
    }
    while ( v11 != (unsigned __int8 *)&v67 );
    v44 = *((_DWORD *)v11 + 1);
    v45 = *((_DWORD *)v11 + 2);
    *v39 = *(_DWORD *)v11;
    v39[1] = v44;
    v39[2] = v45;
    if ( !v32
      || (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, unsigned int, _DWORD, int *))(a1[1] + 56))(
           a1,
           22,
           0,
           *(_DWORD *)(v33 + 44),
           v32,
           0,
           &v57) > 0
      && v32 == v57 )
    {
      v46 = (void *)sub_A8668(&s2, v33);
      if ( v46 )
      {
        if ( sub_A8708(*(_DWORD *)(a1[32] + 272), v46) )
          goto LABEL_2;
      }
    }
  }
  else
  {
LABEL_52:
    v33 = 0;
  }
LABEL_53:
  sub_9A264(v33);
  return 0;
}
