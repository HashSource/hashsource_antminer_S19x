int __fastcall sub_4445C(int a1, int a2, int (__fastcall *a3)(char *, int, int), int a4, unsigned int a5)
{
  unsigned int v9; // r8
  unsigned int i; // r10
  int v12; // r5
  bool v13; // zf
  int v14; // r1
  char *v15; // r0
  int v16; // r1
  unsigned int v17; // r3
  int v18; // [sp+0h] [bp-2Ch]
  int v19; // [sp+14h] [bp-18h] BYREF
  char s[20]; // [sp+18h] [bp-14h] BYREF

  v19 = 0;
  if ( a3("\"", 1, a4) )
    return -1;
  v9 = a1 + a2;
  for ( i = a1; i < v9; i = v12 )
  {
    v12 = sub_47E38(i, v9 - i, &v19);
    if ( !v12 )
      return -1;
    v13 = v19 == 34;
    if ( v19 != 34 )
      v13 = v19 == 92;
    v14 = v13;
    if ( v19 <= 31 )
      v14 |= 1u;
    if ( !v14 && ((v19 == 47) & (a5 >> 10)) == 0 && ((v19 > 127) & (a5 >> 6)) == 0 )
      continue;
    if ( a1 != i && a3((char *)a1, i - a1, a4) )
      return -1;
    if ( i == v12 )
      return a3("\"", 1, a4);
    if ( v19 == 12 )
    {
      v16 = 2;
      v15 = "\\f";
      goto LABEL_26;
    }
    if ( v19 <= 12 )
    {
      switch ( v19 )
      {
        case 9:
          v15 = "\\t";
          v16 = 2;
          goto LABEL_26;
        case 10:
          v15 = "\\n";
          v16 = 2;
          goto LABEL_26;
        case 8:
          v15 = "\\b";
          v16 = 2;
          goto LABEL_26;
      }
LABEL_32:
      if ( v19 >= 0x10000 )
      {
        v17 = ((unsigned int)(v19 - 0x10000) >> 10) & 0x3FF | 0xD800;
        v18 = (v19 - 0x10000) & 0x3FF | 0xDC00;
        v19 -= 0x10000;
        snprintf(s, 0xDu, "\\u%04X\\u%04X", v17, v18);
        v15 = s;
        v16 = 12;
        goto LABEL_26;
      }
LABEL_33:
      snprintf(s, 0xDu, "\\u%04X");
      v15 = s;
      v16 = 6;
      goto LABEL_26;
    }
    if ( v19 == 34 )
    {
      v15 = "\\\"";
      v16 = 2;
      goto LABEL_26;
    }
    if ( v19 <= 34 )
    {
      if ( v19 == 13 )
      {
        v15 = "\\r";
        v16 = 2;
        goto LABEL_26;
      }
      goto LABEL_33;
    }
    if ( v19 == 47 )
    {
      v15 = "\\/";
      v16 = 2;
      goto LABEL_26;
    }
    if ( v19 != 92 )
      goto LABEL_32;
    v15 = "\\\\";
    v16 = 2;
LABEL_26:
    if ( a3(v15, v16, a4) )
      return -1;
    a1 = v12;
  }
  if ( a1 == i || !a3((char *)a1, i - a1, a4) )
    return a3("\"", 1, a4);
  return -1;
}
