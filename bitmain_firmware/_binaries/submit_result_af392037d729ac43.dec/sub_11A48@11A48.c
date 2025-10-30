int __fastcall sub_11A48(_DWORD *a1, int a2, int a3, int a4, int (__fastcall *a5)(const char *, int, int), int a6)
{
  char v6; // r9
  int v9; // r5
  int v10; // r7
  unsigned int v11; // r4
  const char *v12; // lr
  int v13; // lr
  int v15; // r10
  int v16; // r9
  unsigned int v17; // r8
  int v18; // r0
  unsigned int v19; // r5
  int v20; // r0
  __int64 v21; // r0
  int v22; // r1
  int v23; // r8
  int v24; // r10
  int v25; // r9
  int v26; // r5
  const char *v27; // r11
  size_t v28; // r0
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r4
  int v32; // r3
  int v33; // r5
  int v34; // r9
  int v35; // r8
  int v36; // r0
  unsigned int v37; // r3
  int v38; // r4
  unsigned int v39; // r9
  int v40; // r8
  const char *v41; // r11
  const char *v42; // t1
  int v43; // r5
  size_t v44; // r0
  const char *v45; // [sp+14h] [bp-90h]
  int v46; // [sp+18h] [bp-8Ch]
  size_t nmemb; // [sp+1Ch] [bp-88h]
  int nmemba; // [sp+1Ch] [bp-88h]
  int v49; // [sp+20h] [bp-84h]
  _DWORD *v50; // [sp+20h] [bp-84h]
  unsigned int v51; // [sp+24h] [bp-80h]
  unsigned int v52; // [sp+28h] [bp-7Ch]
  int v53; // [sp+28h] [bp-7Ch]
  void *base; // [sp+30h] [bp-74h]
  char s[104]; // [sp+3Ch] [bp-68h] BYREF

  v6 = a2;
  v9 = a4;
  v10 = a2 & 0x10000;
  v11 = a2 & 0xFFFEFFFF;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        v12 = ":";
        if ( (a2 & 0x20) == 0 )
          v12 = ": ";
        v45 = v12;
        if ( (a2 & 0x20) != 0 )
          v13 = 1;
        else
          v13 = 2;
        v46 = v13;
        if ( sub_13DB0(a4, (int)a1, s, 0xBu) )
          return -1;
        v23 = sub_13E80(a1);
        if ( !v10 )
        {
          if ( a5("{", 1, a6) )
            return -1;
        }
        if ( !v23 )
          goto LABEL_49;
        v24 = a3 + 1;
        if ( sub_119E8(v11, a3 + 1, 0, a5, a6) )
          return -1;
        if ( (v6 & 0x80) == 0 )
        {
          v25 = v9;
          nmemb = (size_t)a1;
          while ( 1 )
          {
            v26 = sub_13EA8(nmemb, v23);
            v27 = (const char *)sub_13EBC(v23);
            v28 = strlen(v27);
            sub_11818((unsigned int)v27, v28, a5, a6, v11);
            if ( a5(v45, v46, a6) )
              return -1;
            v29 = sub_13EC4(v23);
            if ( sub_11A48(v29, v11, v24, v25, a5, a6) )
              return -1;
            if ( !v26 )
            {
              v9 = v25;
              if ( sub_119E8(v11, a3, 0, a5, a6) )
                return -1;
              goto LABEL_49;
            }
            if ( !a5(",", 1, a6) )
            {
              v23 = v26;
              if ( !sub_119E8(v11, v24, 1, a5, a6) )
                continue;
            }
            return -1;
          }
        }
        nmemba = sub_13E28(a1);
        v30 = sub_13828(4 * nmemba);
        base = (void *)v30;
        if ( !v30 )
          return -1;
        v52 = v11;
        v31 = 0;
        v32 = v9;
        v49 = v30 - 4;
        v33 = v23;
        v34 = v30 - 4;
        v35 = v32;
        while ( 1 )
        {
          *(_DWORD *)(v34 + 4) = sub_13EBC(v33);
          v34 += 4;
          v36 = sub_13EA8(a1, v33);
          v37 = v31 + 1;
          v33 = v36;
          if ( !v36 )
            break;
          ++v31;
        }
        v51 = v31;
        v9 = v35;
        v38 = v52;
        if ( nmemba != v37 )
          _assert_fail("i == size", "dump.c", 0x14Fu, "do_dump");
        qsort(base, nmemba, 4u, (__compar_fn_t)compar);
        if ( nmemba )
        {
          v39 = 0;
          v40 = v49;
          v50 = a1;
          v53 = v9;
          do
          {
            v42 = *(const char **)(v40 + 4);
            v40 += 4;
            v41 = v42;
            v43 = sub_13E38(v50, v42);
            if ( !v43 )
              _assert_fail("value", "dump.c", 0x159u, "do_dump");
            v44 = strlen(v41);
            sub_11818((unsigned int)v41, v44, a5, a6, v38);
            if ( a5(v45, v46, a6) || sub_11A48(v43, v38, v24, v53, a5, a6) )
            {
LABEL_67:
              sub_1383C(base);
              return -1;
            }
            if ( v39 < v51 )
            {
              if ( a5(",", 1, a6) || sub_119E8(v38, v24, 1, a5, a6) )
                goto LABEL_67;
            }
            else if ( sub_119E8(v38, a3, 0, a5, a6) )
            {
              goto LABEL_67;
            }
            ++v39;
          }
          while ( nmemba != v39 );
          v9 = v53;
        }
        sub_1383C(base);
LABEL_49:
        sub_12608(v9, s);
        if ( v10 )
          return 0;
        return a5("}", 1, a6);
      case 1:
        if ( sub_13DB0(a4, (int)a1, s, 0xBu) )
          return -1;
        v15 = sub_13F08(a1);
        if ( !v10 )
        {
          if ( a5("[", 1, a6) )
            return -1;
        }
        if ( !v15 )
          goto LABEL_46;
        v16 = a3 + 1;
        if ( sub_119E8(v11, a3 + 1, 0, a5, a6) )
          return -1;
        v17 = 0;
        break;
      case 2:
        v19 = sub_14010(a1);
        v20 = sub_14020(a1);
        return sub_11818(v19, v20, a5, a6, v11);
      case 3:
        v21 = sub_1416C();
        v22 = snprintf(s, 0x64u, "%lld", v21);
        if ( (unsigned int)v22 > 0x63 )
          return -1;
        return a5(s, v22, a6);
      case 4:
        sub_141D8();
        v22 = sub_13A64(s, 100, (unsigned __int16)v11 >> 11);
        if ( v22 < 0 )
          return -1;
        return a5(s, v22, a6);
      case 5:
        return a5("true", 4, a6);
      case 6:
        return a5("false", 5, a6);
      case 7:
        return a5("null", 4, a6);
      default:
        return -1;
    }
    while ( 1 )
    {
      v18 = sub_13F1C(a1, v17);
      if ( sub_11A48(v18, v11, v16, v9, a5, a6) )
        break;
      if ( v15 - 1 > v17 )
      {
        if ( a5(",", 1, a6) || sub_119E8(v11, v16, 1, a5, a6) )
          return -1;
      }
      else if ( sub_119E8(v11, a3, 0, a5, a6) )
      {
        return -1;
      }
      if ( ++v17 == v15 )
      {
LABEL_46:
        sub_12608(v9, s);
        if ( v10 )
          return 0;
        else
          return a5("]", 1, a6);
      }
    }
  }
  return -1;
}
