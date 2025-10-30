void __fastcall sub_ED720(int a1, int a2, void **a3, int *a4, _DWORD *a5, void **a6)
{
  int v10; // r0
  char *v11; // r5
  size_t v12; // r0
  int v13; // r2
  int v14; // r3
  _BYTE *v15; // r5
  size_t v16; // r0
  int *v17; // r3
  void **v18; // r3
  void *v19; // r0
  void *v20; // r2
  void *v21; // r1
  char *v22; // r5
  size_t v23; // r0
  int v24; // r5
  void *v25; // r6
  int v26; // r1
  char *v27; // r5
  char *v28; // r0
  void **v29; // r3
  void *v30; // r0
  void *v31; // r2
  void *v32; // r1
  void *v33; // r0
  void **v34; // r3
  void *v35; // r0
  void *v36; // r2
  void *v37; // r1
  void *v38; // r5
  void **v39; // r3
  void *v40; // r0
  void *v41; // r2
  void *v42; // r1
  int v43; // r2
  int v44; // [sp+Ch] [bp-88h] BYREF
  int v45; // [sp+10h] [bp-84h] BYREF
  int v46; // [sp+14h] [bp-80h] BYREF
  void *v47; // [sp+18h] [bp-7Ch] BYREF
  int v48; // [sp+1Ch] [bp-78h]
  _BYTE v49[16]; // [sp+20h] [bp-74h] BYREF
  void *v50; // [sp+30h] [bp-64h] BYREF
  void *v51; // [sp+34h] [bp-60h]
  _DWORD v52[4]; // [sp+38h] [bp-5Ch] BYREF
  void *v53; // [sp+48h] [bp-4Ch] BYREF
  void *v54; // [sp+4Ch] [bp-48h]
  _DWORD v55[4]; // [sp+50h] [bp-44h] BYREF
  void *v56; // [sp+60h] [bp-34h] BYREF
  void *v57; // [sp+64h] [bp-30h]
  _DWORD v58[4]; // [sp+68h] [bp-2Ch] BYREF
  void *ptr; // [sp+78h] [bp-1Ch] BYREF
  void *v60; // [sp+7Ch] [bp-18h]
  _DWORD v61[5]; // [sp+80h] [bp-14h] BYREF

  v44 = *(_DWORD *)(a1 + 80);
  v45 = sub_270624(a1);
  v47 = v49;
  v48 = 0;
  v49[0] = 0;
  if ( a3 )
  {
    ptr = v61;
    v60 = 0;
    LOBYTE(v61[0]) = 0;
    sub_33B48C(a3, &ptr);
    v60 = 0;
    *(_BYTE *)ptr = 0;
    if ( ptr != v61 )
      sub_339E64(ptr);
  }
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
  {
    ptr = v61;
    v60 = 0;
    LOBYTE(v61[0]) = 0;
    sub_33B48C(a6, &ptr);
    v60 = 0;
    *(_BYTE *)ptr = 0;
    if ( ptr != v61 )
      sub_339E64(ptr);
    v10 = sub_26FDF0(a1);
    v11 = (char *)((int (__fastcall *)(int))loc_26FE7C)(v10);
    v12 = strlen(v11);
    sub_33BC54((int)&v47, 0, v48, v11, v12);
  }
  sub_ECBD8(&v44, &v45, &v46, 0);
  v13 = *(_DWORD *)(v45 + 24);
  switch ( *(_BYTE *)v13 )
  {
    case 1:
      if ( !a3 )
        goto LABEL_51;
      sub_931D8((char **)&v56, "*%s", *(const char **)a1);
      v34 = (void **)*a3;
      if ( v56 == v58 )
      {
        sub_33B48C(a3, &v56);
        v34 = (void **)v56;
      }
      else
      {
        v35 = v57;
        v36 = (void *)v58[0];
        if ( v34 == a3 + 2 )
        {
          *a3 = v56;
          a3[1] = v35;
          a3[2] = v36;
        }
        else
        {
          *a3 = v56;
          a3[1] = v35;
          v37 = a3[2];
          a3[2] = v36;
          if ( v34 )
          {
            v56 = v34;
            v58[0] = v37;
            goto LABEL_49;
          }
        }
        v56 = v58;
        v34 = (void **)v58;
      }
LABEL_49:
      v57 = 0;
      *(_BYTE *)v34 = 0;
      if ( v56 != v58 )
        sub_339E64(v56);
LABEL_51:
      if ( a4 && v44 )
      {
        v38 = sub_92E28();
        *a4 = sub_26210C(v44);
        sub_92E40((int)v38);
      }
      v27 = (char *)v47;
      if ( a5 )
        *a5 = *(_DWORD *)(*(_DWORD *)(v45 + 24) + 20);
      if ( !a6 )
        goto LABEL_41;
      sub_931D8((char **)&ptr, "*(%s)", v27);
      v39 = (void **)*a6;
      if ( ptr == v61 )
      {
        sub_33B48C(a6, &ptr);
        v39 = (void **)ptr;
      }
      else
      {
        v40 = v60;
        v41 = (void *)v61[0];
        if ( v39 == a6 + 2 )
        {
          *a6 = ptr;
          a6[1] = v40;
          a6[2] = v41;
        }
        else
        {
          *a6 = ptr;
          a6[1] = v40;
          v42 = a6[2];
          a6[2] = v41;
          if ( v39 )
          {
            ptr = v39;
            v61[0] = v42;
            goto LABEL_61;
          }
        }
        ptr = v61;
        v39 = (void **)v61;
      }
LABEL_61:
      v60 = 0;
      *(_BYTE *)v39 = 0;
      v33 = ptr;
      if ( ptr != v61 )
        goto LABEL_39;
      goto LABEL_40;
    case 2:
      if ( a3 )
      {
        v22 = sub_98C1C(
                *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 24) + 12) + 24) + 24) + 8) + a2,
                10,
                1,
                0,
                0);
        v23 = strlen(v22);
        sub_33BC54((int)a3, 0, (int)a3[1], v22, v23);
      }
      if ( a4 && v44 )
      {
        v24 = a2
            + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v45 + 24) + 24) + 12) + 24) + 24)
                        + 8);
        v25 = sub_92E28();
        *a4 = sub_25CE0C(v44, v26, v24, v24 >> 31);
        sub_92E40((int)v25);
      }
      if ( a5 )
        *a5 = sub_171598(v45);
      v27 = (char *)v47;
      if ( !a6 )
        goto LABEL_41;
      v28 = sub_98C1C(
              *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v45 + 24) + 24) + 12) + 24) + 24)
                        + 8)
            + a2,
              10,
              1,
              0,
              0);
      sub_931D8((char **)&v50, "(%s)[%s]", v27, v28);
      v29 = (void **)*a6;
      if ( v50 == v52 )
      {
        sub_33B48C(a6, &v50);
        v29 = (void **)v50;
      }
      else
      {
        v30 = v51;
        v31 = (void *)v52[0];
        if ( v29 == a6 + 2 )
        {
          *a6 = v50;
          a6[1] = v30;
          a6[2] = v31;
        }
        else
        {
          *a6 = v50;
          a6[1] = v30;
          v32 = a6[2];
          a6[2] = v31;
          if ( v29 )
          {
            v50 = v29;
            v52[0] = v32;
            goto LABEL_38;
          }
        }
        v50 = v52;
        v29 = (void **)v52;
      }
