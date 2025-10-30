int __fastcall sub_5F7F8(
        unsigned int a1,
        int a2,
        int (__fastcall *a3)(unsigned int, unsigned int, int),
        int a4,
        __int16 a5)
{
  char s[16]; // [sp+18h] [bp-34h] BYREF
  int v12; // [sp+28h] [bp-24h] BYREF
  int v13; // [sp+2Ch] [bp-20h]
  int v14; // [sp+30h] [bp-1Ch]
  unsigned int v15; // [sp+34h] [bp-18h]
  int v16; // [sp+38h] [bp-14h]
  char *v17; // [sp+3Ch] [bp-10h]
  unsigned int v18; // [sp+40h] [bp-Ch]
  unsigned int v19; // [sp+44h] [bp-8h]

  v12 = 0;
  if ( !a3((unsigned int)"\"", 1u, a4) )
  {
    v19 = a1;
    v18 = a1;
    v15 = a1 + a2;
    while ( 1 )
    {
      while ( v18 < v15 )
      {
        v18 = sub_65B94(v19, v15 - v19, &v12);
        if ( !v18 )
          return -1;
        if ( v12 == 92 || v12 == 34 || v12 <= 31 || (a5 & 0x400) != 0 && v12 == 47 || (a5 & 0x40) != 0 && v12 > 127 )
          break;
        v19 = v18;
      }
      if ( v19 != a1 && a3(a1, v19 - a1, a4) )
        return -1;
      if ( v18 == v19 )
        return a3((unsigned int)"\"", 1u, a4);
      v16 = 2;
      if ( v12 == 12 )
      {
        v17 = "\\f";
        goto LABEL_44;
      }
      if ( v12 > 12 )
      {
        if ( v12 == 34 )
        {
          v17 = "\\\"";
          goto LABEL_44;
        }
        if ( v12 > 34 )
        {
          if ( v12 == 47 )
          {
            v17 = "\\/";
            goto LABEL_44;
          }
          if ( v12 == 92 )
          {
            v17 = "\\\\";
            goto LABEL_44;
          }
        }
        else if ( v12 == 13 )
        {
          v17 = "\\r";
          goto LABEL_44;
        }
      }
      else
      {
        switch ( v12 )
        {
          case 9:
            v17 = "\\t";
            goto LABEL_44;
          case 10:
            v17 = "\\n";
            goto LABEL_44;
          case 8:
            v17 = "\\b";
            goto LABEL_44;
        }
      }
      if ( v12 >= 0x10000 )
      {
        v12 -= 0x10000;
        v14 = ((v12 & 0xFFC00) >> 10) | 0xD800;
        v13 = v12 & 0x3FF | 0xDC00;
        snprintf(s, 0xDu, "\\u%04X\\u%04X", v14, v13);
        v16 = 12;
      }
      else
      {
        snprintf(s, 0xDu, "\\u%04X", v12);
        v16 = 6;
      }
      v17 = s;
LABEL_44:
      if ( a3((unsigned int)v17, v16, a4) )
        return -1;
      v19 = v18;
      a1 = v18;
    }
  }
  return -1;
}
