void __fastcall sub_1BE5A4(_BYTE *a1)
{
  int v2; // r7
  int v3; // r9
  int v4; // r8
  int v5; // r6
  int *v6; // r4
  int v7; // r11
  int v8; // r5
  int v9; // r2
  int v10; // r1
  int v11; // r8
  unsigned int v12; // r5
  _DWORD *v13; // r3
  const char *v14; // r3
  size_t v15; // r0
  void *v16; // r6
  _DWORD *v17; // r1
  void *v18; // r0
  void *v19; // r6
  _DWORD *v20; // r0
  int v21; // r5
  int v22; // r5
  int v23; // r1
  int v24; // r2
  int v25; // r6
  unsigned int v26; // r4
  int v27; // r2
  int v28; // r3
  bool v29; // zf
  void **v30; // r10
  _DWORD *v31; // r3
  _DWORD *v32; // r9
  _DWORD *v33; // r8
  _DWORD *v34; // r7
  _DWORD *v35; // r6
  _DWORD *v36; // r4
  _DWORD *v37; // r5
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  int v40; // r12
  unsigned int v41; // r10
  int v42; // r4
  int v43; // r2
  int v44; // r6
  int v45; // r11
  int v46; // r0
  int v47; // r3
  _DWORD *v48; // r0
  _DWORD *v49; // r3
  _DWORD *v50; // r8
  _DWORD *v51; // r7
  _DWORD *v52; // r6
  _DWORD *v53; // r4
  _DWORD *v54; // r5
  _DWORD *v55; // r0
  _DWORD *v56; // r0
  int v57; // [sp+Ch] [bp-70h]
  int v58; // [sp+10h] [bp-6Ch]
  const char *src; // [sp+18h] [bp-64h]
  void *v60; // [sp+20h] [bp-5Ch] BYREF
  void *v61; // [sp+24h] [bp-58h] BYREF
  void *v62[2]; // [sp+28h] [bp-54h] BYREF
  _DWORD v63[4]; // [sp+30h] [bp-4Ch] BYREF
  void *ptr[2]; // [sp+40h] [bp-3Ch] BYREF
  _DWORD v65[4]; // [sp+48h] [bp-34h] BYREF
  char s[4]; // [sp+58h] [bp-24h] BYREF
  int v67; // [sp+5Ch] [bp-20h]
  char v68[28]; // [sp+60h] [bp-1Ch] BYREF

  v2 = *(_DWORD *)sub_242FDC(a1);
  if ( a1 )
  {
    sub_1BE2E8(&v60, (int)a1);
    v3 = *((_DWORD *)v60 + 7);
    v58 = *((_DWORD *)v60 + 6);
    v4 = v3;
    v5 = -1431655765 * ((v3 - v58) >> 2);
    if ( *a1 )
    {
      if ( v58 != v3 )
      {
        v6 = (int *)(v3 - 12);
        v7 = -1;
        v8 = -1431655765 * ((*(_DWORD *)(v3 - 8) - *(_DWORD *)(v3 - 12)) >> 4);
        goto LABEL_5;
      }
      goto LABEL_71;
    }
  }
  else
  {
    sub_1BE2E8(&v60, (int)"");
    v4 = *((_DWORD *)v60 + 7);
    v58 = *((_DWORD *)v60 + 6);
    v3 = v4;
    v5 = -1431655765 * ((v4 - v58) >> 2);
  }
  if ( v3 == v58 )
    sub_946E0("Available types of OS data not reported.");
  if ( v58 == v4 )
  {
LABEL_71:
    v8 = 0;
    v7 = -1;
    v6 = 0;
    goto LABEL_5;
  }
  v6 = (int *)(v4 - 12);
  v8 = -1431655765 * ((*(_DWORD *)(v4 - 8) - *(_DWORD *)(v4 - 12)) >> 4);
  if ( sub_2573F0(v2) || (v40 = *(_DWORD *)(v4 - 12), v40 == *(_DWORD *)(v4 - 8)) )
  {
    v7 = -1;
  }
  else
  {
    v41 = 0;
    v42 = 0;
    v43 = v5;
    v44 = -1;
    v45 = v43;
    do
    {
      v46 = sub_33CAA0(v40 + v42, "Title");
      v40 = *(_DWORD *)(v4 - 12);
      if ( !v46 )
        v44 = v41;
      ++v41;
      v42 += 48;
    }
    while ( v41 < -1431655765 * ((*(_DWORD *)(v4 - 8) - v40) >> 4) );
    v47 = v45;
    v7 = v44;
    v6 = (int *)(v4 - 12);
    v29 = v44 == -1;
    v5 = v47;
    if ( !v29 )
      --v8;
  }
LABEL_5:
  *(_DWORD *)s = v68;
  strcpy(v68, "OSDataTable");
  v67 = 11;
  sub_25704C(v2, v8, v5, s);
  if ( *(char **)s != v68 )
    sub_339E64(*(void **)s);
  if ( !v8 )
  {
    sub_257270(v2);
    v30 = (void **)v60;
    if ( !v60 )
      return;
    v49 = (_DWORD *)*((_DWORD *)v60 + 6);
    v32 = (_DWORD *)*((_DWORD *)v60 + 7);
    if ( v49 == v32 )
      goto LABEL_53;
    v50 = v49 + 3;
    v51 = v49 + 3;
    while ( 1 )
    {
      v52 = (_DWORD *)v49[1];
      v53 = (_DWORD *)*(v51 - 3);
      if ( v53 != v52 )
      {
        v54 = v53 + 8;
        do
        {
          v55 = (_DWORD *)v53[6];
          if ( v55 != v54 )
            sub_339E64(v55);
          v56 = (_DWORD *)*(v54 - 8);
          if ( v56 != v53 + 2 )
            sub_339E64(v56);
          v53 += 12;
          v54 += 12;
        }
        while ( v52 != v53 );
        v52 = (_DWORD *)*(v51 - 3);
      }
      if ( v52 )
        sub_339E64(v52);
      v51 += 3;
      v49 = v50;
      if ( v32 == v50 )
        break;
      v50 += 3;
    }
    goto LABEL_52;
  }
  if ( v6 )
  {
    v9 = *v6;
    v10 = v6[1];
    if ( *v6 != v10 )
    {
      v11 = 0;
      v12 = 0;
      while ( v7 == v12 )
      {
LABEL_22:
        ++v12;
        v11 += 48;
        if ( v12 >= -1431655765 * ((v10 - v9) >> 4) )
          goto LABEL_27;
      }
      snprintf(s, 0x20u, "col%d", v12);
      v62[0] = v63;
      v18 = (void *)strlen(s);
      v19 = v18;
      ptr[0] = v18;
      if ( (unsigned int)v18 <= 0xF )
      {
        if ( v18 == (void *)1 )
        {
          v13 = v63;
          LOBYTE(v63[0]) = s[0];
          goto LABEL_13;
        }
        if ( !v18 )
        {
          v13 = v63;
LABEL_13:
          v62[1] = v19;
          *((_BYTE *)v19 + (_DWORD)v13) = 0;
          v14 = *(const char **)(*v6 + v11);
          ptr[0] = v65;
          src = v14;
          if ( !v14 )
            sub_33D0B8("basic_string::_M_construct null not valid");
          v15 = strlen(v14);
          v16 = (void *)v15;
          v61 = (void *)v15;
          if ( v15 > 0xF )
          {
            v48 = (_DWORD *)sub_33B2BC(ptr, &v61, 0);
            ptr[0] = v48;
            v65[0] = v61;
          }
          else
          {
            if ( v15 == 1 )
            {
              v17 = v65;
              LOBYTE(v65[0]) = *src;
LABEL_17:
              ptr[1] = v16;
              *((_BYTE *)v16 + (_DWORD)v17) = 0;
              sub_2571B8(v2, 10, -1, v62, ptr);
              if ( ptr[0] != v65 )
                sub_339E64(ptr[0]);
              if ( v62[0] != v63 )
                sub_339E64(v62[0]);
              v9 = *v6;
              v10 = v6[1];
              goto LABEL_22;
            }
            if ( !v15 )
            {
              v17 = v65;
              goto LABEL_17;
            }
            v48 = v65;
          }
          memcpy(v48, src, (size_t)v16);
          v16 = v61;
          v17 = ptr[0];
          goto LABEL_17;
        }
        v20 = v63;
      }
      else
      {
        v20 = (_DWORD *)sub_33B2BC(v62, ptr, 0);
        v62[0] = v20;
        v63[0] = ptr[0];
      }
      memcpy(v20, s, (size_t)v19);
      v19 = ptr[0];
      v13 = v62[0];
      goto LABEL_13;
    }
  }
LABEL_27:
  sub_25722C(v2);
  if ( v3 != v58 )
  {
    v21 = *((_DWORD *)v60 + 6);
    v57 = *((_DWORD *)v60 + 7);
    if ( v57 != v21 )
    {
      v22 = v21 + 12;
      do
      {
        sub_2578AC(v2, 0);
        v23 = *(_DWORD *)(v22 - 8);
        v24 = *(_DWORD *)(v22 - 12);
        if ( v23 != v24 )
        {
          v25 = 0;
          v26 = 0;
          do
          {
            if ( v7 != v26 )
            {
              snprintf(s, 0x20u, "col%d", v26);
              sub_2575E8(v2, s, *(_DWORD *)(*(_DWORD *)(v22 - 12) + v25 + 24));
              v23 = *(_DWORD *)(v22 - 8);
              v24 = *(_DWORD *)(v22 - 12);
            }
            ++v26;
            v25 += 48;
          }
          while ( v26 < -1431655765 * ((v23 - v24) >> 4) );
        }
        sub_25734C(v2, 0);
        sub_257380(v2, &word_356638, v27, v28);
        v29 = v57 == v22;
        v22 += 12;
      }
      while ( !v29 );
    }
  }
  sub_257270(v2);
  v30 = (void **)v60;
  if ( v60 )
  {
    v31 = (_DWORD *)*((_DWORD *)v60 + 6);
    v32 = (_DWORD *)*((_DWORD *)v60 + 7);
    if ( v31 == v32 )
    {
LABEL_53:
      if ( v32 )
        sub_339E64(v32);
      if ( *v30 != v30 + 2 )
        sub_339E64(*v30);
      sub_33AC04(v30);
      return;
    }
    v33 = v31 + 3;
    v34 = v31 + 3;
    while ( 1 )
    {
      v35 = (_DWORD *)v31[1];
      v36 = (_DWORD *)*(v34 - 3);
      if ( v36 != v35 )
      {
        v37 = v36 + 8;
        do
        {
          v38 = (_DWORD *)v36[6];
          if ( v38 != v37 )
            sub_339E64(v38);
          v39 = (_DWORD *)*(v37 - 8);
          if ( v39 != v36 + 2 )
            sub_339E64(v39);
          v36 += 12;
          v37 += 12;
        }
        while ( v35 != v36 );
        v35 = (_DWORD *)*(v34 - 3);
      }
      if ( v35 )
        sub_339E64(v35);
      v34 += 3;
      v31 = v33;
      if ( v32 == v33 )
        break;
      v33 += 3;
    }
LABEL_52:
    v32 = v30[6];
    goto LABEL_53;
  }
}