LABEL_38:
      v51 = 0;
      *(_BYTE *)v29 = 0;
      v33 = v50;
      if ( v50 != v52 )
LABEL_39:
        sub_339E64(v33);
LABEL_40:
      v27 = (char *)v47;
      goto LABEL_41;
    case 3:
    case 4:
      v14 = *(_DWORD *)(v13 + 24) + 24 * a2;
      v15 = *(_BYTE **)(v14 + 16);
      if ( v15 && *v15 )
      {
        if ( a3 )
        {
          v16 = strlen(*(const char **)(v14 + 16));
          sub_33BC54((int)a3, 0, (int)a3[1], v15, v16);
        }
        if ( a6 )
        {
          v17 = (int *)".";
          if ( v46 )
            v17 = &dword_364FCC;
          sub_931D8((char **)&v53, "(%s)%s%s", v47, v17, v15);
          v18 = (void **)*a6;
          if ( v53 == v55 )
          {
            sub_33B48C(a6, &v53);
            v18 = (void **)v53;
          }
          else
          {
            v19 = v54;
            v20 = (void *)v55[0];
            if ( v18 == a6 + 2 )
            {
              *a6 = v53;
              a6[1] = v19;
              a6[2] = v20;
            }
            else
            {
              *a6 = v53;
              a6[1] = v19;
              v21 = a6[2];
              a6[2] = v20;
              if ( v18 )
              {
                v53 = v18;
                v55[0] = v21;
                goto LABEL_24;
              }
            }
            v53 = v55;
            v18 = (void **)v55;
          }
LABEL_24:
          v54 = 0;
          *(_BYTE *)v18 = 0;
          if ( v53 != v55 )
            sub_339E64(v53);
        }
      }
      else
      {
        if ( a3 )
        {
          v43 = (int)a3[1];
          if ( **(_BYTE **)(*(_DWORD *)(v14 + 12) + 24) == 3 )
            sub_33BC54((int)a3, 0, v43, "<anonymous struct>", 0x12u);
          else
            sub_33BC54((int)a3, 0, v43, "<anonymous union>", 0x11u);
        }
        if ( a6 )
          sub_33BC54((int)a6, 0, (int)a6[1], "", 0);
      }
      if ( a4 && v44 )
        *a4 = sub_ECFC8(v44, a2);
      v27 = (char *)v47;
      if ( a5 )
        *a5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v45 + 24) + 24) + 24 * a2 + 12);
LABEL_41:
      if ( v27 != v49 )
        sub_339E64(v27);
      return;
    default:
      if ( a3 )
        sub_33BC54((int)a3, 0, (int)a3[1], "???", 3u);
      if ( !a6 )
        goto LABEL_40;
      sub_33BC54((int)a6, 0, (int)a6[1], "???", 3u);
      v27 = (char *)v47;
      goto LABEL_41;
  }
}
