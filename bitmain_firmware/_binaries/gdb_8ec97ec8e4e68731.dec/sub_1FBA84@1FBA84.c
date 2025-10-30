int __fastcall sub_1FBA84(int *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r8
  _DWORD *v10; // r0
  int v11; // r0
  int v12; // r5
  int v13; // r7
  unsigned int v14; // r7
  int v15; // r0
  int v16; // r8
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r5
  int v20; // r9
  int v21; // r9
  int v22; // r3
  __int64 v23; // r0
  int v24; // r9
  int *v25; // r0
  int v26; // r4
  int *v27; // r6
  const char *v28; // r4
  _DWORD *v29; // r0
  int v30; // r4
  int v31; // r0
  int v32; // r5
  int v33; // r7
  int v34; // r8
  int v35; // r0
  __int64 v36; // r0
  int v37; // r7
  int v38; // r0
  int v40; // r10
  int v41; // r0
  const char *v42; // r11
  int v43; // r3
  int v44; // r11
  int v45; // r0
  int v46; // r0
  char *v47; // r9
  int v48; // r6
  _DWORD *v49; // r6
  int v50; // r11
  int v51; // r6
  int v52; // r7
  int v53; // r0
  int v54; // r1
  int *v55; // r0
  int v56; // r0
  __int64 v57; // r0
  __int64 v58; // [sp+8h] [bp-2Ch]
  int v59; // [sp+8h] [bp-2Ch]
  int v60; // [sp+8h] [bp-2Ch]
  __int64 v61; // [sp+10h] [bp-24h]
  int v62; // [sp+1Ch] [bp-18h] BYREF
  __int64 v63; // [sp+20h] [bp-14h] BYREF
  __int64 v64; // [sp+28h] [bp-Ch] BYREF

  ++*a2;
  v62 = sub_14C9EC(0, a1, a2, a3);
  v8 = sub_14C9EC(0, a1, a2, a3);
  if ( a3 == 1 )
    return v62;
  v9 = v8;
  v10 = (_DWORD *)sub_26BC70(v8);
  v11 = sub_171258(v10);
  v12 = *(_DWORD *)(v11 + 24);
  v13 = v11;
  if ( *(_BYTE *)v12 != 3 )
    goto LABEL_3;
  v40 = *(__int16 *)(v12 + 4);
  if ( v40 > 2 )
    goto LABEL_3;
  v41 = *(_DWORD *)(v12 + 12);
  if ( !v41 || !sub_338BD4(v41, "::Range") )
    goto LABEL_3;
  if ( !v40 )
  {
    if ( a4 )
    {
      v61 = 0;
      v14 = 0;
      v58 = 0;
      v16 = a4;
      goto LABEL_4;
    }
    goto LABEL_74;
  }
  v42 = *(const char **)(*(_DWORD *)(v12 + 24) + 16);
  v59 = *(_DWORD *)(v12 + 24);
  v43 = strcmp(v42, "start");
  if ( !v43 )
  {
    if ( v40 != 1 )
    {
      v42 = *(const char **)(v59 + 40);
      goto LABEL_36;
    }
    if ( a4 )
      goto LABEL_70;
LABEL_74:
    sub_946E0(aCanTTakeSliceO);
  }
  if ( v40 == 2 )
    goto LABEL_3;
LABEL_36:
  v60 = v43;
  v44 = strcmp(v42, "end");
  if ( v44 )
  {
LABEL_3:
    v14 = 0;
    v15 = v9;
    v16 = 0;
    v58 = sub_26EB1C(v15);
    v61 = 0;
    goto LABEL_4;
  }
  if ( !a4 )
    goto LABEL_74;
  if ( !v60 )
  {
LABEL_70:
    v56 = sub_26F824(v9, 0);
    v57 = sub_26EB1C(v56);
    v12 = *(_DWORD *)(v13 + 24);
    v44 = 1;
    v58 = v57;
    v14 = 2;
    v40 = *(__int16 *)(v12 + 4);
    goto LABEL_40;
  }
  v14 = 0;
  v58 = 0;
LABEL_40:
  if ( v40 > v44 && !strcmp(*(const char **)(*(_DWORD *)(v12 + 24) + 24 * v44 + 16), "end") )
  {
    v45 = v9;
    if ( v14 )
      v14 = 3;
    else
      v14 = 1;
    v16 = 1;
    v46 = sub_26F824(v45, v44);
    v61 = sub_26EB1C(v46);
  }
  else
  {
    v61 = 0;
    v16 = 1;
  }
LABEL_4:
  v17 = (_DWORD *)sub_26BC70(v62);
  v18 = sub_171258(v17);
  v19 = (_DWORD *)v18;
  if ( a3 == 2 )
  {
    v47 = *(char **)(v18 + 24);
    v48 = *v47;
    if ( v48 == 2 )
    {
      v49 = (_DWORD *)*((_DWORD *)v47 + 5);
    }
    else
    {
      if ( !sub_1F92E0(*(_DWORD *)(v18 + 24)) )
      {
        if ( v48 != 1 )
          goto LABEL_81;
        v19 = (_DWORD *)*((_DWORD *)v47 + 5);
        if ( !v16 )
        {
LABEL_58:
          nullsub_31(v62);
          return sub_260DBC(v19);
        }
LABEL_66:
        v55 = sub_1946C8(*a1, a1[1], "usize");
        v19 = (_DWORD *)sub_1FB820((int)"&[*gdb*]", v19, v55);
        goto LABEL_58;
      }
      v50 = *((__int16 *)v47 + 2);
      if ( v50 <= 0 )
        goto LABEL_54;
      v51 = *((_DWORD *)v47 + 6);
      v52 = 0;
      while ( strcmp(*(const char **)(v51 + 16), "data_ptr") )
      {
        ++v52;
        v51 += 24;
        if ( v52 == v50 )
          goto LABEL_54;
      }
      v49 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v51 + 12) + 24) + 20);
      if ( !v49 )
