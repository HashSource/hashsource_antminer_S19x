int __fastcall sub_AB3BC(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r4
  int v9; // r7
  int v10; // r3
  int v11; // r8
  int v12; // r3
  bool v13; // zf
  int v14; // r6
  int v16; // r0
  int v17; // r8
  __int64 v18; // r0
  int v19; // r6
  void *v20; // r7
  const void *v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r11
  int v25; // r8
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r10
  int v30; // r9
  int v31; // r6
  int v32; // r7
  int v33; // r1
  int v34; // r4
  signed int v35; // r0
  int v36; // r6
  int v37; // r7
  int v38; // r1
  int v39; // r3
  int v40; // r4
  signed int v41; // r0
  int v42; // r10
  int v43; // r11
  int v44; // r0
  int v45; // r5
  int v46; // r8
  _DWORD *v47; // r2
  int v48; // r6
  bool v49; // zf
  int v50; // r5
  int v51; // r8
  int v52; // r9
  int v53; // r6
  int v54; // r3
  unsigned int v55; // r10
  int v56; // r10
  int v57; // [sp+10h] [bp-1Ch]
  int v58; // [sp+10h] [bp-1Ch]
  int v59; // [sp+14h] [bp-18h]
  int v60; // [sp+14h] [bp-18h]
  int v61; // [sp+18h] [bp-14h]
  int v62; // [sp+1Ch] [bp-10h]
  int v63; // [sp+20h] [bp-Ch]
  int v64; // [sp+24h] [bp-8h]

  v3 = a1;
  v4 = sub_26BC70(a1);
  v5 = sub_A0870(v4);
  v6 = sub_A0870(a2);
  v7 = *(_DWORD *)(v6 + 24);
  v8 = v6;
  if ( *(_BYTE *)v7 == 1 )
    v9 = sub_A0870(*(_DWORD *)(v7 + 20));
  else
    v9 = v6;
  v10 = *(_DWORD *)(v5 + 24);
  if ( *(_BYTE *)v10 == 1 )
    v11 = sub_A0870(*(_DWORD *)(v10 + 20));
  else
    v11 = v5;
  if ( sub_A0C94(v9) && **(_BYTE **)(v11 + 24) == 2 )
  {
    v24 = sub_A0C08(v8);
    v63 = sub_A0A60(v8);
    v62 = sub_26BB80(v63);
    v25 = sub_26BB80(v24);
    v26 = sub_26BC70(v3);
    v27 = sub_A0870(v26);
    if ( v27 )
    {
      v28 = sub_A15F8(v27);
      v29 = v28;
      if ( v28 > 0 )
      {
        v64 = v8;
        v30 = 48 * v28 - 48;
        do
        {
          v31 = sub_26BC70(v25);
          v32 = sub_26E954(v25);
          v57 = sub_A8EE8(v3, v29, 0);
          v59 = v33;
          v34 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_A0A60(v24) + 24) + 24) + v30);
          v35 = sub_A0B74(v24, v29, 0);
          sub_26D7D8(v31, v32, v57, v59, v34, v34 >> 31, v35, v35 >> 31);
          v36 = sub_26BC70(v25);
          v37 = sub_26E954(v25);
          v58 = sub_A8EE8(v3, v29, 1);
          v60 = v38;
          v39 = *(_DWORD *)(*(_DWORD *)(sub_A0A60(v24) + 24) + 24) + v30;
          v30 -= 48;
          v40 = *(_DWORD *)(v39 + 24);
          v41 = sub_A0B74(v24, v29, 1);
          sub_26D7D8(v36, v37, v58, v60, v40, v40 >> 31, v41, v41 >> 31);
          --v29;
        }
        while ( v29 );
        v8 = v64;
      }
    }
    v42 = sub_A183C(v25);
    v43 = sub_26BC70(v62);
    v61 = sub_26E954(v62);
    v44 = sub_A183C(v3);
    v45 = sub_9B67C(v44, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v63 + 24) + 24) + 12));
    v46 = **(_DWORD **)(*(_DWORD *)(sub_A0A60(v63) + 24) + 24);
    v47 = *(_DWORD **)(*(_DWORD *)(sub_A0A60(v63) + 24) + 24);
    v48 = v47[2];
    v49 = (v48 & 0xFFFFFFF0) == 0;
    if ( (v48 & 0xFFFFFFF0) != 0 )
      v48 = (unsigned int)v48 >> 4;
    else
      v47 = (_DWORD *)v47[3];
    if ( v49 )
      v48 = 8 * v47[5];
    sub_26D7D8(v43, v61, v45, 0, v46, v46 >> 31, v48, v48 >> 31);
    v50 = sub_26BC70(v62);
    v51 = sub_26E954(v62);
    v52 = sub_9B67C(v42, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v63 + 24) + 24) + 36));
    v53 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_A0A60(v63) + 24) + 24) + 24);
    v54 = *(_DWORD *)(*(_DWORD *)(sub_A0A60(v63) + 24) + 24);
    v55 = *(_DWORD *)(v54 + 32);
    if ( (v55 & 0xFFFFFFF0) != 0 )
      v56 = v55 >> 4;
    else
      v56 = 8 * *(_DWORD *)(sub_A0870(*(_DWORD *)(v54 + 36)) + 20);
    sub_26D7D8(v50, v51, v52, 0, v53, v53 >> 31, v56, v56 >> 31);
    v14 = sub_A183C(v62);
    if ( **(_BYTE **)(v8 + 24) != 1 )
      return v14;
    return ((int (*)(void))sub_2616BC)();
  }
  v12 = **(char **)(v8 + 24);
  v13 = v12 == 1;
  if ( v12 != 1 )
    v13 = v12 == 18;
  if ( v13 )
  {
    if ( **(_BYTE **)(v9 + 24) == 2 )
    {
      if ( sub_A0C94(v11) )
      {
        sub_A140C(v3);
        goto LABEL_42;
      }
      v12 = **(char **)(v8 + 24);
    }
    if ( v12 == 1 )
      return v3;
    if ( *(_DWORD *)nullsub_31(v3) != 1 )
    {
      v16 = sub_26BC70(v3);
      v17 = sub_A0870(v16);
      v18 = sub_26BB80(v17);
      v19 = v18;
      v20 = (void *)sub_26BCB8(v18, HIDWORD(v18));
      v21 = (const void *)sub_26E978(v3);
      memcpy(v20, v21, *(_DWORD *)(v17 + 20));
      v3 = sub_A183C(v19);
    }
    sub_2616BC(v3);
LABEL_42:
    JUMPOUT(0x2638F0);
  }
  if ( **(_BYTE **)(v5 + 24) == 1 )
    return sub_AB378(v3);
  if ( !sub_A2514(v8) )
    return v3;
  v22 = sub_26BB80(v8);
  v23 = sub_A93B4(v22, "F", 0);
  sub_9B3E0(v22, v23, v3);
  return v22;
}
