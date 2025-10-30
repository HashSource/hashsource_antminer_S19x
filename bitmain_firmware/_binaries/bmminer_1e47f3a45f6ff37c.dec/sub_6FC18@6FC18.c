int __fastcall sub_6FC18(_DWORD *a1, int a2, int a3, int a4, int (__fastcall *a5)(const char *, int, int), int a6)
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
  unsigned int v19; // [sp+10h] [bp-DCh]
  char s[100]; // [sp+1Ch] [bp-D0h] BYREF
  char v22[12]; // [sp+80h] [bp-6Ch] BYREF
  char v23[12]; // [sp+8Ch] [bp-60h] BYREF
  char *v24; // [sp+98h] [bp-54h]
  int v25; // [sp+9Ch] [bp-50h]
  int v26; // [sp+A0h] [bp-4Ch]
  char *v27; // [sp+A4h] [bp-48h]
  void *base; // [sp+A8h] [bp-44h]
  size_t nmemb; // [sp+ACh] [bp-40h]
  unsigned int v30; // [sp+B0h] [bp-3Ch]
  int v31; // [sp+B4h] [bp-38h]
  double v32; // [sp+B8h] [bp-34h]
  unsigned int v33; // [sp+C4h] [bp-28h]
  int v34; // [sp+C8h] [bp-24h]
  size_t i; // [sp+CCh] [bp-20h]
  int v36; // [sp+D0h] [bp-1Ch]
  const char *v37; // [sp+D4h] [bp-18h]
  int v38; // [sp+D8h] [bp-14h]
  unsigned int j; // [sp+DCh] [bp-10h]

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
        if ( sub_6FB9C(a4, a1, v22, 0xBu) )
          return -1;
        v38 = sub_7655C(a1);
        if ( !v34 && a5("{", 1, a6) )
          return -1;
        if ( v38 )
        {
          if ( sub_6F6D0(v19, a3 + 1, 0, a5, a6) )
            return -1;
          if ( (v19 & 0x80) == 0 )
          {
            while ( 1 )
            {
              if ( !v38 )
                goto LABEL_87;
              v25 = sub_76628(a1, v38);
              v24 = (char *)sub_76698(v38);
              v14 = strlen(v24);
              sub_6F7F4((unsigned int)v24, v14, (int (__fastcall *)(unsigned int, unsigned int, int))a5, a6, v19);
              if ( a5(v37, v36, a6) )
                return -1;
              v15 = sub_766D4(v38);
              if ( sub_6FC18(v15, v19, a3 + 1, a4, a5, a6) )
                return -1;
              if ( v25 )
              {
                if ( a5(",", 1, a6) || sub_6F6D0(v19, a3 + 1, 1, a5, a6) )
                  return -1;
              }
              else if ( sub_6F6D0(v19, a3, 0, a5, a6) )
              {
                return -1;
              }
              v38 = v25;
            }
          }
          nmemb = sub_75F98(a1);
          base = (void *)sub_74DA0(4 * nmemb);
          if ( !base )
            return -1;
          i = 0;
          while ( v38 )
          {
            v12 = (char *)base + 4 * i;
            *v12 = sub_76698(v38);
            v38 = sub_76628(a1, v38);
            ++i;
          }
          if ( i != nmemb )
            _assert_fail("i == size", "dump.c", 0x160u, "do_dump");
          qsort(base, nmemb, 4u, (__compar_fn_t)sub_6FB5C);
          for ( i = 0; i < nmemb; ++i )
          {
            v27 = (char *)*((_DWORD *)base + i);
            v26 = sub_75FEC(a1, v27);
            if ( !v26 )
              _assert_fail("value", "dump.c", 0x16Bu, "do_dump");
            v13 = strlen(v27);
            sub_6F7F4((unsigned int)v27, v13, (int (__fastcall *)(unsigned int, unsigned int, int))a5, a6, v19);
            if ( a5(v37, v36, a6) || sub_6FC18(v26, v19, a3 + 1, a4, a5, a6) )
            {
LABEL_71:
              sub_74DE8(base);
              return -1;
            }
            if ( nmemb - 1 <= i )
            {
              if ( sub_6F6D0(v19, a3, 0, a5, a6) )
                goto LABEL_71;
            }
            else if ( a5(",", 1, a6) || sub_6F6D0(v19, a3 + 1, 1, a5, a6) )
            {
              goto LABEL_71;
            }
          }
          sub_74DE8(base);
LABEL_87:
          sub_721D0(a4, v22);
          if ( v34 )
            return 0;
        }
        else
        {
          sub_721D0(a4, v22);
          if ( v34 )
            return 0;
        }
        return a5("}", 1, a6);
      case 1:
        if ( sub_6FB9C(a4, a1, v23, 0xBu) )
          return -1;
        v30 = sub_76B34(a1);
        if ( !v34 && a5("[", 1, a6) )
          return -1;
        if ( v30 )
        {
          if ( sub_6F6D0(v19, a3 + 1, 0, a5, a6) )
            return -1;
          for ( j = 0; j < v30; ++j )
          {
            v11 = sub_76B80(a1, j);
            if ( sub_6FC18(v11, v19, a3 + 1, a4, a5, a6) )
              return -1;
            if ( v30 - 1 <= j )
            {
              if ( sub_6F6D0(v19, a3, 0, a5, a6) )
                return -1;
            }
            else if ( a5(",", 1, a6) || sub_6F6D0(v19, a3 + 1, 1, a5, a6) )
            {
              return -1;
            }
          }
          sub_721D0(a4, v23);
          if ( v34 )
            return 0;
        }
        else
        {
          sub_721D0(a4, v23);
          if ( v34 )
            return 0;
        }
        return a5("]", 1, a6);
      case 2:
        v9 = sub_777D0(a1);
        v10 = sub_7781C(a1);
        return sub_6F7F4(v9, v10, (int (__fastcall *)(unsigned int, unsigned int, int))a5, a6, v19);
      case 3:
        v8 = sub_77C98(a1);
        v33 = snprintf(s, 0x64u, "%lld", v8);
        if ( v33 < 0x64 )
          return a5(s, v33, a6);
        else
          return -1;
      case 4:
        sub_77E80(a1);
        v32 = v6;
        v31 = sub_754F8(s, 100, (unsigned __int16)v19 >> 11);
        if ( v31 >= 0 )
          return a5(s, v31, a6);
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
