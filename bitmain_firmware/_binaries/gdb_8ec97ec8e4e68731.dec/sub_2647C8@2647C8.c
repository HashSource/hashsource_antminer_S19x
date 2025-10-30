int __fastcall sub_2647C8(_DWORD *a1, int a2)
{
  int v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int v6; // r8
  int v7; // r6
  int v8; // r7
  _DWORD *v9; // r0
  int v10; // r0
  unsigned __int8 *v11; // r2
  int v12; // r4
  _DWORD *v13; // r2
  _DWORD *v14; // r0
  int v15; // r9
  unsigned int v16; // r3
  int v17; // r10
  bool v18; // cc
  int v19; // r11
  bool v20; // zf
  int v22; // r0
  int v23; // r5
  int v24; // r0
  int v25; // r0
  int v26; // r0
  bool v27; // zf
  __int64 v29; // r2
  __int64 v30; // r0
  int v31; // r0
  bool v32; // zf
  int v34; // r1
  int v35; // r0
  _DWORD *v36; // r9
  int v37; // r10
  int v38; // r11
  int v39; // r4
  __int64 v40; // r0
  unsigned int v41; // r4
  unsigned int v42; // kr00_4
  _DWORD *v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r6
  unsigned __int8 *v47; // r4
  int v48; // r0
  unsigned int v49; // r0
  int v50; // r1
  int v51; // r4
  __int64 v52; // r0
  int v53; // r4
  __int64 v54; // r0
  bool v55; // zf
  int v56; // r0
  unsigned int v57; // r4
  __int64 v58; // r8
  __int64 v59; // r0
  int v60; // r4
  int v61; // r6
  __int64 v62; // r0
  int v63; // r8
  void *v64; // r9
  const void *v65; // r0
  int v66; // r1
  void *v67; // r9
  int v68; // r0
  int v69; // r0
  int v70; // r3
  int v71; // r2
  int v72; // r1
  bool v73; // zf
  __int64 v74; // r0
  const void *v75; // r5
  int v76; // r1
  void *v77; // r0
  int v78; // [sp+Ch] [bp-18h]
  __int64 v79; // [sp+10h] [bp-14h] BYREF
  __int64 v80; // [sp+18h] [bp-Ch] BYREF

  v3 = a2;
  if ( a1 == (_DWORD *)sub_26BC70(a2) )
    return v3;
  if ( **(_BYTE **)(sub_171258(a1) + 24) == 18 || **(_BYTE **)(sub_171258(a1) + 24) == 19 )
  {
    v23 = sub_171258(a1);
    v24 = sub_171258(*(_DWORD **)(*(_DWORD *)(v23 + 24) + 20));
    v25 = sub_2647C8(v24, v3);
    return ((int (__fastcall *)(int, _DWORD))loc_2618D4)(v25, **(char **)(v23 + 24));
  }
  else
  {
    v4 = (_DWORD *)sub_26BC70(v3);
    if ( **(_BYTE **)(sub_171258(v4) + 24) != 18 )
    {
      v5 = (_DWORD *)sub_26BC70(v3);
      if ( **(_BYTE **)(sub_171258(v5) + 24) != 19 )
      {
        v6 = sub_171258(a1);
        v7 = **(char **)(v6 + 24);
        v8 = sub_26EA24(v3);
        v9 = (_DWORD *)sub_26BC70(v8);
        v10 = sub_171258(v9);
        v11 = *(unsigned __int8 **)(v6 + 24);
        v12 = v10;
        if ( (unsigned int)*v11 - 18 <= 1 )
        {
          v52 = sub_94700(
                  (int)"valops.c",
                  392,
                  "%s: Assertion `%s' failed.",
                  "value* value_cast(type*, value*)",
                  "!TYPE_IS_REFERENCE (type)");
        }
        else
        {
          if ( v7 == 2 )
          {
            v36 = (_DWORD *)*((_DWORD *)v11 + 5);
            v37 = *(_DWORD *)(sub_171258(v36) + 20);
            if ( v37 )
            {
              v38 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + 12);
              if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v38 + 24) + 24) + 16) )
              {
                v39 = *(_DWORD *)(v12 + 20);
                if ( sub_17195C(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + 12), &v79, &v80) < 0 )
                {
                  v79 = 0;
                  v80 = 0;
                }
                v40 = sub_347674(v39, v37);
                v41 = v40;
                if ( HIDWORD(v40) )
                  sub_946B0("array element type size does not divide object size in cast");
                v42 = v41;
                v3 = v8;
                v43 = (_DWORD *)sub_171928(
                                  0,
                                  *(_DWORD **)(*(_DWORD *)(v38 + 24) + 20),
                                  v79,
                                  SHIDWORD(v79),
                                  v42 + v79 - 1,
                                  ((unsigned __int64)v42 + v79 - 1) >> 32);
                v44 = sub_172124(0, v36, v43);
                sub_26BC78(v8, v44);
                return v3;
              }
            }
          }
          v13 = *(_DWORD **)(v12 + 24);
          if ( *((_BYTE *)off_46D5A4[0] + 112) && (*v13 & 0x100FF) == 2 )
          {
            v22 = sub_26160C(v8);
            v13 = *(_DWORD **)(v12 + 24);
            v8 = v22;
          }
          if ( *(_BYTE *)v13 == 7 )
            v8 = sub_261670(v8);
          v14 = (_DWORD *)sub_26BC70(v8);
          v15 = sub_171258(v14);
          v16 = **(char **)(v15 + 24);
          if ( v7 != 22 )
          {
            if ( v7 == 21 )
            {
              v7 = 8;
              v78 = 1;
            }
            else
            {
              if ( v7 == 20 )
                v7 = 8;
              v78 = 0;
            }
            if ( v16 - 20 <= 1 )
            {
              v17 = 8;
              v19 = 1;
            }
            else
            {
              v17 = **(char **)(v15 + 24);
              v18 = v16 > 0x19;
              if ( v16 != 25 )
                v18 = v16 - 8 > 1;
              v19 = !v18;
              if ( v18 )
              {
                v20 = v16 == 12;
                if ( v16 != 12 )
                  v20 = v16 == 5;
                v19 = v20;
              }
              if ( (unsigned int)(v7 - 3) <= 1 && v16 - 3 <= 1 )
              {
                if ( *(_DWORD *)(*(_DWORD *)(v6 + 24) + 8) )
                {
                  v3 = ((int (__fastcall *)(_DWORD *, int))loc_26368C)(a1, v8);
                  if ( v3 )
                    return v3;
                }
              }
            }
            if ( sub_173720((_DWORD *)v6) )
              v26 = v19;
            else
              v26 = 0;
            if ( v26 )
            {
              if ( sub_26E9E0(v8) )
              {
                v3 = sub_26BB80(a1);
                v75 = (const void *)sub_26E978(v8);
                v77 = (void *)sub_26BCB8(v3, v76);
                sub_2529D0(v75, v15, v77, v6);
              }
              else if ( (*(_BYTE *)(*(_DWORD *)(v15 + 24) + 1) & 1) != 0 )
              {
                v54 = sub_26EB1C(v8);
                return sub_26DB78(a1, HIDWORD(v54), v54, HIDWORD(v54));
              }
              else
              {
                v74 = sub_26EB1C(v8);
                return sub_26DAF4(a1, HIDWORD(v74), v74, HIDWORD(v74));
              }
              return v3;
            }
            v27 = v7 == 5;
            if ( v7 != 5 )
              v27 = (v7 & 0xFFFFFFFB) == 8;
            if ( v27 )
            {
              if ( (v17 & 0xFFFFFFEF) == 1 ? v19 | 1 : v19 )
              {
                if ( v17 == 1 )
                {
                  v45 = sub_26E978(v8);
                  v46 = *(_DWORD *)(v15 + 20);
                  v47 = (unsigned __int8 *)v45;
                  v48 = sub_170040(v15);
                  v49 = ((int (__fastcall *)(int))loc_165BB8)(v48);
                  LODWORD(v29) = sub_15C250(v47, v46, v49);
                  HIDWORD(v29) = v50;
                }
                else
                {
                  v29 = sub_26EB1C(v8);
                }
                HIDWORD(v30) = v78;
                if ( v78 )
                {
                  v20 = v29 == 0;
                  HIDWORD(v29) = 0;
                  LODWORD(v29) = !v20;
                }
                return sub_26DAF4(a1, HIDWORD(v30), v29, HIDWORD(v29));
              }
            }
            if ( v7 == 1 )
            {
              v55 = v17 == 5;
              if ( v17 != 5 )
                v55 = (v17 & 0xFFFFFFFB) == 8;
              if ( v55 )
              {
                v56 = sub_170040(v15);
                v57 = ((int (__fastcall *)(int))loc_16666C)(v56);
                v30 = sub_26EB1C(v8);
                v58 = v30;
                if ( v57 <= 0x3F )
                {
                  if ( v30 >= __SPAIR64__((1 << (v57 - 32)) | (1u >> (32 - v57)), 1 << v57)
                    || (HIDWORD(v59) = (1 << (v57 - 32)) | (1u >> (32 - v57)),
                        LODWORD(v59) = 1 << v57,
                        v30 = -v59,
                        v30 >= v58) )
                  {
                    sub_946B0("value truncated");
                  }
                }
                v29 = v58;
                return sub_26DAF4(a1, HIDWORD(v30), v29, HIDWORD(v29));
              }
            }
            else
            {
              v32 = v7 == 16;
              if ( v7 == 16 )
                v32 = v17 == 8;
              if ( v32 )
              {
                if ( !sub_26EB1C(v8) )
                {
                  v3 = sub_26BB80(a1);
                  sub_26E954(v3);
                  sub_FC7D4();
                  return v3;
                }
              }
              else if ( v7 == 17 && v17 == 8 )
              {
                if ( !sub_26EB1C(v8) )
                  return sub_26DAF4(a1, 0, -1, -1);
              }
              else if ( v7 == 2 )
              {
                v69 = *(_DWORD *)(v6 + 20);
                v34 = *(_DWORD *)(v15 + 20);
                v70 = *(_BYTE *)(*(_DWORD *)(v6 + 24) + 2) & 1;
                if ( v17 == 2 )
                  v71 = *(_BYTE *)(*(_DWORD *)(v6 + 24) + 2) & 1;
                else
                  v71 = 0;
                if ( v71 && (*(_BYTE *)(*(_DWORD *)(v15 + 24) + 2) & 1) != 0 )
                {
                  if ( v34 != v69 )
                    sub_946E0("Cannot convert between vector values of different sizes");
                  if ( (v19 & v70) != 0 )
                    goto LABEL_106;
                }
                else if ( (v19 & v70) != 0 )
                {
                  if ( v34 != v69 )
                    sub_946E0("can only cast scalar to vector of same size");
                  goto LABEL_106;
                }
                if ( v34 != v69 )
                  goto LABEL_70;
LABEL_106:
                v3 = sub_26C4E0(v8, v34);
                sub_26BC78(v3, a1);
                sub_26D370(v3, a1);
                sub_26BFF8(v3, v72, 0, 0);
                return v3;
              }
              if ( v7 == 10 )
              {
                v3 = sub_26BB80(a1);
                *(_DWORD *)nullsub_31(v3) = 0;
                return v3;
              }
            }
            v34 = *(_DWORD *)(v6 + 20);
            if ( v34 != *(_DWORD *)(v15 + 20) )
            {
LABEL_70:
              if ( *(_DWORD *)nullsub_31(v8) != 1 )
                sub_946E0("Invalid cast.");
              v35 = ((int (__fastcall *)(int))loc_26C09C)(v8);
              return sub_25F714(a1, v35, 1);
            }
            v73 = v7 == 1;
            if ( v7 == 1 )
              v73 = v17 == 1;
            if ( v73 )
              return ((int (__fastcall *)(_DWORD *, int, _DWORD))loc_2638F0)(a1, v8, 0);
            goto LABEL_106;
          }
          v51 = *(_DWORD *)(a1[6] + 20);
          if ( **(_BYTE **)(sub_26BC70(v8) + 24) == 22 )
          {
            v60 = *(_DWORD *)(*(_DWORD *)(sub_26BC70(v8) + 24) + 20);
            v61 = sub_26BB80(v60);
            v62 = sub_26BB80(v60);
            v63 = v62;
            v64 = (void *)sub_26BCB8(v61, HIDWORD(v62));
            v65 = (const void *)sub_26E978(v8);
            memcpy(v64, v65, *(_DWORD *)(v60 + 20));
            v67 = (void *)sub_26BCB8(v63, v66);
            v68 = sub_26E978(v8);
            memcpy(v67, (const void *)(v68 + *(_DWORD *)(v60 + 20)), *(_DWORD *)(v60 + 20));
            return sub_264734(v61, v63, (int)a1);
          }
          if ( **(_BYTE **)(sub_26BC70(v8) + 24) == 9 || (v52 = sub_26BC70(v8), **(_BYTE **)(v52 + 24) == 8) )
          {
            v53 = sub_26BB80(v51);
            *(_DWORD *)nullsub_31(v53) = 0;
            return sub_264734(v8, v53, (int)a1);
          }
        }
        sub_946E0("cannot cast non-number to complex", HIDWORD(v52));
      }
    }
    v31 = sub_26EA24(v3);
    return sub_2647C8(a1, v31);
  }
}
