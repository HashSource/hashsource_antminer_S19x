int __fastcall sub_23E04(int a1, _DWORD *a2)
{
  bool v2; // r3
  void **v3; // r4
  void *v4; // r0
  const char *v5; // r3
  _DWORD *v7; // [sp+18h] [bp-96Ch] BYREF
  int v8; // [sp+1Ch] [bp-968h]
  _BYTE v9[32]; // [sp+24h] [bp-960h] BYREF
  char v10[2048]; // [sp+44h] [bp-940h] BYREF
  char v11[228]; // [sp+844h] [bp-140h] BYREF
  void *v12; // [sp+928h] [bp-5Ch]
  void *v13; // [sp+92Ch] [bp-58h]
  size_t v14; // [sp+930h] [bp-54h]
  size_t v15; // [sp+934h] [bp-50h]
  size_t v16; // [sp+938h] [bp-4Ch]
  bool v17; // [sp+93Fh] [bp-45h]
  const char *v18; // [sp+940h] [bp-44h]
  const char *v19; // [sp+944h] [bp-40h]
  const char *v20; // [sp+948h] [bp-3Ch]
  char *v21; // [sp+94Ch] [bp-38h]
  char *s; // [sp+950h] [bp-34h]
  const char *v23; // [sp+954h] [bp-30h]
  void *v24; // [sp+958h] [bp-2Ch]
  void *ptr; // [sp+95Ch] [bp-28h]
  signed int v26; // [sp+960h] [bp-24h]
  _DWORD *v27; // [sp+964h] [bp-20h]
  _DWORD **v28; // [sp+968h] [bp-1Ch]
  _DWORD **v29; // [sp+96Ch] [bp-18h]
  signed int i; // [sp+970h] [bp-14h]
  unsigned __int8 v31; // [sp+977h] [bp-Dh]

  v8 = a1;
  v7 = a2;
  v29 = 0;
  v28 = 0;
  v31 = 0;
  v27 = (_DWORD *)sub_66B80(a2, 4);
  if ( v27 && *v27 == 1 )
  {
    v26 = sub_66B34(v27);
    for ( i = 0; i < v26; ++i )
    {
      memset(v9, 0, sizeof(v9));
      ptr = sub_23C50(v27, i);
      if ( !ptr )
        return v31;
      v31 = sub_207E8(v9, (unsigned __int8 *)ptr, 32);
      if ( v31 != 1 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          snprintf(v10, 0x800u, "merkle %d: %s", i, (const char *)ptr);
          sub_1E4EC(3, v10, 0);
        }
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          strcpy(v10, "Failed to convert merkle to merkle_bin in parse_notify");
          sub_1E4EC(3, v10, 0);
        }
        free(ptr);
        return v31;
      }
      free(ptr);
    }
    v24 = sub_23C50(v7, 0);
    v23 = (const char *)sub_23B88(v7, 1u);
    s = sub_23C50(v7, 2u);
    v21 = sub_23C50(v7, 3u);
    v20 = (const char *)sub_23B88(v7, 5u);
    v19 = (const char *)sub_23B88(v7, 6u);
    v18 = (const char *)sub_23B88(v7, 7u);
    sub_23CA0(v18);
    v2 = sub_66B80(v7, 8) && *(_DWORD *)sub_66B80(v7, 8) == 5;
    v17 = v2;
    if ( (unsigned __int8)sub_20C00((const char *)v24, "util.c", "parse_notify", 2027) != 1
      || (unsigned __int8)sub_20A38(v23, "util.c", "parse_notify", 2027) != 1
      || (unsigned __int8)sub_20A38(s, "util.c", "parse_notify", 2027) != 1
      || (unsigned __int8)sub_20A38(v21, "util.c", "parse_notify", 2028) != 1
      || (unsigned __int8)sub_20A38(v20, "util.c", "parse_notify", 2028) != 1
      || (unsigned __int8)sub_20A38(v19, "util.c", "parse_notify", 2028) != 1
      || (unsigned __int8)sub_20A38(v18, "util.c", "parse_notify", 2029) != 1 )
    {
      free(v24);
      free(s);
      free(v21);
    }
    else
    {
      sub_2002C(v8 + 212, "util.c", "parse_notify", 2038);
      free(*(void **)(v8 + 688));
      *(_DWORD *)(v8 + 688) = v24;
      snprintf((char *)(v8 + 1728), 0x41u, "%s", v23);
      v16 = strlen(s) >> 1;
      v15 = strlen(v21) >> 1;
      snprintf((char *)(v8 + 1796), 9u, "%s", v20);
      snprintf((char *)(v8 + 1808), 9u, "%s", v19);
      snprintf((char *)(v8 + 1820), 9u, "%s", v18);
      *(_BYTE *)(v8 + 696) = v17;
      if ( *(double *)(v8 + 1832) > 0.0 )
        *(_QWORD *)(v8 + 1840) = *(_QWORD *)(v8 + 1832);
      *(_DWORD *)(v8 + 1588) = *(_DWORD *)(v8 + 1580) + v16 + *(_DWORD *)(v8 + 648) + v15;
      v14 = *(_DWORD *)(v8 + 1588);
      *(_DWORD *)(v8 + 1592) = *(_DWORD *)(v8 + 1580) + v16;
      for ( i = 0; *(_DWORD *)(v8 + 1724) > i; ++i )
        free(*(void **)(*(_DWORD *)(v8 + 692) + 4 * i));
      if ( v26 )
      {
        *(_DWORD *)(v8 + 692) = sub_203A0(*(void **)(v8 + 692), 4 * v26 + 1, "util.c", "parse_notify", 2059);
        for ( i = 0; i < v26; ++i )
        {
          v13 = sub_23C50(v27, i);
          v3 = (void **)(*(_DWORD *)(v8 + 692) + 4 * i);
          *v3 = sub_20210(0x20u, "util.c", "parse_notify", 2064);
          if ( byte_92090 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
          {
            snprintf(v10, 0x800u, "merkle %d: %s", i, (const char *)v13);
            sub_1E4EC(7, v10, 0);
          }
          v31 = sub_207E8(*(_BYTE **)(*(_DWORD *)(v8 + 692) + 4 * i), (unsigned __int8 *)v13, 32);
          free(v13);
          if ( v31 != 1 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
            {
              strcpy(v10, "Failed to convert merkle to merkle_bin in parse_notify");
              sub_1E4EC(3, v10, 0);
            }
            goto LABEL_81;
          }
        }
      }
      *(_DWORD *)(v8 + 1724) = v26;
      if ( *(int *)(v8 + 1724) <= 1 )
        ++*(_QWORD *)(v8 + 376);
      if ( v17 )
        *(_QWORD *)(v8 + 640) = 0;
      snprintf(
        v11,
        0xE1u,
        "%s%s%s%s%s%s%s",
        (const char *)(v8 + 1796),
        (const char *)(v8 + 1728),
        off_86BDC[0],
        (const char *)(v8 + 1820),
        (const char *)(v8 + 1808),
        "00000000",
        off_87470);
      v31 = sub_207E8((_BYTE *)(v8 + 1596), (unsigned __int8 *)v11, 112);
      if ( v31 != 1 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          strcpy(v10, "Failed to convert header to header_bin in parse_notify");
          sub_1E4EC(3, v10, 0);
        }
      }
      else
      {
        v29 = &v7;
        v31 = sub_207E8(&v7, (unsigned __int8 *)s, v16);
        if ( v31 != 1 )
        {
          if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
          {
            strcpy(v10, "Failed to convert cb1 to cb1_bin in parse_notify");
            sub_1E4EC(3, v10, 0);
          }
        }
        else
        {
          v28 = &v7;
          v31 = sub_207E8(&v7, (unsigned __int8 *)v21, v15);
          if ( v31 != 1 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
            {
              strcpy(v10, "Failed to convert cb2 to cb2_bin in parse_notify");
              sub_1E4EC(3, v10, 0);
            }
          }
          else
          {
            free(*(void **)(v8 + 1584));
            v4 = sub_202D4(v14, 1u, "util.c", "parse_notify", 2121);
            *(_DWORD *)(v8 + 1584) = v4;
            sub_2BEFC(*(_DWORD *)(v8 + 1584), v29, v16, "util.c", "parse_notify", 2122);
            if ( *(_DWORD *)(v8 + 1580) )
              sub_2BEFC(
                *(_DWORD *)(v8 + 1584) + v16,
                *(_DWORD *)(v8 + 632),
                *(_DWORD *)(v8 + 1580),
                "util.c",
                "parse_notify",
                2124);
            sub_2BEFC(
              *(_DWORD *)(v8 + 1584) + *(_DWORD *)(v8 + 1580) + v16 + *(_DWORD *)(v8 + 648),
              v28,
              v15,
              "util.c",
              "parse_notify",
              2125);
            if ( byte_87768 )
            {
              v12 = sub_20744(*(_DWORD *)(v8 + 1584), *(_DWORD *)(v8 + 1588));
              if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
              {
                snprintf(v10, 0x800u, "Pool %d coinbase %s", *(_DWORD *)v8, (const char *)v12);
                sub_1E4EC(7, v10, 0);
              }
              free(v12);
            }
          }
        }
      }
LABEL_81:
      sub_2007C(v8 + 212, "util.c", "parse_notify", 2134);
      if ( byte_92090 )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "job_id: %s", (const char *)v24);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "prev_hash: %s", v23);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "coinbase1: %s", s);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "coinbase2: %s", v21);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "bbversion: %s", v20);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "nbit: %s", v19);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "ntime: %s", v18);
          sub_1E4EC(7, v10, 0);
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          if ( v17 )
            v5 = "yes";
          else
            v5 = "no";
          snprintf(v10, 0x800u, "clean: %s", v5);
          sub_1E4EC(7, v10, 0);
        }
      }
      free(s);
      free(v21);
      ++*(_DWORD *)(v8 + 116);
      ++*(_QWORD *)&dbl_94150;
      if ( sub_2F984() == v8 )
        byte_95230 = 1;
    }
  }
  return v31;
}
