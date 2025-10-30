void __fastcall sub_264340(_DWORD *a1, char *s, int a3, int a4, int a5)
{
  int v6; // r7
  int v10; // r3
  int v11; // r0
  signed int v12; // r5
  int v13; // r10
  __int16 *v14; // r3
  int v15; // r9
  int v16; // r4
  int v17; // r11
  _BOOL4 v18; // r3
  size_t v19; // r0
  const char *v20; // r0
  int v21; // r1

  v6 = a1[6];
  v10 = a5;
  switch ( *(_BYTE *)v6 )
  {
    case 3:
    case 4:
      sub_263B48((int)a1, 0, a1, s, a3, a4, a5);
      return;
    case 5:
      v12 = strlen(s);
      if ( (*(_DWORD *)v6 & 0x2000FF) != 0x200005 )
      {
        sub_94700(
          (int)"valops.c",
          3192,
          "%s: Assertion `%s' failed.",
          "value* enum_constant_from_type(type*, const char*)",
          "TYPE_CODE (type) == TYPE_CODE_ENUM && TYPE_DECLARED_CLASS (type)");
LABEL_22:
        sub_94700((int)"valops.c", 3243, "non-aggregate type in value_aggregate_elt", v10);
LABEL_23:
        sub_946E0("No symbol \"%s\" in namespace \"%s\".", s, *(const char **)(a1[6] + 12));
      }
      v13 = *(__int16 *)(v6 + 4);
      if ( (*(_WORD *)(v6 + 2) & 0x380) == 0x80 )
        v14 = *(__int16 **)(v6 + 28);
      else
        v14 = &word_3B4A2C;
      v15 = *v14;
      if ( v13 <= v15 )
        goto LABEL_20;
      v16 = *(_DWORD *)(v6 + 24) + 24 * v15;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 16);
        v18 = v17 == 0;
        if ( (*(_BYTE *)(v16 + 8) & 0xE) != 2 )
          v18 = 1;
        if ( !v18 )
        {
          v19 = strlen(*(const char **)(v16 + 16));
          if ( v12 <= (int)(v19 + 2) )
          {
            v20 = (const char *)(v17 + v19 - v12);
            if ( *(v20 - 2) == 58 && *(v20 - 1) == 58 && !strcmp(v20, s) )
              break;
          }
        }
        ++v15;
        v16 += 24;
        if ( v13 == v15 )
LABEL_20:
          sub_946E0("no constant named \"%s\" in enum \"%s\"", s, *(const char **)(v6 + 12));
      }
      sub_26DAF4(a1, v21, *(_DWORD *)v16, *(_DWORD *)(v16 + 4));
      return;
    case 0x18:
      sub_261834(v6, s, a4, a5);
      if ( v11 )
        return;
      goto LABEL_23;
    default:
      goto LABEL_22;
  }
}
