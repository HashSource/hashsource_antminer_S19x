int __fastcall sub_1F934C(int a1, int a2, int a3, int a4)
{
  char *v5; // r2
  int v8; // r1
  int v10; // r12
  bool v11; // zf
  char *v12; // r0
  bool v14; // zf
  const char *v15; // r0
  int v16; // r1
  const char *v17; // r1
  int v18; // r2
  int v19; // r0

  v5 = *(char **)(a2 + 24);
  v8 = *(_DWORD *)(a2 + 20);
  v10 = *v5;
  v11 = v10 == 20;
  if ( v10 == 20 )
    v11 = v8 == 4;
  if ( !v11 || (v5[1] & 1) == 0 )
  {
    sub_170040(a2);
    v12 = sub_EEBE8();
    return sub_268F90(a1, a2, a3, a4, v12);
  }
  v14 = a1 == a4;
  if ( a1 != a4 )
    v14 = a1 == 92;
  if ( v14 )
  {
    v17 = "\\%c";
    v18 = a1;
    v19 = a3;
    return sub_25A418(v19, v17, v18);
  }
  switch ( a1 )
  {
    case 10:
      v15 = "\\n";
      v16 = a3;
      return sub_25A6BC(v15, v16);
    case 13:
      v15 = "\\r";
      v16 = a3;
      return sub_25A6BC(v15, v16);
    case 9:
      v15 = "\\t";
      v16 = a3;
      return sub_25A6BC(v15, v16);
    case 0:
      v15 = "\\0";
      v16 = a3;
      return sub_25A6BC(v15, v16);
  }
  if ( (unsigned int)(a1 - 32) > 0x5F )
  {
    if ( a1 > 255 )
    {
      v17 = "\\u{%06x}";
      v18 = a1;
      v19 = a3;
      return sub_25A418(v19, v17, v18);
    }
    goto LABEL_18;
  }
  if ( !isprint(a1) )
  {
LABEL_18:
    v17 = "\\x%02x";
    v18 = a1;
    v19 = a3;
    return sub_25A418(v19, v17, v18);
  }
  return sub_25A4FC(a1, a3);
}
