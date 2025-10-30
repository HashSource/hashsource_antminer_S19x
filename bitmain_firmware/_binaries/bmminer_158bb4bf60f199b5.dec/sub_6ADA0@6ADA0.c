int __fastcall sub_6ADA0(int a1, int (__fastcall *a2)(char *, int), int a3, unsigned int a4)
{
  _BYTE *i; // r11
  int v9; // r5
  bool v10; // zf
  int v11; // r1
  char *v12; // r0
  int v13; // r1
  int v14; // r3
  unsigned int v15; // r2
  int v17; // [sp+Ch] [bp-18h] BYREF
  char s[20]; // [sp+10h] [bp-14h] BYREF

  if ( a2("\"", 1) )
    return -1;
  for ( i = (_BYTE *)a1; *i; i = (_BYTE *)v9 )
  {
    v9 = sub_6DB8C(i, &v17);
    if ( !v9 )
      return -1;
    v10 = v17 == 34;
    if ( v17 != 34 )
      v10 = v17 == 92;
    v11 = v10;
    if ( v17 <= 31 )
      v11 |= 1u;
    if ( !v11 && ((v17 == 47) & (a4 >> 10)) == 0 && ((v17 > 127) & (a4 >> 6)) == 0 )
      continue;
    if ( i != (_BYTE *)a1 && ((int (__fastcall *)(int, _BYTE *, int))a2)(a1, &i[-a1], a3) )
      return -1;
    if ( i == (_BYTE *)v9 )
      return ((int (__fastcall *)(char *, int, int))a2)("\"", 1, a3);
    if ( v17 == 12 )
    {
      v13 = 2;
      v12 = "\\f";
      goto LABEL_26;
    }
    if ( v17 <= 12 )
    {
      switch ( v17 )
      {
        case 9:
          v12 = "\\t";
          v13 = 2;
          goto LABEL_26;
        case 10:
          v12 = "\\n";
          v13 = 2;
          goto LABEL_26;
        case 8:
          v12 = "\\b";
          v13 = 2;
          goto LABEL_26;
      }
LABEL_32:
      if ( v17 >= 0x10000 )
      {
        v14 = (v17 - 0x10000) & 0x3FF | 0xDC00;
        v15 = ((unsigned int)(v17 - 0x10000) >> 10) & 0x3FF | 0xD800;
        v17 -= 0x10000;
        sprintf(s, "\\u%04x\\u%04x", v15, v14);
        v12 = s;
        v13 = 12;
        goto LABEL_26;
      }
LABEL_33:
      sprintf(s, "\\u%04x", v17);
      v12 = s;
      v13 = 6;
      goto LABEL_26;
    }
    if ( v17 == 34 )
    {
      v12 = "\\\"";
      v13 = 2;
      goto LABEL_26;
    }
    if ( v17 <= 34 )
    {
      if ( v17 == 13 )
      {
        v12 = "\\r";
        v13 = 2;
        goto LABEL_26;
      }
      goto LABEL_33;
    }
    if ( v17 == 47 )
    {
      v12 = "\\/";
      v13 = 2;
      goto LABEL_26;
    }
    if ( v17 != 92 )
      goto LABEL_32;
    v12 = "\\\\";
    v13 = 2;
LABEL_26:
    if ( ((int (__fastcall *)(char *, int, int))a2)(v12, v13, a3) )
      return -1;
    a1 = v9;
  }
  if ( i == (_BYTE *)a1 || !((int (__fastcall *)(int, _BYTE *, int))a2)(a1, &i[-a1], a3) )
    return ((int (__fastcall *)(char *, int, int))a2)("\"", 1, a3);
  return -1;
}
