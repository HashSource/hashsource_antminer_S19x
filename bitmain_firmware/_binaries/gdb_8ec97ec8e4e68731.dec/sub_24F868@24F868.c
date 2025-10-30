void __fastcall sub_24F868(int *a1, char **a2, char **a3)
{
  char *v6; // r8
  char *v7; // r6
  __int64 v8; // r0
  char *v9; // r2
  bool v10; // zf
  char *v11; // r4
  char *v12; // r5
  char *v13; // r0
  char *v14; // r5
  char *v15; // r6
  _DWORD *v16; // r4
  _DWORD *v17; // r0
  char *v18; // r8
  char *v19; // r6
  __int64 v20; // r0
  char *v21; // r2
  char *v22; // r4
  char *v23; // r5
  char *v24; // r0
  char *v25; // r5
  char *v26; // r6
  _DWORD *v27; // r4
  _DWORD *v28; // r0
  char *v29; // r5
  char *v30; // r6
  char *v31; // r4
  char *v32; // r0
  char *v33; // r5
  char *v34; // r6
  char *v35; // r4
  char *v36; // r0
  void **v37; // r4
  void **v38; // r6
  void *v39; // r5
  void *v40; // t1
  char *v41; // r5
  char *v42; // r6
  char *v43; // r4
  char *v44; // r0
  char *v45; // r5
  char *v46; // r6
  char *v47; // r4
  char *v48; // r0
  void **v49; // r4
  void **v50; // r6
  void *v51; // r5
  void *v52; // t1
  __int64 v53; // [sp+0h] [bp-C0h] BYREF
  char *v54; // [sp+8h] [bp-B8h]
  __int64 v55; // [sp+Ch] [bp-B4h] BYREF
  char *v56; // [sp+14h] [bp-ACh]
  _BYTE v57[32]; // [sp+18h] [bp-A8h] BYREF
  void *v58; // [sp+38h] [bp-88h]
  void **v59; // [sp+44h] [bp-7Ch]
  void *v60; // [sp+48h] [bp-78h]
  char *v61; // [sp+54h] [bp-6Ch]
  void *v62; // [sp+58h] [bp-68h]
  char *v63; // [sp+60h] [bp-60h]
  void *v64; // [sp+64h] [bp-5Ch]
  _BYTE v65[32]; // [sp+6Ch] [bp-54h] BYREF
  void *v66; // [sp+8Ch] [bp-34h]
  void **v67; // [sp+98h] [bp-28h]
  void *v68; // [sp+9Ch] [bp-24h]
  char *v69; // [sp+A8h] [bp-18h]
  void *v70; // [sp+ACh] [bp-14h]
  char *v71; // [sp+B4h] [bp-Ch]
  void *v72; // [sp+B8h] [bp-8h]

  sub_24DE98((int)v57);
  sub_24DE98((int)v65);
  sub_24F804(a1, (int)v57, (int)v65);
  sub_24E114((int)&v53, (int)v57);
  v6 = *a2;
  v7 = a2[1];
  v8 = v53;
  v9 = v54;
  v10 = *a2 == v7;
  LODWORD(v53) = 0;
  *(_QWORD *)a2 = v8;
  a2[2] = v9;
  HIDWORD(v53) = 0;
  v54 = 0;
  if ( !v10 )
  {
    v11 = v6 + 8;
    v12 = v6;
    do
    {
      v13 = (char *)*((_DWORD *)v11 - 2);
      if ( v13 != v11 )
        sub_339E64(v13);
      v12 += 24;
      v11 += 24;
    }
    while ( v7 != v12 );
  }
  if ( v6 )
    sub_339E64(v6);
  v15 = (char *)HIDWORD(v53);
  v14 = (char *)v53;
  if ( (_DWORD)v53 != HIDWORD(v53) )
  {
    v16 = (_DWORD *)(v53 + 8);
    do
    {
      v17 = (_DWORD *)*(v16 - 2);
      if ( v17 != v16 )
        sub_339E64(v17);
      v14 += 24;
      v16 += 6;
    }
    while ( v15 != v14 );
    v15 = (char *)v53;
  }
  if ( v15 )
    sub_339E64(v15);
  sub_24E114((int)&v55, (int)v65);
  v18 = *a3;
  v19 = a3[1];
  v20 = v55;
  v21 = v56;
  v10 = *a3 == v19;
  LODWORD(v55) = 0;
  *(_QWORD *)a3 = v20;
  a3[2] = v21;
  HIDWORD(v55) = 0;
  v56 = 0;
  if ( !v10 )
  {
    v22 = v18 + 8;
    v23 = v18;
    do
    {
      v24 = (char *)*((_DWORD *)v22 - 2);
      if ( v24 != v22 )
        sub_339E64(v24);
      v23 += 24;
      v22 += 24;
    }
    while ( v19 != v23 );
  }
  if ( v18 )
    sub_339E64(v18);
  v26 = (char *)HIDWORD(v55);
  v25 = (char *)v55;
  if ( (_DWORD)v55 != HIDWORD(v55) )
  {
    v27 = (_DWORD *)(v55 + 8);
    do
    {
      v28 = (_DWORD *)*(v27 - 2);
      if ( v28 != v27 )
        sub_339E64(v28);
      v25 += 24;
      v27 += 6;
    }
    while ( v26 != v25 );
    v26 = (char *)v55;
  }
  if ( v26 )
    sub_339E64(v26);
  v29 = v71;
  v30 = (char *)v72;
  if ( v71 != v72 )
  {
    v31 = v71 + 8;
    do
    {
      v32 = (char *)*((_DWORD *)v31 - 2);
      if ( v32 != v31 )
        sub_339E64(v32);
      v29 += 24;
      v31 += 24;
    }
    while ( v30 != v29 );
    v30 = v71;
  }
  if ( v30 )
    sub_339E64(v30);
  v33 = v69;
  v34 = (char *)v70;
  if ( v69 != v70 )
  {
    v35 = v69 + 8;
    do
    {
      v36 = (char *)*((_DWORD *)v35 - 2);
      if ( v36 != v35 )
        sub_339E64(v36);
      v33 += 24;
      v35 += 24;
    }
    while ( v34 != v33 );
    v34 = v69;
  }
  if ( v34 )
    sub_339E64(v34);
  v37 = v67;
  v38 = (void **)v68;
  if ( v67 != v68 )
  {
    do
    {
      v40 = *v37++;
      v39 = v40;
      if ( v40 )
      {
        sub_C0960((int)v39);
        sub_33AC04(v39);
      }
    }
    while ( v38 != v37 );
    v38 = v67;
  }
  if ( v38 )
    sub_339E64(v38);
  if ( v66 )
    sub_339E64(v66);
  v41 = v63;
  v42 = (char *)v64;
  if ( v63 != v64 )
  {
    v43 = v63 + 8;
    do
    {
      v44 = (char *)*((_DWORD *)v43 - 2);
      if ( v44 != v43 )
        sub_339E64(v44);
      v41 += 24;
      v43 += 24;
    }
    while ( v42 != v41 );
    v42 = v63;
  }
  if ( v42 )
    sub_339E64(v42);
  v45 = v61;
  v46 = (char *)v62;
  if ( v61 != v62 )
  {
    v47 = v61 + 8;
    do
    {
      v48 = (char *)*((_DWORD *)v47 - 2);
      if ( v47 != v48 )
        sub_339E64(v48);
      v45 += 24;
      v47 += 24;
    }
    while ( v46 != v45 );
    v46 = v61;
  }
  if ( v46 )
    sub_339E64(v46);
  v49 = v59;
  v50 = (void **)v60;
  if ( v59 != v60 )
  {
    do
    {
      v52 = *v49++;
      v51 = v52;
      if ( v52 )
      {
        sub_C0960((int)v51);
        sub_33AC04(v51);
      }
    }
    while ( v50 != v49 );
    v50 = v59;
  }
  if ( v50 )
    sub_339E64(v50);
  if ( v58 )
    sub_339E64(v58);
}
