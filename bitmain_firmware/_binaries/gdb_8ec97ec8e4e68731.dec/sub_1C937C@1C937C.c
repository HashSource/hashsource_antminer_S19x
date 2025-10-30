void __fastcall sub_1C937C(const char *a1, int a2)
{
  int v3; // r0
  const char *v4; // r3
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r3
  const char **v8; // r2
  int v9; // r4
  const char *v10; // r1
  int v11; // r0
  int *v12; // r1
  const char **v13; // r4
  const char **v14; // r8
  int v15; // r6
  const char *v16; // r5
  const char *v17; // r7
  int v18; // r0
  const char *v19; // r3
  int v20; // r10
  int v21; // r0
  int v22; // r11
  __int64 v23; // r0
  int v24; // r5
  char *v25; // r11
  char *v26; // r0
  char *next_free; // r3
  int v28; // r0
  int v29; // r5
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r11
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // [sp+10h] [bp-64h]
  int v39; // [sp+10h] [bp-64h]
  char *v40; // [sp+10h] [bp-64h]
  const char *v41; // [sp+20h] [bp-54h] BYREF
  const char *v42; // [sp+24h] [bp-50h] BYREF
  void *v43; // [sp+28h] [bp-4Ch] BYREF
  int *v44; // [sp+2Ch] [bp-48h]
  int *v45; // [sp+30h] [bp-44h]
  void *v46; // [sp+34h] [bp-40h] BYREF
  const char **v47; // [sp+38h] [bp-3Ch]
  void *ptr; // [sp+40h] [bp-34h]
  struct obstack v49; // [sp+44h] [bp-30h] BYREF

  v41 = a1;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  if ( !a1 )
    sub_51E9C("format-control string and values to print");
  v3 = sub_9360C(a1);
  v41 = (const char *)(v3 + 1);
  if ( *(_BYTE *)v3 != 34 )
    sub_946E0("Bad format string, missing '\"'.");
  sub_96C4C(&v46, &v41);
  v4 = v41;
  v5 = ++v41;
  if ( *v4 != 34 )
    sub_946E0("Bad format string, non-terminated '\"'.");
  v6 = (const char *)sub_9360C(v5);
  v41 = v6;
  if ( *v6 == 44 )
  {
    v41 = ++v6;
  }
  else if ( *v6 )
  {
    sub_946E0("Invalid argument syntax");
  }
  v7 = (const char *)sub_9360C(v6);
  v8 = (const char **)v46;
  v9 = 0;
  v41 = v7;
  if ( v46 == v47 )
    goto LABEL_17;
  do
  {
    v10 = v8[1];
    v8 += 2;
    if ( v10 )
      ++v9;
  }
  while ( v8 != v47 );
  while ( *v7 )
  {
    v42 = v7;
    v11 = sub_14CCCC((int)&v42);
    v49.chunk_size = v11;
    if ( v44 == v45 )
    {
      sub_1C99E0(&v43);
    }
    else
    {
      v12 = v44 + 1;
      if ( v44 )
        *v44 = v11;
      v44 = v12;
    }
    v7 = v42;
    v41 = v42;
    if ( *v42 == 44 )
    {
      v7 = v42 + 1;
      v41 = v42 + 1;
    }
LABEL_17:
    ;
  }
  if ( v9 != ((char *)v44 - (_BYTE *)v43) >> 2 )
    sub_946E0("Wrong number of arguments for specified format-string");
  v13 = (const char **)v46;
  v14 = v47;
  if ( v47 != v46 )
  {
    v15 = 0;
    while ( 2 )
    {
      v16 = v13[1];
      v17 = *v13;
      switch ( (unsigned int)v16 )
      {
        case 0u:
          sub_25A418(a2, *v13, 0);
          goto LABEL_23;
        case 1u:
        case 2u:
          v18 = sub_26EB1C(*((_DWORD *)v43 + v15));
          sub_25A418(a2, v17, v18);
          goto LABEL_23;
        case 3u:
          sub_946E0("long long not supported in printf");
        case 4u:
          ((void (__fastcall *)(int, const char *, _DWORD))loc_1C5D38)(a2, *v13, *((_DWORD *)v43 + v15));
          goto LABEL_23;
        case 5u:
          sub_1C5C98(a2, *v13, *((_DWORD *)v43 + v15));
          goto LABEL_23;
        case 6u:
          sub_1C5EA4(a2, *v13, *((_DWORD *)v43 + v15));
          goto LABEL_23;
        case 7u:
          v21 = sub_26BC70(*((_DWORD *)v43 + v15));
          v22 = sub_170040(v21);
          v39 = sub_170CD8((int)off_46D5A4[0], v22, "wchar_t", 0, 0);
          v23 = sub_26BC70(*((_DWORD *)v43 + v15));
          v24 = v23;
          if ( *(_DWORD *)(v23 + 20) != *(_DWORD *)(v39 + 20) || **(_BYTE **)(v23 + 24) != 8 )
            goto LABEL_57;
          v40 = (char *)sub_26E978(*((_DWORD *)v43 + v15));
          obstack_begin(&v49, 0, 0, (void *(*)(int))sub_93028, sub_1C597C);
          v25 = sub_EED48(v22);
          v26 = sub_EEBB8();
          sub_EEF04(v25, v26, v40, *(_DWORD *)(v24 + 20), *(_DWORD *)(v24 + 20), &v49, 1);
          next_free = v49.next_free;
          if ( v49.chunk_limit == v49.next_free )
          {
            obstack_newchunk(&v49, 1);
            next_free = v49.next_free;
          }
          v49.next_free = next_free + 1;
          *next_free = 0;
          sub_25A418(a2, v17, v49.object_base);
          obstack_free(&v49, 0);
LABEL_23:
          v19 = v13[1];
          v13 += 2;
          if ( v19 )
            ++v15;
          if ( v14 == v13 )
            break;
          continue;
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
          v20 = *((_DWORD *)v43 + v15);
          v38 = sub_26BC70(v20);
          sub_170040(v38);
          ((void (*)(void))loc_165BB8)();
          switch ( (unsigned int)v16 )
          {
            case 9u:
              sub_1780B4();
              v29 = *(_DWORD *)(v32 + 48);
              if ( **(_BYTE **)(v29 + 24) == 9 )
                goto LABEL_48;
              goto LABEL_45;
            case 0xAu:
              sub_1780B4();
              v29 = *(_DWORD *)(v28 + 76);
              goto LABEL_44;
            case 0xBu:
              sub_1780B4();
              v29 = *(_DWORD *)(v35 + 80);
              goto LABEL_44;
            case 0xCu:
              sub_1780B4();
              v29 = *(_DWORD *)(v37 + 84);
              goto LABEL_44;
            default:
              sub_1780B4();
              v29 = *(_DWORD *)(v36 + 44);
LABEL_44:
              if ( **(_BYTE **)(v29 + 24) == 9 )
              {
LABEL_48:
                v33 = sub_1C54D0(v38);
                if ( v33 != (unsigned int)sub_26BC70(v20) )
                {
                  v34 = sub_26E978(v20);
                  v20 = sub_26DCD8(v33, v34);
                }
              }
LABEL_45:
              v30 = sub_2647C8(v29, v20);
              v31 = sub_26E978(v30);
              ((void (__fastcall *)(struct obstack *, int, int, const char *))loc_252530)(&v49, v31, v29, v17);
              sub_25A6BC(v49.chunk_size, a2);
              if ( (char **)v49.chunk_size != &v49.object_base )
                sub_339E64((void *)v49.chunk_size);
              break;
          }
          goto LABEL_23;
        default:
          v23 = sub_94700((int)"./printcmd.c", 2575, "failed internal consistency check");
LABEL_57:
          sub_946E0("expected wchar_t argument for %%lc", HIDWORD(v23));
      }
      break;
    }
  }
  if ( ptr )
    free(ptr);
  if ( v46 )
    sub_339E64(v46);
  if ( v43 )
    sub_339E64(v43);
}
