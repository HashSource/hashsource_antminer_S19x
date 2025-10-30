void *__fastcall sub_312FE4(_DWORD *a1, char *a2)
{
  char *v2; // r6
  int v4; // r7
  int v5; // r10
  __int64 v6; // r8
  int v7; // r2
  int v8; // r5
  char *v9; // r6
  void *result; // r0
  size_t v11; // r5
  char *v12; // r0
  int v13; // r3
  char *v14; // r6
  int v15; // r0
  __int64 v16; // r0
  const char *v17; // r3
  char *v18; // r0
  char *v19; // r5
  char *v20; // r6
  signed int v21; // r0
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r3
  int v26; // r2
  int v27; // r2
  int v28; // r3
  int v29; // r1
  bool v30; // zf
  int v31; // r2
  int v32; // r2
  int v33; // r0
  int v34; // r2
  int v35; // t1
  char *v36; // r0
  size_t v37; // r0
  int v38; // r3
  int v39; // r0
  unsigned __int8 *v40; // r2
  int v41; // r3
  signed int v42; // r5
  __int64 v43; // r0
  char *s; // [sp+4h] [bp-18h] BYREF
  unsigned __int8 *v45; // [sp+8h] [bp-14h] BYREF
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v47; // [sp+10h] [bp-Ch]
  int v48; // [sp+14h] [bp-8h]

  v2 = a2;
  v4 = a1[10];
  LODWORD(v6) = a1[11];
  v5 = a1[14];
  s = a2;
  HIDWORD(v6) = a1[12];
  a1[11] = 0;
  a1[10] = 0;
  a1[14] = 0;
  a1[15] = 0;
  if ( a2 && *a2 )
  {
    v7 = *a1;
    v48 = 0;
    v47 = 0;
    ptr = 0;
    if ( (v7 & 0x300) != 0 )
    {
      v8 = sub_312998(a1, (unsigned __int8 **)&s, (const void **)&ptr);
      if ( v8 )
      {
LABEL_5:
        v9 = s;
        goto LABEL_6;
      }
      sub_30D184(a1);
      sub_30CC94(a1);
      if ( ptr )
      {
        free(ptr);
        v2 = s;
        v47 = 0;
        v48 = 0;
        ptr = 0;
      }
      else
      {
        v2 = s;
      }
    }
    v11 = strlen(v2);
    if ( v11 <= 6 )
      goto LABEL_34;
    if ( !strncmp(v2, "_imp__", 6u) || !strncmp(v2, "__imp_", 6u) )
    {
      v2 += 6;
      s = v2;
      a1[15] = 1;
      goto LABEL_38;
    }
    if ( v11 <= 0xA || strncmp(v2, "_GLOBAL_", 8u) )
    {
LABEL_34:
      if ( (*a1 & 0x3800) != 0 )
      {
        if ( !strncmp(v2, "__std__", 7u) )
        {
          v2 += 7;
          s = v2;
          a1[11] = 2;
        }
        else if ( !strncmp(v2, "__sti__", 7u) )
        {
          v2 += 7;
          s = v2;
          a1[10] = 2;
        }
      }
      goto LABEL_38;
    }
    v12 = strchr(&byte_471494, (unsigned __int8)v2[8]);
    if ( !v12 || *v12 != v2[10] )
      goto LABEL_38;
    v13 = (unsigned __int8)v2[9];
    if ( v13 == 68 )
    {
      v14 = v2 + 11;
      a1[11] = 2;
    }
    else
    {
      if ( v13 != 73 )
        goto LABEL_38;
      v14 = v2 + 11;
      a1[10] = 2;
    }
    s = v14;
    v15 = sub_312998(a1, (unsigned __int8 **)&s, (const void **)&ptr);
    v2 = s;
    if ( v15 )
    {
LABEL_29:
      v8 = 1;
      goto LABEL_30;
    }
LABEL_38:
    v17 = v2;
    do
    {
      v18 = strchr(v17, 95);
      v19 = v18;
      v17 = v18 + 1;
      if ( !v18 )
        goto LABEL_41;
    }
    while ( v18[1] != 95 );
    if ( v18 == (char *)-1 )
      goto LABEL_41;
    v21 = strspn(v18, "_");
    if ( v21 > 2 )
    {
      v19 += v21 - 2;
      if ( !v19 )
        goto LABEL_41;
    }
    if ( a1[12] )
    {
      v22 = (unsigned __int8)*v19;
      v23 = v22 - 116;
      v30 = v22 == 116;
      v24 = v22;
      if ( !v30 )
        v23 = 1;
      if ( (v23 & ((word_438898[v24] ^ 4u) >> 2)) == 0 )
      {
        v8 = 1;
LABEL_30:
        if ( *v2 )
          goto LABEL_31;
        goto LABEL_7;
      }
LABEL_41:
      if ( a1[10] != 2 && a1[11] != 2 )
      {
        if ( a1[15] != 1 )
        {
          sub_30D184(a1);
          goto LABEL_11;
        }
        v8 = 0;
        goto LABEL_87;
      }
      v20 = s;
      if ( s )
        goto LABEL_46;
      goto LABEL_48;
    }
    v25 = *a1;
    if ( v2 != v19 )
    {
LABEL_58:
      if ( (v25 & 0x800) != 0 && v19[2] == 112 )
      {
        v27 = (unsigned __int8)v19[3];
        if ( v27 == 116 )
          goto LABEL_111;
        if ( (v25 & 0x2000) == 0 )
        {
LABEL_65:
          if ( v2 != v19 )
          {
LABEL_66:
            v28 = (int)v19;
            goto LABEL_67;
          }
          goto LABEL_99;
        }
      }
      else
      {
        if ( (v25 & 0x2000) == 0 )
          goto LABEL_88;
        v26 = (unsigned __int8)v19[2];
        if ( v26 == 116 )
        {
          if ( v19[3] != 109 )
          {
            if ( v2 != v19 )
              goto LABEL_66;
LABEL_90:
            if ( !v26 )
              goto LABEL_41;
            goto LABEL_66;
          }
          goto LABEL_111;
        }
        if ( v26 != 112 )
        {
LABEL_88:
          if ( v2 != v19 )
          {
LABEL_89:
            v26 = (unsigned __int8)v19[2];
            goto LABEL_90;
          }
LABEL_99:
          v32 = (unsigned __int8)v2[2];
          v33 = v32 - 116;
          v30 = v32 == 116;
          v34 = v32;
          if ( !v30 )
            v33 = 1;
          if ( (v33 & ((word_438898[v34] ^ 4u) >> 2)) != 0 )
          {
            if ( (v25 & 0x3C00) == 0 || strncmp(v19, "__vtbl__", 8u) )
              goto LABEL_103;
            v38 = (unsigned __int8)v19[8];
            v45 = (unsigned __int8 *)(v19 + 8);
LABEL_116:
            if ( v38 )
            {
              while ( 1 )
              {
                v39 = sub_30D00C(&v45);
                if ( v39 == -1 )
                  goto LABEL_103;
                v40 = &v45[v39];
                v45 = v40;
                v38 = *v40;
                if ( v38 != 95 )
                  goto LABEL_116;
                if ( v40[1] == 95 )
                {
                  v45 = v40 + 2;
                  v38 = v40[2];
                  goto LABEL_116;
                }
              }
            }
            v41 = (unsigned __int8)s[8];
            s += 8;
LABEL_122:
            if ( v41 )
            {
              while ( 1 )
              {
                v42 = sub_30D00C((unsigned __int8 **)&s);
                if ( v42 == -1 || v42 > (int)strlen(s) )
                  break;
                HIDWORD(v43) = s;
                if ( v42 )
                {
                  LODWORD(v43) = &ptr;
                  sub_30D358(v43, v42);
                  HIDWORD(v43) = s;
                }
                s = (char *)(HIDWORD(v43) + v42);
                v41 = *(unsigned __int8 *)(HIDWORD(v43) + v42);
                if ( v41 != 95 )
                  goto LABEL_122;
                if ( *(_BYTE *)(HIDWORD(v43) + v42 + 1) == 95 )
                {
                  sub_30D3B8((unsigned int)&ptr, "::");
                  s += 2;
                  v41 = (unsigned __int8)*s;
                  goto LABEL_122;
                }
              }
LABEL_103:
              if ( *v2 == 95 )
              {
                do
                  v35 = (unsigned __int8)*++v2;
                while ( v35 == 95 );
              }
              v36 = strstr(v2, (const char *)&dword_3C439C);
              v28 = (int)v36;
              if ( !v36 || !v36[2] )
                goto LABEL_41;
LABEL_67:
              v8 = sub_3127F0(a1, (unsigned __int8 **)&s, &ptr, v28);
              if ( v8 )
                goto LABEL_5;
LABEL_7:
              if ( a1[10] != 2 )
              {
LABEL_8:
                if ( a1[11] == 2 )
                {
                  sub_30D3B8((unsigned int)&ptr, "global destructors keyed to ");
                  a1[11] = 0;
                  goto LABEL_10;
                }
                if ( a1[15] != 1 )
                  goto LABEL_10;
LABEL_87:
                sub_30D3B8((unsigned int)&ptr, "import stub for ");
                a1[15] = 0;
LABEL_10:
                sub_30D184(a1);
                if ( !v8 )
                  goto LABEL_11;
                goto LABEL_33;
              }
LABEL_32:
              sub_30D3B8((unsigned int)&ptr, "global constructors keyed to ");
              a1[10] = 0;
              sub_30D184(a1);
              if ( !v8 )
              {
LABEL_11:
                if ( ptr )
                  free(ptr);
                goto LABEL_13;
              }
LABEL_33:
              HIDWORD(v16) = "";
              LODWORD(v16) = &ptr;
              sub_30D320(v16, 1u);
              result = ptr;
              goto LABEL_14;
            }
            v8 = 1;
            sub_30D3E4((int)&ptr, " virtual table");
            v9 = s;
LABEL_6:
            if ( !*v9 )
              goto LABEL_7;
LABEL_31:
            v8 = sub_311D84(a1, (unsigned __int8 **)&s, (unsigned int)&ptr);
            if ( a1[10] != 2 )
              goto LABEL_8;
            goto LABEL_32;
          }
          goto LABEL_89;
        }
        v27 = (unsigned __int8)v19[3];
      }
      if ( (unsigned int)(v27 - 115) > 1 )
        goto LABEL_65;
LABEL_111:
      v8 = 1;
      v37 = strlen(v2);
      sub_30FA58(a1, (const char **)&s, v37, &ptr);
      v9 = s;
      goto LABEL_6;
    }
    v29 = (unsigned __int8)v2[2];
    if ( (word_438898[v29] & 4) != 0 )
    {
      v2 += 2;
      if ( (v25 & 0x1C00) != 0 )
      {
        s = v2;
        sub_30D00C((unsigned __int8 **)&s);
        v20 = s;
        if ( s )
        {
LABEL_46:
          if ( *v20 )
          {
            sub_30D3E4((int)&ptr, v20);
            v20 = s;
          }
        }
LABEL_48:
        v8 = 1;
        v9 = &v20[strlen(v20)];
        s = v9;
        goto LABEL_6;
      }
    }
    else
    {
      v30 = v29 == 116;
      if ( v29 != 116 )
        v30 = v29 == 81;
      v31 = v30;
      if ( v29 == 75 )
        v31 |= 1u;
      if ( !v31 && v29 != 72 )
        goto LABEL_58;
      v2 += 2;
    }
    s = v2;
    if ( (v25 & 0x3C00) == 0 )
      ++a1[10];
    goto LABEL_29;
  }
LABEL_13:
  result = 0;
LABEL_14:
  a1[10] = v4;
  *(_QWORD *)(a1 + 11) = v6;
  a1[14] = v5;
  return result;
}
