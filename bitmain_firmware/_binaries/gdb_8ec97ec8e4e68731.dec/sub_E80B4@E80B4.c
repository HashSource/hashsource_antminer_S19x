int __fastcall sub_E80B4(int a1, _DWORD *a2, int *a3, int a4)
{
  int v6; // r3
  int v7; // r0
  int v8; // r3
  int v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r2
  int v15; // r3
  unsigned __int8 *v16; // r7
  unsigned __int8 *v17; // r5
  unsigned __int8 *i; // r4
  unsigned __int8 *v19; // r6
  unsigned int v20; // r4
  unsigned int v21; // r5
  __int64 v22; // r0
  int v23; // r0
  int v24; // r4
  int v25; // r0
  unsigned int v26; // r0
  char *next_free; // r3
  unsigned __int8 *v28; // r6
  int v29; // r1
  int v30; // r4
  int v31; // r0
  _BOOL4 v32; // r3
  unsigned __int8 *v33; // r2
  int v34; // t1
  int v35; // r6
  int v36; // r4
  char *v37; // r3
  int v38; // r4
  unsigned int v39; // r8
  __int64 v40; // r6
  __int64 v41; // r0
  void *v42; // r0
  unsigned __int8 *v43; // r4
  int v44; // r11
  __int64 v45; // r0
  unsigned int v46; // r6
  int v47; // r6
  int v48; // r0
  _BOOL4 v49; // r3
  char v50; // r1
  char v51; // r0
  char v52; // r12
  unsigned int v53; // r6
  int v54; // r0
  int v55; // r3
  bool v56; // zf
  int v57; // r3
  bool v58; // zf
  int v59; // r3
  int v60; // r3
  int v61; // r0
  const char *v62; // [sp+10h] [bp-74h]
  int v63; // [sp+14h] [bp-70h]
  int v65; // [sp+1Ch] [bp-68h]
  int v66; // [sp+20h] [bp-64h]
  int v68; // [sp+28h] [bp-5Ch]
  int v69; // [sp+2Ch] [bp-58h]
  int v70; // [sp+30h] [bp-54h]
  __int64 v71; // [sp+40h] [bp-44h] BYREF
  int v72; // [sp+48h] [bp-3Ch] BYREF
  unsigned int v73; // [sp+4Ch] [bp-38h]
  struct obstack v74; // [sp+54h] [bp-30h] BYREF

  if ( a2[4 * *a3 + 4] != 50 )
    return sub_14E83C(a1, a2, a3, a4);
  obstack_begin(&v74, 0, 0, (void *(*)(int))sub_93028, sub_E7758);
  v6 = *a3 + 1;
  *a3 = v6;
  v7 = sub_26725C(a2[4 * v6 + 4], a2[4 * v6 + 5]);
  v8 = *a3 + 1;
  *a3 = v8;
  v65 = v8 + ((unsigned int)(v7 + 16) >> 4);
  v69 = sub_26725C(a2[4 * v8 + 4], a2[4 * v8 + 5]);
  switch ( v69 & 0xFFFFFFFB )
  {
    case 0u:
      v10 = sub_1945F8(*a2, a2[1]);
      goto LABEL_5;
    case 1u:
      v10 = sub_170CD8(*a2, a2[1], "wchar_t", 0, 0);
      goto LABEL_5;
    case 2u:
      v10 = sub_170CD8(*a2, a2[1], "char16_t", 0, 0);
      goto LABEL_5;
    case 3u:
      v10 = sub_170CD8(*a2, a2[1], "char32_t", 0, 0);
LABEL_5:
      v66 = v10;
      sub_171258(v10);
      if ( a1 )
      {
        v11 = *(_DWORD *)(a1 + 24);
        if ( *(_BYTE *)v11 == 2 )
        {
          v54 = sub_171258(*(_DWORD *)(v11 + 20));
          v55 = **(char **)(v54 + 24);
          v56 = v55 == 8;
          if ( v55 != 8 )
            v56 = v55 == 20;
          v57 = v56;
          v58 = v57 == 0;
          v59 = v66;
          if ( !v58 )
            v59 = v54;
          v66 = v59;
          v60 = !v58;
          v70 = v60;
        }
        else
        {
          v70 = 0;
        }
      }
      else
      {
        v70 = 0;
      }
      v62 = sub_E7A50(v69, a2[1]);
      v12 = *a3 + 1;
      *a3 = v12;
      if ( v12 >= v65 )
        goto LABEL_21;
      break;
    default:
      v45 = sub_94700((int)"c-lang.c", 604, "unhandled c_string_type");
      goto LABEL_109;
  }
  do
  {
    v13 = sub_26725C(a2[4 * v12 + 4], a2[4 * v12 + 5]);
    v63 = v13;
    v14 = *a3 + 1;
    *a3 = v14;
    v15 = v14;
    if ( a4 == 1 )
      goto LABEL_20;
    v16 = (unsigned __int8 *)&a2[4 * v14 + 4];
    v17 = &v16[v13];
    while ( v17 > v16 )
    {
      if ( *v16 == 92 )
      {
        v19 = v16;
      }
      else
      {
        for ( i = v16 + 1; ; ++i )
        {
          v19 = i;
          if ( v17 == i )
          {
            if ( v17 <= v16 )
              goto LABEL_19;
            goto LABEL_31;
          }
          if ( *i == 92 )
            break;
        }
        if ( i <= v16 )
          goto LABEL_32;
LABEL_31:
        v25 = sub_EEBB8();
        sub_EEF04(v25, (int)v62, (int)v16, i - v16, 1, &v74, 0);
        if ( v17 <= i )
          break;
      }
LABEL_32:
      v16 = v19 + 1;
      if ( v17 == v19 + 1 )
        sub_946E0("Malformed escape sequence");
      v26 = v19[1];
      if ( v26 == 85 )
      {
        v68 = 8;
        goto LABEL_73;
      }
      if ( v26 <= 0x55 )
      {
        if ( v26 - 48 <= 7 )
        {
          if ( v17 <= v16 )
          {
            v29 = 0;
          }
          else
          {
            v28 = v19 + 2;
            v29 = 0;
            while ( 1 )
            {
              v30 = 8 * v29;
              v31 = ((int (*)(void))loc_EEE94)();
              v32 = v28 - v16 > 2 || v17 <= v28;
              v29 = v31 + v30;
              v33 = v28;
              if ( v32 )
                break;
              v34 = *v28++;
              if ( (unsigned int)(v34 - 48) > 7 )
              {
                v16 = v33;
                goto LABEL_51;
              }
            }
            v16 = v28;
          }
LABEL_51:
          sub_E7764(v66, v29, &v74);
        }
      }
      else
      {
        switch ( v26 )
        {
          case 'u':
            v68 = 4;
LABEL_73:
            v43 = v19 + 2;
            if ( v17 == v19 + 2 )
              sub_946E0("Malformed escape sequence");
            v44 = v19[2];
            if ( !isxdigit(v44) )
LABEL_109:
              sub_946E0("\\u used with no following hex digits", HIDWORD(v45));
            if ( v17 <= v43 )
            {
              LOBYTE(v53) = 0;
              v16 = v43;
              v52 = 0;
              v51 = 0;
              v50 = 0;
            }
            else
            {
              v16 = v19 + 2;
              v46 = 0;
              do
              {
                v47 = 16 * v46;
                v48 = ((int (__fastcall *)(int))loc_EEE94)(v44);
                v49 = v17 <= ++v16;
                if ( v68 <= v16 - v43 )
                  v49 = 1;
                v46 = v48 + v47;
                if ( v49 )
                  break;
                v44 = *v16;
              }
              while ( isxdigit(v44) );
              v50 = v46;
              v51 = BYTE1(v46);
              v52 = BYTE2(v46);
              v53 = HIBYTE(v46);
            }
            LOBYTE(v72) = v53;
            HIBYTE(v72) = v50;
            BYTE2(v72) = v51;
            BYTE1(v72) = v52;
            sub_EEF04((int)"UTF-32BE", (int)v62, (int)&v72, 4, 4, &v74, 0);
            break;
          case 'x':
            v16 = v19 + 2;
            if ( v17 == v19 + 2 )
              sub_946E0("Malformed escape sequence");
            v35 = v19[2];
            if ( !isxdigit(v35) )
              sub_946E0("\\x used with no following hex digits.");
            v36 = 0;
            if ( v17 > v16 )
            {
              while ( 1 )
              {
                ++v16;
                v36 = ((int (__fastcall *)(int))loc_EEE94)(v35) + 16 * v36;
                if ( v17 == v16 )
                  break;
                v35 = *v16;
                if ( !isxdigit(v35) )
                  goto LABEL_59;
              }
              v16 = v17;
            }
LABEL_59:
            sub_E7764(v66, v36, &v74);
            break;
          case '\\':
            next_free = v74.next_free;
            if ( v74.chunk_limit == v74.next_free )
            {
              obstack_newchunk(&v74, 1);
              next_free = v74.next_free;
            }
            v74.next_free = next_free + 1;
            v16 = v19 + 2;
            *next_free = 92;
            break;
        }
      }
    }
LABEL_19:
    v15 = *a3;
LABEL_20:
    v12 = v15 + ((unsigned int)(v63 + 15) >> 4);
    *a3 = v12;
  }
  while ( v12 < v65 );
LABEL_21:
  *a3 = v12 + 2;
  if ( a4 == 1 )
  {
    if ( a1 )
    {
      v23 = sub_26BB80(a1);
    }
    else if ( (v69 & 4) != 0 )
    {
      v23 = sub_26BB80(v66);
    }
    else
    {
      v23 = sub_2623E0("", 0, v66);
    }
    goto LABEL_25;
  }
  v20 = v69 & 4;
  v21 = *(_DWORD *)(v66 + 20);
  if ( (v69 & 4) != 0 )
  {
    if ( v74.next_free - v74.object_base != v21 )
      sub_946E0("Could not convert character constant to target character set");
    v22 = sub_26D134(v66, v74.object_base);
    v23 = sub_26DAF4(v66, HIDWORD(v22), v22, HIDWORD(v22));
LABEL_25:
    v24 = v23;
  }
  else
  {
    if ( v21 )
    {
      do
      {
        v37 = v74.next_free;
        if ( v74.chunk_limit == v74.next_free )
        {
          obstack_newchunk(&v74, 1);
          v37 = v74.next_free;
        }
        ++v20;
        v74.next_free = v37 + 1;
        *v37 = v69 & 4;
        v21 = *(_DWORD *)(v66 + 20);
      }
      while ( v21 > v20 );
    }
    if ( !v70 )
    {
      v23 = sub_2623E0(v74.object_base, v74.next_free - v74.object_base, v66);
      goto LABEL_25;
    }
    if ( sub_17195C(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 12), &v71, &v72) < 0 )
    {
      v40 = 0;
      v71 = 0;
      v39 = 0;
      v61 = sub_347418(*(_DWORD *)(a1 + 20), v21);
      v73 = 0;
      v38 = v61 - 1;
      v72 = v61 - 1;
    }
    else
    {
      v38 = v72;
      v39 = v73;
      v40 = v71;
    }
    if ( (__int64)(__PAIR64__(v39, v38) - v40 + 1) < (unsigned int)sub_347418(v74.next_free - v74.object_base, v21) )
      sub_946E0("Too many array elements");
    v41 = sub_26BB80(a1);
    v24 = v41;
    v42 = (void *)sub_26BCB8(v41, HIDWORD(v41));
    memcpy(v42, v74.object_base, v74.next_free - v74.object_base);
  }
  obstack_free(&v74, 0);
  return v24;
}
