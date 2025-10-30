int __fastcall sub_11818(unsigned int a1, int a2, int (__fastcall *a3)(const char *, int, int), int a4, __int16 a5)
{
  unsigned int v9; // r9
  unsigned int v10; // r4
  char *v11; // r0
  int v12; // r1
  int v13; // r5
  int v15; // r0
  bool v16; // zf
  unsigned int v17; // r3
  int v18; // [sp+0h] [bp-20h]
  int v19; // [sp+Ch] [bp-14h] BYREF
  char s[16]; // [sp+10h] [bp-10h] BYREF

  v19 = 0;
  if ( a3("\"", 1, a4) )
    return -1;
  v9 = a2 + a1;
  v10 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 >= v9 )
      {
        v13 = v10;
        break;
      }
      v15 = sub_13C8C(v10, v9 - v10, &v19);
      v13 = v15;
      if ( !v15 )
        return -1;
      v16 = v19 == 92;
      if ( v19 != 92 )
        v16 = v19 == 34;
      if ( v16 || v19 <= 31 || (a5 & 0x400) != 0 && v19 == 47 || (a5 & 0x40) != 0 && v19 > 127 )
        break;
      v10 = v15;
    }
    if ( v10 != a1 && a3((const char *)a1, v10 - a1, a4) )
      return -1;
    if ( v13 == v10 )
      return a3("\"", 1, a4);
    if ( v19 == 12 )
    {
      v12 = 2;
      v11 = "\\f";
      goto LABEL_8;
    }
    if ( v19 <= 12 )
    {
      switch ( v19 )
      {
        case 9:
          v12 = 2;
          v11 = "\\t";
          break;
        case 10:
          v12 = 2;
          v11 = "\\n";
          break;
        case 8:
          v12 = 2;
          v11 = "\\b";
          break;
        default:
          goto LABEL_6;
      }
LABEL_8:
      if ( a3(v11, v12, a4) )
        return -1;
      goto LABEL_9;
    }
    if ( v19 == 34 )
    {
      v11 = "\\\"";
      v12 = 2;
      goto LABEL_8;
    }
    if ( v19 > 34 )
    {
      if ( v19 == 47 )
      {
        v12 = 2;
        v11 = "\\/";
        goto LABEL_8;
      }
      if ( v19 == 92 )
      {
        v12 = 2;
        v11 = "\\\\";
        goto LABEL_8;
      }
LABEL_6:
      if ( v19 >= 0x10000 )
      {
        v17 = ((unsigned int)(v19 - 0x10000) >> 10) & 0x3FF | 0xD800;
        v18 = (v19 - 0x10000) & 0x3FF | 0xDC00;
        v19 -= 0x10000;
        snprintf(s, 0xDu, "\\u%04X\\u%04X", v17, v18);
        v11 = s;
        v12 = 12;
      }
      else
      {
        snprintf(s, 0xDu, "\\u%04X", v19);
        v11 = s;
        v12 = 6;
      }
      goto LABEL_8;
    }
    if ( v19 != 13 )
      goto LABEL_6;
    if ( a3("\\r", 2, a4) )
      return -1;
LABEL_9:
    v10 = v13;
    a1 = v13;
  }
}
