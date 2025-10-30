int *__fastcall sub_1B141C(int *a1, char *s, const char *a3, _DWORD *a4)
{
  const char *v4; // r8
  unsigned int v5; // r5
  unsigned int v7; // r3
  int v8; // r2
  unsigned int v9; // t1
  int (*v10)(const char *, const char *); // r9
  unsigned int v11; // r0
  unsigned int *v12; // r12
  size_t v13; // r6
  _DWORD *v14; // r2
  int v15; // r1
  _DWORD *v16; // r2
  bool v17; // zf
  unsigned int v18; // r3
  int v19; // r4
  int *v20; // r3
  _DWORD *v21; // r1
  char *v22; // r3
  _BOOL4 v23; // r3
  int v24; // r4
  int v25; // r0
  int i; // r4
  int v27; // r3
  int v28; // r1
  int v30; // r4
  int v31; // r3
  int v32; // r0
  unsigned int v33; // r4
  char **v34; // r0
  int (__fastcall *v35)(int, int *, _DWORD); // r7
  int j; // r4
  int v37; // r0
  void **v38; // r3
  int v39; // r0
  _DWORD *v40; // r0
  int v41; // r6
  char *v42; // r0
  int v43; // r4
  int v44; // r1
  int v45; // r4
  int v46; // r1
  int v47; // r6
  char *v48; // r0
  int v49; // r6
  char *v50; // r0
  _DWORD *v51; // r0
  _DWORD *v52; // [sp+Ch] [bp-140h]
  int *v53; // [sp+10h] [bp-13Ch]
  int *v54; // [sp+14h] [bp-138h]
  int *v56; // [sp+24h] [bp-128h]
  char *v58; // [sp+30h] [bp-11Ch]
  int v59; // [sp+38h] [bp-114h] BYREF
  int v60; // [sp+3Ch] [bp-110h]
  int v61; // [sp+40h] [bp-10Ch]
  int v62; // [sp+44h] [bp-108h]
  int v63; // [sp+48h] [bp-104h]
  int v64; // [sp+4Ch] [bp-100h]
  _DWORD *v65; // [sp+50h] [bp-FCh] BYREF
  void *v66; // [sp+54h] [bp-F8h]
  _DWORD v67[4]; // [sp+58h] [bp-F4h] BYREF
  int v68; // [sp+68h] [bp-E4h] BYREF
  char v69; // [sp+6Ch] [bp-E0h]
  char v70; // [sp+6Dh] [bp-DFh]
  void *ptr[2]; // [sp+70h] [bp-DCh] BYREF
  _DWORD v72[4]; // [sp+78h] [bp-D4h] BYREF
  void *v73[2]; // [sp+88h] [bp-C4h] BYREF
  char v74; // [sp+90h] [bp-BCh] BYREF
  char v75; // [sp+A4h] [bp-A8h]
  void *v76[2]; // [sp+A8h] [bp-A4h] BYREF
  char v77; // [sp+B0h] [bp-9Ch] BYREF
  char v78; // [sp+C0h] [bp-8Ch]
  void *v79[2]; // [sp+C4h] [bp-88h] BYREF
  char v80; // [sp+CCh] [bp-80h] BYREF
  char v81; // [sp+DCh] [bp-70h]
  void *v82[2]; // [sp+E0h] [bp-6Ch] BYREF
  char v83; // [sp+E8h] [bp-64h] BYREF
  char v84; // [sp+F8h] [bp-54h]
  _BYTE v85[60]; // [sp+FCh] [bp-50h]
  _DWORD v86[2]; // [sp+138h] [bp-14h]
  _DWORD v87[2]; // [sp+140h] [bp-Ch]

  v4 = s;
  v5 = (unsigned __int8)*s;
  v60 = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  if ( v5 )
  {
    v7 = 0;
    do
    {
      v8 = byte_438798[v5];
      v9 = (unsigned __int8)*++s;
      v5 = v9;
      v7 = 67 * v7 - 113 + v8;
    }
    while ( v9 );
    v5 = v7 % 0x7F7;
  }
  v10 = strcasecmp;
  if ( !dword_4879F4 )
    v10 = strcmp;
  if ( a3 )
    a3 = (const char *)sub_3245A4(a3);
  v65 = v67;
  v11 = strlen(v4);
  v13 = v11;
  v68 = v11;
  if ( v11 > 0xF )
  {
    v40 = (_DWORD *)sub_33B2BC(&v65, &v68, 0);
    v65 = v40;
    v67[0] = v68;
  }
  else
  {
    if ( v11 == 1 )
    {
      v14 = v67;
      LOBYTE(v67[0]) = *v4;
      goto LABEL_12;
    }
    if ( !v11 )
    {
      v14 = v67;
      goto LABEL_12;
    }
    v40 = v67;
  }
  v11 = (unsigned int)memcpy(v40, v4, v13);
  v13 = v68;
  v14 = v65;
LABEL_12:
  v66 = (void *)v13;
  *((_BYTE *)v14 + v13) = 0;
  v15 = 1;
  v16 = v65;
  v69 = 0;
  v70 = 0;
  v17 = v65 == v67;
  ptr[0] = v72;
  v68 = 1;
  if ( v65 == v67 )
  {
    v12 = v72;
    v11 = v67[0];
    v15 = v67[1];
    v16 = (_DWORD *)v67[2];
    v18 = v67[3];
  }
  else
  {
    ptr[0] = v65;
    v18 = v67[0];
  }
  if ( v65 == v67 )
  {
    *v12 = v11;
    v12[1] = v15;
    v12[2] = (unsigned int)v16;
    v12[3] = v18;
  }
  v19 = v59;
  if ( !v17 )
    v72[0] = v18;
  v20 = 0;
  v75 = 0;
  v21 = *(_DWORD **)(dword_487D2C + 36);
  v87[0] = 0;
  v78 = 0;
  v81 = 0;
  v84 = 0;
  v86[0] = 0;
  v86[1] = 0;
  *(_DWORD *)((char *)v87 + 3) = 0;
  if ( !v21 )
    v20 = &dword_48970C;
  v52 = v21;
  ptr[1] = v66;
  if ( v21 )
  {
    if ( v59 )
    {
LABEL_41:
      v27 = dword_48970C;
LABEL_42:
      if ( v27 )
      {
        v41 = *(_DWORD *)sub_242FC8(v11);
        v42 = sub_98EEC(v19);
        sub_2594B0(v41, "lookup_minimal_symbol (...) = %s (external)\n", v42);
      }
      v28 = v60;
      *a1 = v59;
      a1[1] = v28;
      goto LABEL_45;
    }
    v22 = "NULL";
    if ( a3 )
      v22 = (char *)a3;
    v11 = 18957679;
    v58 = v22;
    v54 = &dword_48970C;
    while ( 1 )
    {
      v23 = a4 == 0;
      if ( a4 == v52 )
        v23 = 1;
      if ( !v23 && (_DWORD *)v52[45] != a4 )
        goto LABEL_28;
      if ( dword_48970C )
      {
        v24 = *(_DWORD *)sub_242FC8(v11);
        v25 = sub_1B87CC(v52);
        v11 = sub_2594B0(v24, "lookup_minimal_symbol (%s, %s, %s)\n", v4, v58, v25);
      }
      for ( i = *(_DWORD *)(v52[10] + 4 * v5 + 96); i; i = *(_DWORD *)(i + 36) )
      {
        v11 = v10(*(const char **)i, v4);
        if ( !v11 )
        {
          v11 = sub_1B1398(&v59, a3, (int)v52, i);
          if ( v11 )
            break;
        }
      }
      v19 = v59;
      if ( v59 )
        goto LABEL_41;
      v56 = *(int **)(v52[10] + 16412);
      if ( v56 == *(int **)(v52[10] + 16408) )
      {
        v52 = (_DWORD *)*v52;
        if ( !v52 )
        {
          v27 = dword_48970C;
          goto LABEL_94;
        }
      }
      else
      {
        v53 = *(int **)(v52[10] + 16408);
        do
        {
          v30 = *v53++;
          if ( *((_BYTE *)v86 + v30) )
          {
            v31 = 4 * v30;
          }
          else
          {
            switch ( v30 )
            {
              case 4:
                if ( !v78 )
                {
                  sub_21C928(v76, &v68, 4);
                  v78 = 1;
                }
                v38 = v76;
                break;
              case 5:
                if ( !v81 )
                {
                  sub_21C928(v79, &v68, 5);
                  v81 = 1;
                }
                v38 = v79;
                break;
              case 6:
                if ( !v84 )
                {
                  sub_21C928(v82, &v68, 6);
                  v84 = 1;
                }
                v38 = v82;
                break;
              case 14:
                if ( !v75 )
                {
                  sub_A3C94((int)v73, (int)&v68);
                  v75 = 1;
                }
                v38 = v73;
                break;
              default:
                v38 = ptr;
                break;
            }
            v39 = sub_21CBA8(v30, *v38);
            v31 = 4 * v30;
            *(_DWORD *)&v85[4 * v30] = v39;
            *((_BYTE *)v86 + v30) = 1;
          }
          v32 = v30;
          v33 = *(_DWORD *)&v85[v31] % 0x7F7u;
          v34 = sub_194438(v32);
          v11 = sub_194570((int)v34, (int)&v68);
          v35 = (int (__fastcall *)(int, int *, _DWORD))v11;
          for ( j = *(_DWORD *)(v52[10] + 4 * v33 + 8252); j; j = *(_DWORD *)(j + 40) )
          {
            v37 = sub_21B7DC(j);
            v11 = v35(v37, &v68, 0);
            if ( v11 )
            {
              v11 = sub_1B1398(&v59, a3, (int)v52, j);
              if ( v11 )
                break;
            }
          }
          v19 = v59;
        }
        while ( !v59 && v56 != v53 );
LABEL_28:
        v52 = (_DWORD *)*v52;
        if ( !v52 )
          goto LABEL_105;
        if ( v19 )
          goto LABEL_41;
      }
    }
  }
  v54 = v20;
LABEL_105:
  v27 = *v54;
  if ( v19 )
    goto LABEL_42;
LABEL_94:
  v43 = v61;
  if ( v61 )
  {
    if ( v27 )
    {
      v47 = *(_DWORD *)sub_242FC8(v11);
      v48 = sub_98EEC(v43);
      sub_2594B0(v47, "lookup_minimal_symbol (...) = %s (file-local)\n", v48);
    }
    v44 = v62;
    *a1 = v61;
    a1[1] = v44;
  }
  else
  {
    v45 = v63;
    if ( v63 )
    {
      if ( v27 )
      {
        v49 = *(_DWORD *)sub_242FC8(v11);
        v50 = sub_98EEC(v45);
        sub_2594B0(v49, "lookup_minimal_symbol (...) = %s (trampoline)\n", v50);
      }
      v46 = v64;
      *a1 = v63;
      a1[1] = v46;
    }
    else
    {
      if ( v27 )
      {
        v51 = (_DWORD *)sub_242FC8(v11);
        sub_2594B0(*v51, "lookup_minimal_symbol (...) = NULL\n");
      }
      *a1 = 0;
      a1[1] = 0;
    }
  }
LABEL_45:
  if ( v84 )
  {
    v84 = 0;
    if ( v82[0] != &v83 )
      sub_339E64(v82[0]);
  }
  if ( v81 )
  {
    v81 = 0;
    if ( v79[0] != &v80 )
      sub_339E64(v79[0]);
  }
  if ( v78 )
  {
    v78 = 0;
    if ( v76[0] != &v77 )
      sub_339E64(v76[0]);
  }
  if ( v75 )
  {
    v75 = 0;
    if ( v73[0] != &v74 )
      sub_339E64(v73[0]);
  }
  if ( ptr[0] != v72 )
    sub_339E64(ptr[0]);
  return a1;
}
