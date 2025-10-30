int __fastcall sub_73164(_DWORD *a1, int a2)
{
  int result; // r0
  int v3; // r3
  _BYTE *v4; // r3
  _BYTE *v5; // r2
  int v8; // [sp+14h] [bp-20h] BYREF
  int v9; // [sp+18h] [bp-1Ch]
  int v10; // [sp+1Ch] [bp-18h]
  int i; // [sp+20h] [bp-14h]
  _BYTE *v12; // [sp+24h] [bp-10h]
  _BYTE *v13; // [sp+28h] [bp-Ch]
  signed int v14; // [sp+2Ch] [bp-8h]

  a1[16] = 0;
  a1[15] = -1;
  v14 = sub_72E5C((int)a1, a2);
  while ( v14 != 34 )
  {
    if ( v14 == -2 )
      return sub_72FF0((int)a1);
    if ( v14 == -1 )
    {
      sub_727DC(a2, a1, 6, "premature end of input");
      return sub_72FF0((int)a1);
    }
    if ( (unsigned int)v14 < 0x20 )
    {
      sub_72EE4(a1, v14);
      if ( v14 == 10 )
        sub_727DC(a2, a1, 8, "unexpected newline");
      else
        sub_727DC(a2, a1, 8, "control character 0x%x", v14);
      return sub_72FF0((int)a1);
    }
    if ( v14 == 92 )
    {
      v14 = sub_72E5C((int)a1, a2);
      if ( v14 != 117 )
      {
        if ( v14 != 34 && v14 != 92 && v14 != 47 && v14 != 98 && v14 != 102 && v14 != 110 && v14 != 114 && v14 != 116 )
        {
LABEL_18:
          sub_727DC(a2, a1, 8, "invalid escape");
          return sub_72FF0((int)a1);
        }
        goto LABEL_32;
      }
      v14 = sub_72E5C((int)a1, a2);
      for ( i = 0; i <= 3; ++i )
      {
        if ( (v14 <= 47 || v14 > 57) && (v14 <= 64 || v14 > 70) && (v14 <= 96 || v14 > 102) )
          goto LABEL_18;
        v14 = sub_72E5C((int)a1, a2);
      }
    }
    else
    {
LABEL_32:
      v14 = sub_72E5C((int)a1, a2);
    }
  }
  v12 = (_BYTE *)sub_74DA0(a1[11] + 1);
  if ( !v12 )
    return sub_72FF0((int)a1);
  a1[16] = v12;
  result = sub_7507C(a1 + 10);
  v13 = (_BYTE *)(result + 1);
  while ( *v13 != 34 )
  {
    if ( *v13 == 92 )
    {
      if ( *++v13 == 117 )
      {
        v10 = sub_73030(v13);
        if ( v10 < 0 )
          goto LABEL_39;
        v13 += 5;
        if ( v10 < 55296 || v10 >= 56320 )
        {
          if ( v10 >= 56320 && v10 < 57344 )
          {
LABEL_52:
            sub_727DC(a2, a1, 8, "invalid Unicode '\\u%04X'", v10);
            return sub_72FF0((int)a1);
          }
        }
        else
        {
          if ( *v13 != 92 || v13[1] != 117 )
            goto LABEL_52;
          v9 = sub_73030(++v13);
          if ( v9 < 0 )
          {
LABEL_39:
            sub_727DC(a2, a1, 8, "invalid Unicode escape '%.6s'", v13 - 1);
            return sub_72FF0((int)a1);
          }
          v13 += 5;
          if ( v9 < 56320 || v9 >= 57344 )
          {
            sub_727DC(a2, a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v10, v9);
            return sub_72FF0((int)a1);
          }
          v10 = ((v10 - 55296) << 10) + v9 - 56320 + 0x10000;
        }
        result = sub_756F8(v10, v12, &v8);
        if ( result )
          _assert_fail("0", "load.c", 0x1C4u, "lex_scan_string");
        v12 += v8;
      }
      else
      {
        v3 = (unsigned __int8)*v13;
        if ( v3 == 98 )
        {
          *v12 = 8;
        }
        else if ( (unsigned __int8)*v13 > 0x62u )
        {
          if ( v3 == 110 )
          {
            *v12 = 10;
          }
          else if ( (unsigned __int8)*v13 > 0x6Eu )
          {
            if ( v3 == 114 )
            {
              *v12 = 13;
            }
            else
            {
              if ( v3 != 116 )
                goto LABEL_75;
              *v12 = 9;
            }
          }
          else
          {
            if ( v3 != 102 )
              goto LABEL_75;
            *v12 = 12;
          }
        }
        else
        {
          if ( v3 != 47 && v3 != 92 && v3 != 34 )
LABEL_75:
            _assert_fail("0", "load.c", 0x1D0u, "lex_scan_string");
          *v12 = *v13;
        }
        ++v12;
        ++v13;
      }
    }
    else
    {
      v4 = v12++;
      v5 = v13++;
      *v4 = *v5;
    }
  }
  *v12 = 0;
  a1[17] = &v12[-a1[16]];
  a1[15] = 256;
  return result;
}
