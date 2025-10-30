int __fastcall sub_25FF4C(
        char *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        int a6,
        int *a7,
        __int64 *a8,
        int a9)
{
  int *v11; // r10
  int result; // r0
  int v13; // r3
  int v14; // r7
  __int16 *v15; // r2
  int v16; // r9
  int v17; // r4
  int v18; // r5
  int v19; // r3
  _BYTE *v20; // r11
  int *v21; // r1
  int v22; // r12
  int v23; // lr
  int v24; // r4
  char *v25; // r1
  _BOOL4 v26; // r5
  __int64 v27; // r0
  int v28; // r2
  int v29; // r9
  int v30; // r6
  int v31; // r3
  int v32; // r3
  unsigned __int64 v33; // kr00_8
  int v34; // r0
  int v35; // r3
  int v36; // r1
  int v37; // r0
  unsigned __int64 v38; // r2
  int v39; // r1
  int v40; // r0
  int v41; // r1
  int v42; // r3
  int v43; // r0
  unsigned int v44; // r3
  unsigned int v45; // r2
  unsigned int v46; // r3
  int v47; // r1
  const char *v48; // r2
  __int64 v49; // [sp+18h] [bp-34h]
  unsigned int v51; // [sp+24h] [bp-28h]
  _DWORD *v52; // [sp+24h] [bp-28h]
  int v53; // [sp+24h] [bp-28h]
  int v54; // [sp+28h] [bp-24h]
  __int64 v55; // [sp+30h] [bp-1Ch]
  unsigned int v56; // [sp+30h] [bp-1Ch]
  int v58; // [sp+3Ch] [bp-10h]
  int v59; // [sp+44h] [bp-8h] BYREF

  v11 = a7;
  result = sub_171258(a5);
  v13 = *(_DWORD *)(result + 24);
  v14 = result;
  if ( (*(_WORD *)(v13 + 2) & 0x380) == 0x80 )
    v15 = *(__int16 **)(v13 + 28);
  else
    v15 = &word_3B4A2C;
  v16 = *v15;
  v54 = v16;
  if ( a6 || (v17 = *(__int16 *)(v13 + 4) - 1, v17 < v16) )
  {
LABEL_14:
    if ( v16 <= 0 )
      return result;
    v24 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = 24 * v24;
        v52 = (_DWORD *)sub_171258(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + 24 * v24 + 12));
        if ( a6 )
        {
          v25 = *(char **)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + v30 + 16);
          v26 = v25 && !sub_25BD2C(a1, v25);
        }
        else
        {
          v26 = 0;
        }
        v27 = sub_26BFE0(a2);
        v28 = *(_DWORD *)(v14 + 24);
        if ( (*(_WORD *)(v28 + 2) & 0x380) != 0x80 )
          break;
        v31 = *(_DWORD *)(v28 + 28);
        if ( (__int16 *)v31 == &word_3B4A2C )
          break;
        v32 = *(_DWORD *)(v31 + 16);
        if ( !v32 || (((int)*(unsigned __int8 *)(v32 + (v24 >> 3)) >> (v24 & 7)) & 1) == 0 )
          break;
        v58 = sub_26E718(a2, HIDWORD(v27));
        v33 = __PAIR64__(a4, a3) + sub_26BFE0(a2);
        v34 = ((int (__fastcall *)(int))loc_26C09C)(a2);
        v55 = sub_FC59C(v14, v24, v58, v35, v33, SHIDWORD(v33), v34, a2);
        v49 = __PAIR64__(a4, a3) + sub_26BFE0(a2) + v55;
        if ( v49 >= 0 && v49 < *(unsigned int *)(sub_26BD30(a2) + 20) )
        {
          v29 = sub_26C4E0(a2, HIDWORD(v49));
          sub_26BC78(v29, v52);
          result = sub_26BFE8(v29, v39, v49, HIDWORD(v49));
        }
        else
        {
          v56 = ((int (__fastcall *)(int))loc_26C09C)(a2) + v49;
          v29 = sub_25F714(v52, v56, 1);
          v53 = sub_26BCB8(v29, v36);
          v37 = sub_26BC70(v29);
          result = sub_230020(v56, v53, *(_DWORD *)(v37 + 20));
          if ( result )
            sub_946E0("virtual baseclass botch");
        }
        if ( v26 )
          goto LABEL_24;
        ++v24;
        result = sub_25FF4C(
                   a1,
                   v29,
                   0,
                   0,
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + v30 + 12),
                   a6,
                   v11,
                   a8,
                   a9);
        if ( v24 == v54 )
          return result;
      }
      if ( v26 )
      {
        v49 = __PAIR64__(a4, a3) + v27;
        result = ((int (__fastcall *)(int, _DWORD, unsigned int, unsigned int, int, int))loc_26F358)(
                   a2,
                   (__PAIR64__(a4, a3) + v27) >> 32,
                   a3,
                   a4,
                   v24,
                   v14);
        v29 = result;
LABEL_24:
        if ( v29 )
        {
          if ( *v11 )
          {
            result = v49;
            if ( v49 != *a8 )
            {
              v48 = *(const char **)(*(_DWORD *)(a9 + 24) + 8);
              if ( !v48 )
                v48 = "<unnamed type>";
              sub_946E0("base class '%s' is ambiguous in type '%s'", a1, v48);
            }
          }
          *v11 = v29;
          *a8 = v49;
        }
        goto LABEL_28;
      }
      v38 = *(_QWORD *)(*(_DWORD *)(v28 + 24) + 24 * v24) / 8LL + __PAIR64__(a4, a3);
      result = sub_25FF4C(a1, a2, v38, HIDWORD(v38), v52, a6, v11, a8, a9);
