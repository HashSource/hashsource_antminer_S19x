int __fastcall sub_117684(int a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int v10; // r5
  int v12; // r9
  int v13; // r0
  int v14; // r11
  _DWORD *v15; // r1
  unsigned __int64 v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r2
  _DWORD *v20; // r6
  _DWORD *v21; // r8
  _DWORD *v22; // r9
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r12
  __int64 v27; // r0
  int v28; // r8
  size_t v30; // r4
  __int64 v31; // r0
  void *v32; // r0
  int v33; // r4
  int v34; // r10
  int v35; // r0
  size_t v36; // r6
  unsigned int v37; // r9
  int v38; // r7
  __int64 v39; // r0
  int v40; // r1
  void *v41; // r5
  int v42; // r0
  int v43; // r4
  int v44; // r0
  __int64 v45; // r0
  int v46; // r0
  int v47; // r1
  int v48; // r4
  __int64 v49; // r0
  int v50; // r6
  int v51; // r6
  int v52; // r4
  int v53; // r3
  int v54; // r0
  int v55; // r0
  int v56; // r6
  int v57; // r0
  __int64 v58; // r0
  int *v59; // r0
  int v60; // r3
  int *v61; // r4
  int v62; // r0
  _DWORD *v63; // r0
  void *v64; // [sp+1Ch] [bp-78h]
  _DWORD v65[6]; // [sp+20h] [bp-74h] BYREF
  int (**v66)(); // [sp+38h] [bp-5Ch] BYREF
  void *v67; // [sp+3Ch] [bp-58h]
  int v68; // [sp+48h] [bp-4Ch]
  int v69; // [sp+4Ch] [bp-48h]
  int v70; // [sp+50h] [bp-44h]
  int v71; // [sp+54h] [bp-40h]
  int v72; // [sp+60h] [bp-34h]
  unsigned __int64 v73; // [sp+68h] [bp-2Ch]
  int v74; // [sp+70h] [bp-24h]
  int v75; // [sp+74h] [bp-20h]
  void *ptr; // [sp+78h] [bp-1Ch]
  _DWORD *v77; // [sp+7Ch] [bp-18h]
  int v78; // [sp+80h] [bp-14h]
  int v79; // [sp+84h] [bp-10h]
  int v80; // [sp+88h] [bp-Ch]
  int v81; // [sp+8Ch] [bp-8h]

  v10 = a6;
  v12 = sub_1322B4(a5);
  if ( a6 )
  {
    if ( a7 < 0 )
      sub_15D54();
  }
  else
  {
    v10 = a1;
    a7 = 0;
  }
  if ( !a4 )
    return sub_26BC1C(v10);
  v13 = sub_112384((int)&v66);
  v79 = a2;
  v80 = a5;
  v66 = &off_39D3D4;
  v81 = 0;
  v14 = sub_26C1E0(v13);
  v68 = sub_1B7250(v12);
  v69 = sub_1322C8(a5);
  v70 = sub_132338(a5);
  v71 = sub_132388(a5);
  v64 = sub_92E28();
  ((void (__fastcall *)(int (***)(), int, int))loc_114908)(&v66, a3, a4);
  sub_92E40((int)v64);
  v15 = ptr;
  if ( v77 == ptr )
  {
    switch ( v72 )
    {
      case 0:
        v51 = sub_11244C((int)&v66, 0);
        v52 = sub_112528((int)&v66, 0);
        v53 = **(char **)(v10 + 24);
        if ( v53 == 7 || v53 == 15 )
          v54 = *(_DWORD *)(sub_1780B4(v68) + 156);
        else
          v54 = *(_DWORD *)(sub_1780B4(v68) + 152);
        v55 = sub_26DC9C(v54, v51);
        v56 = sub_26EBA8(v55);
        if ( v14 )
          sub_26C300(v14);
        v57 = sub_260F84(v10, v56 + a7);
        v28 = v57;
        if ( v52 )
          sub_26BF74(v57, 1);
        goto LABEL_19;
      case 1:
        v43 = sub_15ECB4(a2);
        v44 = sub_112414((int)&v66, 0);
        v45 = sub_26EB1C(v44);
        v46 = sub_26725C(v45, HIDWORD(v45));
        v48 = sub_117648(v43, v46);
        if ( a7 )
          sub_946E0(
            "cannot use offset on synthetic pointer to register",
            v47,
            (_DWORD)a7,
            (unsigned int)a7 | HIDWORD(a7));
        if ( v14 )
          sub_26C300(v14);
        v28 = sub_15B6A4(v10, v48, a2);
        if ( sub_26ED18() )
        {
          v49 = sub_26BB80(v10);
          v50 = v49;
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, int))sub_26E83C)(v49, HIDWORD(v49), 0, 0, v28);
          v28 = v50;
        }
        goto LABEL_19;
      case 2:
        v33 = sub_112414((int)&v66, 0);
        v34 = *(_DWORD *)(sub_26BC70(v33) + 20);
        v35 = v12;
        v36 = *(_DWORD *)(v10 + 20);
        v37 = *(_DWORD *)(a1 + 20);
        v38 = sub_1B7250(v35);
        if ( v37 < a7 + v36 )
          sub_15D54();
        sub_26C1F0(v33);
        if ( v14 )
          sub_26C300(v14);
        v39 = sub_26BB80(v10);
        v28 = v39;
        if ( !((int (__fastcall *)(int, _DWORD))loc_165BB8)(v38, HIDWORD(v39)) )
          LODWORD(a7) = a7 + v34 - v37;
        v41 = (void *)sub_26BCB8(v28, v40);
        v42 = sub_26E738(v33);
        memcpy(v41, (const void *)(v42 + a7), v36);
        if ( v33 )
          ((void (__fastcall *)(int))loc_26C200)(v33);
        goto LABEL_19;
      case 3:
        v30 = *(_DWORD *)(v10 + 20);
        if ( a7 + (unsigned __int64)v30 > v73 )
          sub_15D54();
        if ( v14 )
          sub_26C300(v14);
        v31 = sub_26BB80(v10);
        v28 = v31;
        v32 = (void *)sub_26BCB8(v31, HIDWORD(v31));
        memcpy(v32, (const void *)(v74 + a7), v30);
        goto LABEL_19;
      case 4:
        if ( v14 )
          sub_26C300(v14);
        v28 = sub_26BC1C(v10);
        goto LABEL_19;
      default:
        v58 = sub_94700((int)"dwarf2loc.c", 2526, "invalid location type");
        if ( HIDWORD(v58) != 1 )
        {
          sub_339E78(v58);
          sub_92E60();
        }
        v59 = (int *)sub_339E78(v58);
        v60 = v59[1];
        v61 = v59;
        if ( v60 == 9 )
        {
          if ( v14 )
            sub_26C300(v14);
          v28 = sub_26BB80(v10);
          v62 = sub_26B440(v28, *(_DWORD *)(v10 + 20));
        }
        else
        {
          if ( v60 != 11 )
            sub_92F1C(*v59, v59[1], v59[2]);
          if ( dword_4872D4 )
          {
            v63 = (_DWORD *)sub_242F8C(v59);
            sub_154B38(*v63, *v61, v61[1], v61[2]);
          }
          if ( v14 )
          {
            sub_26C300(v14);
            v28 = sub_26BC1C(v10);
            sub_339EF8(v28);
            break;
          }
          v62 = sub_26BC1C(v10);
          v28 = v62;
        }
        sub_339EF8(v62);
        break;
    }
  }
  else
  {
    v16 = 0;
    do
    {
      v17 = v15[6];
      v15 += 10;
      v16 += __PAIR64__(*(v15 - 3), v17);
    }
    while ( v77 != v15 );
    if ( (unsigned int)(8 * *(_DWORD *)(a1 + 20)) < v16 )
      sub_15D54();
    v18 = sub_9836C(0x28u);
    v19 = v78;
    v20 = ptr;
    v21 = v77;
    v22 = v18;
    v18[1] = a5;
    *v18 = 1;
    v18[4] = v19;
    v18[2] = v20;
    v18[3] = v21;
    ptr = 0;
    v77 = 0;
    v78 = 0;
    if ( a2 )
    {
      ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v65, a2);
      v23 = v65[1];
      v24 = v65[2];
      v25 = v65[3];
      v20 = (_DWORD *)v22[2];
      v21 = (_DWORD *)v22[3];
      v26 = v65[4];
      v22[5] = v65[0];
      v22[6] = v23;
      v22[7] = v24;
      v22[8] = v25;
      v22[9] = v26;
    }
    else
    {
      v18[5] = 0;
      v18[6] = 0;
      v18[7] = 0;
      v18[8] = 0;
      v18[9] = 0;
    }
    for ( ; v20 != v21; v20 += 10 )
    {
      while ( *v20 != 2 )
      {
        v20 += 10;
        if ( v20 == v21 )
          goto LABEL_16;
      }
      sub_26C1F0(v20[2]);
    }
LABEL_16:
    if ( v14 )
      sub_26C300(v14);
    v27 = sub_26BBF8(v10, &off_39D674, v22);
    v28 = v27;
    sub_26BC88(v27, HIDWORD(v27), a7, HIDWORD(a7));
LABEL_19:
    sub_26DFF0(v28, v75);
  }
  v66 = (int (**)())&unk_39C084;
  if ( ptr )
    sub_339E64(ptr);
  if ( v67 )
  {
    sub_339E64(v67);
    return v28;
  }
  return v28;
}
