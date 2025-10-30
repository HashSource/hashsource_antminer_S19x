int __fastcall sub_5EED4(_DWORD *a1, int a2, int a3, int a4, int (__fastcall *a5)(const char *, int, int), int a6)
{
  double v6; // d0
  __int64 v8; // r0
  unsigned int v9; // r4
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r4
  size_t v13; // r0
  size_t v14; // r0
  int v15; // r0
  unsigned int v19; // [sp+10h] [bp-D4h]
  char s[100]; // [sp+18h] [bp-CCh] BYREF
  char v22[12]; // [sp+7Ch] [bp-68h] BYREF
  char v23[12]; // [sp+88h] [bp-5Ch] BYREF
  int v24; // [sp+94h] [bp-50h]
  char *v25; // [sp+98h] [bp-4Ch]
  void *base; // [sp+9Ch] [bp-48h]
  size_t nmemb; // [sp+A0h] [bp-44h]
  char *v28; // [sp+A4h] [bp-40h]
  int v29; // [sp+A8h] [bp-3Ch]
  unsigned int v30; // [sp+ACh] [bp-38h]
  unsigned int v31; // [sp+B0h] [bp-34h]
  int v32; // [sp+B4h] [bp-30h]
  double v33; // [sp+B8h] [bp-2Ch]
  int v34; // [sp+C0h] [bp-24h]
  size_t i; // [sp+C4h] [bp-20h]
  int v36; // [sp+C8h] [bp-1Ch]
  const char *v37; // [sp+CCh] [bp-18h]
  int v38; // [sp+D0h] [bp-14h]
  unsigned int j; // [sp+D4h] [bp-10h]

  v34 = a2 & 0x10000;
  v19 = a2 & 0xFFFEFFFF;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        if ( (a2 & 0x20) != 0 )
        {
          v37 = ":";
          v36 = 1;
        }
        else
        {
          v37 = ": ";
          v36 = 2;
        }
        if ( sub_5EE58(a4, a1, v22, 0xBu) )
          return -1;
        v38 = sub_65860(a1);
        if ( !v34 && a5("{", 1, a6) )
          return -1;
        if ( v38 )
        {
          if ( sub_5E990(v19, a3 + 1, 0, a5, a6) )
            return -1;
          if ( (v19 & 0x80) == 0 )
          {
            while ( 1 )
            {
              if ( !v38 )
                goto LABEL_86;
              v29 = sub_6592C(a1, v38);
              v28 = (char *)sub_6599C(v38);
              v14 = strlen(v28);
              sub_5EAB0((unsigned int)v28, v14, (int (__fastcall *)(unsigned int, unsigned int, int))a5, a6, v19);
              if ( a5(v37, v36, a6) )
                return -1;
              v15 = sub_659D8(v38);
              if ( sub_5EED4(v15, v19, a3 + 1, a4, a5, a6) )
                return -1;
              if ( v29 )
              {
                if ( a5(",", 1, a6) || sub_5E990(v19, a3 + 1, 1, a5, a6) )
                  return -1;
              }
              else if ( sub_5E990(v19, a3, 0, a5, a6) )
              {
                return -1;
              }
              v38 = v29;
            }
          }
          nmemb = sub_6529C(a1);
          base = (void *)sub_64070(4 * nmemb);
          if ( !base )
            return -1;
          i = 0;
          while ( v38 )
          {
            v12 = (char *)base + 4 * i;
            *v12 = sub_6599C(v38);
            v38 = sub_6592C(a1, v38);
            ++i;
          }
          if ( i != nmemb )
            _assert_fail("i == size", "dump.c", 0x160u, "do_dump");
          qsort(base, nmemb, 4u, (__compar_fn_t)sub_5EE18);
          for ( i = 0; i < nmemb; ++i )
          {
            v25 = (char *)*((_DWORD *)base + i);
            v24 = sub_652F0(a1, v25);
            if ( !v24 )
              _assert_fail("value", "dump.c", 0x16Bu, "do_dump");
            v13 = strlen(v25);
            sub_5EAB0((unsigned int)v25, v13, (int (__fastcall *)(unsigned int, unsigned int, int))a5, a6, v19);
            if ( a5(v37, v36, a6) || sub_5EED4(v24, v19, a3 + 1, a4, a5, a6) )
            {
LABEL_71:
              sub_640B8(base);
              return -1;
            }
            if ( i >= nmemb - 1 )
            {
              if ( sub_5E990(v19, a3, 0, a5, a6) )
                goto LABEL_71;
            }
            else if ( a5(",", 1, a6) || sub_5E990(v19, a3 + 1, 1, a5, a6) )
            {
              goto LABEL_71;
            }
          }
          sub_640B8(base);
LABEL_86:
          sub_61478(a4, v22);
          if ( v34 )
            return 0;
        }
        else
        {
          sub_61478(a4, v22);
          if ( v34 )
            return 0;
        }
        return a5("}", 1, a6);
      case 1:
        if ( sub_5EE58(a4, a1, v23, 0xBu) )
          return -1;
        v30 = sub_65E3C(a1);
        if ( !v34 && a5("[", 1, a6) )
          return -1;
        if ( v30 )
        {
          if ( sub_5E990(v19, a3 + 1, 0, a5, a6) )
            return -1;
          for ( j = 0; j < v30; ++j )
          {
            v11 = sub_65E88(a1, j);
            if ( sub_5EED4(v11, v19, a3 + 1, a4, a5, a6) )
              return -1;
            if ( j >= v30 - 1 )
            {
              if ( sub_5E990(v19, a3, 0, a5, a6) )
                return -1;
            }
            else if ( a5(",", 1, a6) || sub_5E990(v19, a3 + 1, 1, a5, a6) )
            {
              return -1;
            }
          }
          sub_61478(a4, v23);
          if ( v34 )
            return 0;
        }
        else
        {
          sub_61478(a4, v23);
          if ( v34 )
            return 0;
        }
        return a5("]", 1, a6);
      case 2:
        v9 = sub_66AE0(a1);
        v10 = sub_66B2C(a1);
        return sub_5EAB0(v9, v10, (int (__fastcall *)(unsigned int, unsigned int, int))a5, a6, v19);
      case 3:
        v8 = sub_66FB0(a1);
        v31 = snprintf(s, 0x64u, "%lld", v8);
        if ( v31 < 0x64 )
          return a5(s, v31, a6);
        else
          return -1;
      case 4:
        sub_671C0(a1);
        v33 = v6;
        v32 = sub_647E0(s, 100, (unsigned __int16)v19 >> 11);
        if ( v32 >= 0 )
          return a5(s, v32, a6);
        else
          return -1;
      case 5:
        return a5("true", 4, a6);
      case 6:
        return a5("false", 5, a6);
      case 7:
        return a5("null", 4, a6);
      default:
        return -1;
    }
  }
  return -1;
}
