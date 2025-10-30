int __fastcall sub_1596B4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *src,
        unsigned int *a10)
{
  int v14; // r0
  signed __int64 v15; // r0
  unsigned int v16; // r12
  signed __int64 v17; // r2
  unsigned int v18; // lr
  __int64 v19; // kr00_8
  int v20; // r4
  int v21; // lr
  int v22; // r6
  int v23; // r1
  int v24; // r2
  int v25; // r4
  __int64 v26; // r0
  int v27; // r9
  __int64 v28; // r0
  int v29; // r0
  _BOOL4 v30; // r3
  signed __int64 v32; // r4
  unsigned int v33; // r12
  signed __int64 v34; // r2
  unsigned int v35; // r12
  int v36; // r6
  int v37; // r7
  int v38; // r0
  bool v39; // zf
  int v41; // [sp+18h] [bp-34h]
  __int64 v42; // [sp+18h] [bp-34h]
  int v43; // [sp+20h] [bp-2Ch]
  int v44; // [sp+24h] [bp-28h]
  int v45; // [sp+28h] [bp-24h]
  int v46; // [sp+34h] [bp-18h]
  int v47; // [sp+38h] [bp-14h] BYREF
  signed __int64 v48; // [sp+40h] [bp-Ch] BYREF

  v14 = sub_171258(a3);
  LODWORD(v15) = sub_17195C(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + 12), &v47, &v48);
  if ( a1 == a2 )
  {
    v32 = v47;
    if ( v48 >= v47 && *a10 < src[7] )
    {
      do
      {
        v36 = sub_25CE0C(a8, HIDWORD(v15), v32, HIDWORD(v32));
        v37 = sub_26BC70(v36);
        v42 = sub_26BFE0(v36);
        v38 = ((int (__fastcall *)(int))loc_26C09C)(v36);
        sub_2669E8(v37, (int)off_46D5A4[0], v42, SHIDWORD(v42), v38, a6, a7, v36, src, (int)off_46D5A4[0]);
        v15 = __PAIR64__(", ", a6);
        v34 = v32;
        if ( v48 == v32 )
        {
          v33 = *a10;
        }
        else
        {
          LODWORD(v15) = sub_25A418(a6, ", ");
          v33 = *a10;
          v34 = v48;
          if ( *a10 == src[7] - 1 )
          {
            v39 = HIDWORD(v48) == HIDWORD(v32);
            HIDWORD(v15) = "...";
            if ( HIDWORD(v48) == HIDWORD(v32) )
              v39 = (_DWORD)v48 == (_DWORD)v32;
            LODWORD(v15) = a6;
            if ( v39 )
            {
              v34 = v32;
            }
            else
            {
              LODWORD(v15) = sub_25A418(a6, "...", v48);
              v34 = v48;
              v33 = *a10;
            }
          }
        }
        v35 = v33 + 1;
        ++v32;
        *a10 = v35;
      }
      while ( v34 >= v32 && v35 < src[7] );
    }
  }
  else
  {
    v15 = v48;
    v16 = src[7];
    v17 = v47;
    v18 = *a10;
    if ( v48 >= v47 && v16 > v18 )
    {
      v44 = a1 + 1;
      v19 = v47 + 1LL;
      v20 = *(_DWORD *)(*(_DWORD *)(a3 + 24) + 20);
      v21 = a4 + a5;
      v22 = 0;
      v45 = v21;
      v43 = *(_DWORD *)(v20 + 20);
      v46 = a2;
      while ( 1 )
      {
        v23 = ((int (__fastcall *)(int))loc_26BD48)(a8) + v22;
        v24 = v45 + v22;
        v22 += v43;
        v25 = sub_26DD30(v20, v23, v24);
        sub_25A418(a6, "( ");
        v26 = sub_26BC70(v25);
        v27 = v26;
        sub_26E718(v25, HIDWORD(v26));
        v28 = sub_26BFE0(v25);
        v41 = v28;
        v29 = ((int (__fastcall *)(int, _DWORD))loc_26C09C)(v25, HIDWORD(v28));
        sub_1596B4(v44, v46, v27, v41, v29, a6, a7, v25, src, a10);
        sub_25A418(a6, ") ");
        v15 = v48;
        v17 = v19;
        v18 = *a10;
        if ( v48 < v19 )
          break;
        v16 = src[7];
        ++v19;
        if ( v18 >= v16 )
          goto LABEL_9;
        v20 = *(_DWORD *)(*(_DWORD *)(a3 + 24) + 20);
      }
      v16 = src[7];
    }
LABEL_9:
    v30 = v17 < v15;
    if ( v18 >= v16 && v30 )
      LODWORD(v15) = sub_25A418(a6, "...");
  }
  return v15;
}