LABEL_28:
      if ( ++v24 == v54 )
        return result;
    }
  }
  v18 = 24 * v17;
  v51 = a3;
  while ( 1 )
  {
    v19 = *(_DWORD *)(v13 + 24) + v18;
    v20 = *(_BYTE **)(v19 + 16);
    if ( !v20 )
      goto LABEL_12;
    result = sub_25BD2C(*(char **)(v19 + 16), a1);
    if ( !result )
      break;
    if ( !*v20 )
    {
      v21 = (int *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + v18);
      v22 = v21[3];
      result = *(_DWORD *)(v22 + 24);
      v23 = *(char *)result;
      if ( (unsigned __int8)(v23 - 3) <= 1u )
      {
        v59 = (unsigned __int8)*v20;
        if ( v23 != 3 && (*(__int16 *)(result + 4) <= 0 || *(_QWORD *)*(_DWORD *)(result + 24)) )
        {
          v45 = v51;
          v46 = a4;
        }
        else
        {
          v40 = v21[1];
          v41 = *v21;
          v42 = (v40 >> 31) & 7;
          v43 = v40 + __CFADD__(v42, v41) + a6;
          v44 = ((unsigned int)(v42 + v41) >> 3) | (v43 << 29);
          v45 = v44 + v51;
          v46 = a4 + __CFADD__(v44, v51) + (v43 >> 3);
        }
        result = sub_25FF4C(a1, a2, v45, v46, v22, a6, &v59, a8, a9);
        if ( v59 )
        {
          *a7 = v59;
          return result;
        }
      }
    }
LABEL_12:
    v18 -= 24;
    if ( v16 == v17 )
    {
      v11 = a7;
      a3 = v51;
      goto LABEL_14;
    }
    v13 = *(_DWORD *)(v14 + 24);
    --v17;
  }
  if ( sub_174F0C(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + v18) )
    result = ((int (__fastcall *)(int, int))loc_26D23C)(v14, v17);
  else
    result = ((int (__fastcall *)(int, int, unsigned int, unsigned int, int, int))loc_26F358)(
               a2,
               v47,
               v51,
               a4,
               v17,
               v14);
  *a7 = result;
  return result;
}
