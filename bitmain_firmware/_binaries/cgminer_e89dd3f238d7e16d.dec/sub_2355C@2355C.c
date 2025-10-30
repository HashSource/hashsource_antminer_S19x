int __fastcall sub_2355C(int a1, _DWORD *a2)
{
  bool v2; // r3
  void **v3; // r8
  void *v4; // r0
  const char *v5; // r3
  _DWORD *v7; // [sp+18h] [bp-97Ch] BYREF
  int v8; // [sp+1Ch] [bp-978h]
  _BYTE v9[32]; // [sp+24h] [bp-970h] BYREF
  char v10[2048]; // [sp+44h] [bp-950h] BYREF
  char v11[228]; // [sp+844h] [bp-150h] BYREF
  void *ptr; // [sp+928h] [bp-6Ch]
  void *v13; // [sp+92Ch] [bp-68h]
  void *v14; // [sp+930h] [bp-64h]
  size_t v15; // [sp+934h] [bp-60h]
  size_t v16; // [sp+938h] [bp-5Ch]
  size_t v17; // [sp+93Ch] [bp-58h]
  bool v18; // [sp+943h] [bp-51h]
  const char *v19; // [sp+944h] [bp-50h]
  const char *v20; // [sp+948h] [bp-4Ch]
  const char *v21; // [sp+94Ch] [bp-48h]
  char *v22; // [sp+950h] [bp-44h]
  char *s; // [sp+954h] [bp-40h]
  const char *v24; // [sp+958h] [bp-3Ch]
  void *v25; // [sp+95Ch] [bp-38h]
  signed int v26; // [sp+960h] [bp-34h]
  _DWORD *v27; // [sp+964h] [bp-30h]
  _DWORD **v28; // [sp+968h] [bp-2Ch]
  _DWORD **v29; // [sp+96Ch] [bp-28h]
  signed int i; // [sp+970h] [bp-24h]
  unsigned __int8 v31; // [sp+977h] [bp-1Dh]

  v8 = a1;
  v7 = a2;
  v29 = 0;
  v28 = 0;
  v31 = 0;
  v27 = (_DWORD *)sub_65E88(a2, 4);
  if ( v27 && *v27 == 1 )
  {
    v26 = sub_65E3C(v27);
    for ( i = 0; i < v26; ++i )
    {
      memset(v9, 0, sizeof(v9));
      ptr = sub_233A8(v27, i);
      if ( !ptr )
        return v31;
      v31 = sub_1FF0C(v9, (unsigned __int8 *)ptr, 32);
      if ( v31 != 1 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          snprintf(v10, 0x800u, "merkle %d: %s", i, (const char *)ptr);
          sub_1DB6C(3, v10, 0);
        }
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          strcpy(v10, "Failed to convert merkle to merkle_bin in parse_notify");
          sub_1DB6C(3, v10, 0);
        }
        free(ptr);
        return v31;
      }
      free(ptr);
    }
    v25 = sub_233A8(v7, 0);
    v24 = (const char *)sub_232E0(v7, 1u);
    s = sub_233A8(v7, 2u);
    v22 = sub_233A8(v7, 3u);
    v21 = (const char *)sub_232E0(v7, 5u);
    v20 = (const char *)sub_232E0(v7, 6u);
    v19 = (const char *)sub_232E0(v7, 7u);
    sub_233F8(v19);
    v2 = sub_65E88(v7, 8) && *(_DWORD *)sub_65E88(v7, 8) == 5;
    v18 = v2;
    if ( (unsigned __int8)sub_20324((const char *)v25, "util.c", "parse_notify", 2027) != 1
      || (unsigned __int8)sub_2015C(v24, "util.c", "parse_notify", 2027) != 1
      || (unsigned __int8)sub_2015C(s, "util.c", "parse_notify", 2027) != 1
      || (unsigned __int8)sub_2015C(v22, "util.c", "parse_notify", 2028) != 1
      || (unsigned __int8)sub_2015C(v21, "util.c", "parse_notify", 2028) != 1
      || (unsigned __int8)sub_2015C(v20, "util.c", "parse_notify", 2028) != 1
      || (unsigned __int8)sub_2015C(v19, "util.c", "parse_notify", 2029) != 1 )
    {
      free(v25);
      free(s);
      free(v22);
    }
    else
    {
      sub_1F744(v8 + 212, "util.c", "parse_notify", 2038);
      free(*(void **)(v8 + 672));
      *(_DWORD *)(v8 + 672) = v25;
      snprintf((char *)(v8 + 1712), 0x41u, "%s", v24);
      v17 = strlen(s) >> 1;
      v16 = strlen(v22) >> 1;
      snprintf((char *)(v8 + 1780), 9u, "%s", v21);
      snprintf((char *)(v8 + 1792), 9u, "%s", v20);
      snprintf((char *)(v8 + 1804), 9u, "%s", v19);
      *(_BYTE *)(v8 + 680) = v18;
      if ( *(double *)(v8 + 1816) > 0.0 )
        *(_QWORD *)(v8 + 1824) = *(_QWORD *)(v8 + 1816);
      *(_DWORD *)(v8 + 1572) = *(_DWORD *)(v8 + 1564) + v17 + *(_DWORD *)(v8 + 632) + v16;
      v15 = *(_DWORD *)(v8 + 1572);
      *(_DWORD *)(v8 + 1576) = *(_DWORD *)(v8 + 1564) + v17;
      for ( i = 0; i < *(_DWORD *)(v8 + 1708); ++i )
        free(*(void **)(*(_DWORD *)(v8 + 676) + 4 * i));
      if ( v26 )
      {
        *(_DWORD *)(v8 + 676) = sub_1FAC4(*(void **)(v8 + 676), 4 * v26 + 1, "util.c", "parse_notify", 2059);
        for ( i = 0; i < v26; ++i )
        {
          v14 = sub_233A8(v27, i);
          v3 = (void **)(*(_DWORD *)(v8 + 676) + 4 * i);
          *v3 = sub_1F934(0x20u, "util.c", "parse_notify", 2064);
          if ( byte_90EF8 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            snprintf(v10, 0x800u, "merkle %d: %s", i, (const char *)v14);
            sub_1DB6C(7, v10, 0);
          }
          v31 = sub_1FF0C(*(_BYTE **)(*(_DWORD *)(v8 + 676) + 4 * i), (unsigned __int8 *)v14, 32);
          free(v14);
          if ( v31 != 1 )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
            {
              strcpy(v10, "Failed to convert merkle to merkle_bin in parse_notify");
              sub_1DB6C(3, v10, 0);
            }
            goto LABEL_77;
          }
        }
      }
      *(_DWORD *)(v8 + 1708) = v26;
      if ( *(int *)(v8 + 1708) <= 1 )
        ++*(_QWORD *)(v8 + 376);
      if ( v18 )
        *(_QWORD *)(v8 + 624) = 0;
      snprintf(
        v11,
        0xE1u,
        "%s%s%s%s%s%s%s",
        (const char *)(v8 + 1780),
        (const char *)(v8 + 1712),
        off_85A44[0],
        (const char *)(v8 + 1804),
        (const char *)(v8 + 1792),
        "00000000",
        off_862D8);
      v31 = sub_1FF0C((_BYTE *)(v8 + 1580), (unsigned __int8 *)v11, 112);
      if ( v31 != 1 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          strcpy(v10, "Failed to convert header to header_bin in parse_notify");
          sub_1DB6C(3, v10, 0);
        }
      }
      else
      {
        v29 = &v7;
        v31 = sub_1FF0C(&v7, (unsigned __int8 *)s, v17);
        if ( v31 != 1 )
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
          {
            strcpy(v10, "Failed to convert cb1 to cb1_bin in parse_notify");
            sub_1DB6C(3, v10, 0);
          }
        }
        else
        {
          v28 = &v7;
          v31 = sub_1FF0C(&v7, (unsigned __int8 *)v22, v16);
          if ( v31 != 1 )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
            {
              strcpy(v10, "Failed to convert cb2 to cb2_bin in parse_notify");
              sub_1DB6C(3, v10, 0);
            }
          }
          else
          {
            free(*(void **)(v8 + 1568));
            v4 = sub_1F9F8(v15, 1u, "util.c", "parse_notify", 2121);
            *(_DWORD *)(v8 + 1568) = v4;
            sub_2AF08(*(_DWORD *)(v8 + 1568), v29, v17, "util.c", "parse_notify", 2122);
            if ( *(_DWORD *)(v8 + 1564) )
              sub_2AF08(
                *(_DWORD *)(v8 + 1568) + v17,
                *(_DWORD *)(v8 + 616),
                *(_DWORD *)(v8 + 1564),
                "util.c",
                "parse_notify",
                2124);
            sub_2AF08(
              *(_DWORD *)(v8 + 1568) + *(_DWORD *)(v8 + 1564) + v17 + *(_DWORD *)(v8 + 632),
              v28,
              v16,
              "util.c",
              "parse_notify",
              2125);
            if ( byte_865D0 )
            {
              v13 = sub_1FE6C(*(_DWORD *)(v8 + 1568), *(_DWORD *)(v8 + 1572));
              if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
              {
                snprintf(v10, 0x800u, "Pool %d coinbase %s", *(_DWORD *)v8, (const char *)v13);
                sub_1DB6C(7, v10, 0);
              }
              free(v13);
            }
          }
        }
      }
LABEL_77:
      sub_1F798(v8 + 212, "util.c", "parse_notify", 2134);
      if ( byte_90EF8 )
      {
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "job_id: %s", (const char *)v25);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "prev_hash: %s", v24);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "coinbase1: %s", s);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "coinbase2: %s", v22);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "bbversion: %s", v21);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "nbit: %s", v20);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v10, 0x800u, "ntime: %s", v19);
          sub_1DB6C(7, v10, 0);
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          if ( v18 )
            v5 = "yes";
          else
            v5 = "no";
          snprintf(v10, 0x800u, "clean: %s", v5);
          sub_1DB6C(7, v10, 0);
        }
      }
      free(s);
      free(v22);
      ++*(_DWORD *)(v8 + 116);
      ++*(_QWORD *)&dword_92FB8;
      if ( v8 == sub_2E98C() )
        byte_94098 = 1;
    }
  }
  return v31;
}
