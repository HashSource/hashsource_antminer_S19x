void __fastcall sub_15A3A4(int a1)
{
  unsigned __int8 *v1; // r5
  int v2; // r4
  int v3; // r11
  int v4; // r0
  int v5; // r9
  unsigned __int8 *v6; // r6
  int i; // r5
  bool v8; // zf
  bool v9; // zf
  int v10; // r0
  unsigned int v11; // r5
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r0
  int v14; // r0
  unsigned int v15; // r0
  unsigned __int64 v16; // r6
  unsigned __int8 *v17; // r0
  int v18; // r3
  int v19; // r9
  __int64 v20; // r0
  size_t v21; // r9
  char *v22; // r0
  unsigned int v23; // r3
  char *v24; // r2
  char *v25; // r9
  _BYTE *v26; // lr
  char *v27; // r0
  char *v28; // r3
  char v29; // r12
  char v30; // t1
  char *v31; // r0
  char *v32; // r3
  char v33; // r12
  char v34; // t1
  unsigned __int8 *v35; // r0
  void *v36; // r12
  unsigned __int8 *v37; // r9
  unsigned __int8 *v38; // r9
  _DWORD *v39; // r0
  unsigned __int8 *v40; // r5
  int v41; // r0
  __int64 v42; // r0
  int v43; // r0
  char *v44; // r10
  int v45; // r0
  __int64 v46; // r0
  unsigned int v47; // r2
  int v48; // r3
  int v49; // r6
  int v50; // r5
  int v51; // r0
  int v52; // [sp+4h] [bp-50h]
  unsigned int v53; // [sp+18h] [bp-3Ch]
  unsigned __int64 v54; // [sp+20h] [bp-34h]
  _BOOL4 v55; // [sp+28h] [bp-2Ch]
  int v56; // [sp+28h] [bp-2Ch]
  char *v57; // [sp+34h] [bp-20h]
  char v58; // [sp+34h] [bp-20h]
  unsigned int v59; // [sp+38h] [bp-1Ch]
  char *v60; // [sp+38h] [bp-1Ch]
  char *v61; // [sp+3Ch] [bp-18h]
  unsigned __int8 *v62; // [sp+40h] [bp-14h] BYREF
  void *ptr; // [sp+44h] [bp-10h] BYREF
  void *src; // [sp+48h] [bp-Ch]
  char *v65; // [sp+4Ch] [bp-8h]

  v1 = (unsigned __int8 *)a1;
  v2 = 0;
  v3 = sub_B894C(a1);
  v4 = ((int (*)(void))loc_165BB8)();
  v62 = v1;
  ptr = 0;
  src = 0;
  v65 = 0;
  if ( !v1 )
    sub_946E0("Missing search parameters.");
  v5 = v4;
  v54 = -1;
  if ( *v1 == 47 )
  {
    do
    {
      v6 = v1 + 1;
      v62 = v1 + 1;
      i = v1[1];
      while ( 1 )
      {
        v8 = i == 0;
        if ( i )
          v8 = i == 47;
        if ( v8 )
          break;
LABEL_7:
        if ( isspace(i) )
          break;
        if ( (unsigned int)(i - 48) > 9 )
        {
          switch ( i )
          {
            case 'b':
            case 'g':
            case 'h':
            case 'w':
              v62 = v6 + 1;
              i = v6[1];
              v2 = *v6++;
              v9 = i == 0;
              if ( i )
                v9 = i == 47;
              if ( !v9 )
                goto LABEL_7;
              goto LABEL_14;
            default:
              sub_946E0("Invalid size granularity.", 0);
          }
        }
        v43 = strtol((const char *)v6, 0, 10);
        v6 = v62;
        v54 = v43;
        for ( i = *v62; (unsigned int)(i - 48) <= 9; i = *v6 )
          v62 = ++v6;
      }
LABEL_14:
      v62 = (unsigned __int8 *)sub_9360C(v6);
      v1 = v62;
    }
    while ( *v62 == 47 );
  }
  v10 = sub_14CCCC((int)&v62);
  v11 = sub_26EBA8(v10);
  v12 = v62;
  if ( *v62 == 44 )
    v12 = ++v62;
  v13 = (unsigned __int8 *)sub_9360C(v12);
  v62 = v13;
  if ( *v13 == 43 )
  {
    v62 = v13 + 1;
    v45 = sub_14CCCC((int)&v62);
    v46 = sub_26EB1C(v45);
    if ( !v46 )
    {
      sub_259F10("Empty search range.\n");
      v37 = 0;
      v53 = 0;
      goto LABEL_62;
    }
    if ( v46 < 0 )
      sub_946E0("Invalid length.");
    v48 = HIDWORD(v46) - 1;
    if ( SHIDWORD(v46) >= 1 || (v47 = v11, v48 = (unsigned __int64)-v46 >> 32, v11 >= v46 + v11) )
      sub_946E0("Search space too large.", HIDWORD(v46), v47, v48);
    v16 = v46;
  }
  else
  {
    v14 = sub_14CCCC((int)&v62);
    v15 = sub_26EBA8(v14);
    if ( v11 > v15 )
      sub_946E0("Invalid search space, end precedes start.");
    v16 = 1 - v11 + v15;
    if ( !(_DWORD)v16 )
      sub_946E0("Overflow in address range computation, choose smaller range.");
  }
  v17 = v62;
  v18 = *v62;
  if ( v18 == 44 )
  {
    ++v62;
    v18 = *++v17;
  }
  if ( v18 )
  {
    v55 = v5 == 0;
    do
    {
      v62 = (unsigned __int8 *)sub_9360C(v17);
      v19 = sub_14CCCC((int)&v62);
      sub_26BC70(v19);
      if ( v2 )
      {
        v20 = sub_26EB1C(v19);
        switch ( v2 )
        {
          case 'b':
            v44 = (char *)src;
            v58 = v20;
            if ( src == v65 )
            {
              v59 = (_BYTE *)src - (_BYTE *)ptr;
              if ( (_BYTE *)src - (_BYTE *)ptr == -1 )
                sub_33D184("vector::_M_realloc_insert");
              if ( v59 )
              {
                v21 = 2 * v59;
                if ( v59 > 2 * v59 )
                  v21 = -1;
              }
              else
              {
                v21 = 1;
              }
              v22 = (char *)sub_9836C(v21);
              v23 = v59;
              v61 = &v22[v21];
              v24 = v22;
              v25 = v22 + 1;
              v8 = &v22[v59] == 0;
              v26 = ptr;
              v60 = (char *)src;
              if ( !v8 )
                v22[v23] = v58;
              if ( v44 != v26 )
              {
                v27 = v26 - 1;
                v28 = v24;
                do
                {
                  v30 = *++v27;
                  v29 = v30;
                  v8 = v28++ == 0;
                  if ( !v8 )
                    *(v28 - 1) = v29;
                }
                while ( &v24[v44 - v26] != v28 );
                v25 = &v24[v44 - v26 + 1];
              }
              if ( v44 != v60 )
              {
                v31 = v44 - 1;
                v32 = v25;
                do
                {
                  v34 = *++v31;
                  v33 = v34;
                  v8 = v32++ == 0;
                  if ( !v8 )
                    *(v32 - 1) = v33;
                }
                while ( &v25[v60 - v44] != v32 );
                v25 += v60 - v44;
              }
              if ( v26 )
              {
                v57 = v24;
                sub_339E64(v26);
                v24 = v57;
              }
              ptr = v24;
              src = v25;
              v65 = v61;
            }
            else
            {
              if ( src )
              {
                *(_BYTE *)src = v20;
                v44 = (char *)src;
              }
              src = v44 + 1;
            }
            break;
          case 'g':
            sub_15A1F0(v20, HIDWORD(v20), (char **)&ptr, 64, v55);
            break;
          case 'h':
            sub_15A1F0(v20, HIDWORD(v20), (char **)&ptr, 16, v55);
            break;
          case 'w':
            sub_15A1F0(v20, HIDWORD(v20), (char **)&ptr, 32, v55);
            break;
          default:
            break;
        }
      }
      else
      {
        sub_26E978(v19);
        sub_15AADC((int)&ptr, src);
      }
      v35 = v62;
      if ( *v62 == 44 )
        v35 = ++v62;
      v17 = (unsigned __int8 *)sub_9360C(v35);
      v62 = v17;
    }
    while ( *v17 );
  }
  v36 = ptr;
  if ( ptr == src )
    sub_946E0("Missing search pattern.");
  v56 = (_BYTE *)src - (_BYTE *)ptr;
  if ( (unsigned int)((_BYTE *)src - (_BYTE *)ptr) > v16 )
    sub_946E0("Search space too small to contain pattern.");
  v37 = 0;
  if ( v54 )
  {
    v53 = 0;
    do
    {
      v41 = sub_230E6C(v11, 0, v16, HIDWORD(v16), v36, v52, v56, 0, &v62);
      if ( v41 <= 0 )
        break;
      v38 = v62;
      v39 = (_DWORD *)sub_242F8C(v41);
      sub_1C7360(v3, v38, *v39);
      sub_259F10((const char *)&word_356638);
      v37 = v62;
      ++v53;
      v40 = &v62[-v11 + 1];
      if ( (unsigned int)v40 <= v16 )
        v16 -= (unsigned int)v40;
      else
        v16 = 0;
      v36 = ptr;
      v56 = (_BYTE *)src - (_BYTE *)ptr;
      if ( (unsigned int)((_BYTE *)src - (_BYTE *)ptr) > v16 )
        break;
      v11 = (unsigned int)(v62 + 1);
    }
    while ( v53 < v54 );
  }
  else
  {
    v53 = 0;
  }
LABEL_62:
  v42 = sub_26CBF4("numfound");
  sub_26CC80(v42, HIDWORD(v42), v53, 0);
  if ( v53 )
  {
    v49 = *(_DWORD *)(sub_1780B4(v3) + 152);
    v50 = sub_26CBF4("_");
    v51 = sub_26DC9C(v49, v37);
    ((void (__fastcall *)(int, int))loc_26F224)(v50, v51);
    sub_259F10("%d pattern%s found.\n");
  }
  else
  {
    sub_259F10("Pattern not found.\n");
  }
  if ( ptr )
    sub_339E64(ptr);
}