LABEL_54:
        sub_946E0("Could not find 'data_ptr' in slice type");
    }
    if ( !v16 )
    {
      v19 = v49;
      goto LABEL_58;
    }
    if ( sub_1F92E0((int)v47) )
      goto LABEL_58;
    v19 = v49;
    goto LABEL_66;
  }
  v20 = **(char **)(v18 + 24);
  if ( v20 == 2 )
  {
    v21 = v62;
    if ( !sub_171B30(v18, &v64, &v63) )
      sub_946E0("Can't compute array bounds");
    if ( v64 )
      sub_946E0("Found array with non-zero lower bound", v54, (_DWORD)v64, (unsigned int)v64 | HIDWORD(v64));
    ++v63;
  }
  else
  {
    if ( !sub_1F92E0(*(_DWORD *)(v18 + 24)) )
    {
      if ( v20 == 1 )
      {
        v21 = v62;
        v64 = 0;
        v63 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
LABEL_81:
      sub_946E0("Cannot subscript non-array type");
    }
    v21 = sub_2624C8(&v62, 0, "data_ptr", 0, "slice");
    v53 = sub_2624C8(&v62, 0, "length", 0, "slice");
    v64 = 0;
    v63 = sub_26EB1C(v53);
  }
LABEL_9:
  if ( v14 <= 1 )
    v22 = v16 & 1;
  else
    v22 = 0;
  if ( v22 )
    v58 = v64;
  if ( v58 < 0 )
    sub_946E0("Index less than zero");
  if ( v63 < v58 )
    sub_946E0("Index greater than length");
  v23 = sub_25CE0C(v21, HIDWORD(v58), v58, HIDWORD(v58));
  v24 = v23;
  if ( !a4 )
    return v24;
  if ( !v16 )
    return sub_2616BC(v23);
  if ( (v14 & 1) == 0 )
    v61 = v63;
  if ( v61 < 0 )
    sub_946E0("High index less than zero", HIDWORD(v23));
  if ( v61 < v58 )
    sub_946E0("Low index greater than high index");
  if ( v63 < v61 )
    sub_946E0("High index greater than length");
  v25 = sub_1946C8(*a1, a1[1], "usize");
  v26 = v19[6];
  v27 = v25;
  if ( sub_1F92E0(v26) )
    v28 = *(const char **)(v26 + 8);
  else
    v28 = "&[*gdb*]";
  v29 = (_DWORD *)sub_26BC70(v24);
  v30 = sub_1FB820((int)v28, v29, v27);
  v31 = sub_2612F8(*(_DWORD *)(v30 + 20));
  v32 = sub_26EB1C(v31);
  v33 = sub_260F84(v30, v32);
  v34 = sub_26F824(v33, 0);
  v35 = sub_2616BC(v24);
  ((void (__fastcall *)(int, int))loc_265548)(v34, v35);
  v36 = sub_26F824(v33, 1);
  v37 = v36;
  v38 = sub_26DAF4(v27, HIDWORD(v36), (int)v61 - (int)v58, (unsigned __int64)(v61 - v58) >> 32);
  ((void (__fastcall *)(int, int))loc_265548)(v37, v38);
  return sub_260F84(v30, v32);
}
