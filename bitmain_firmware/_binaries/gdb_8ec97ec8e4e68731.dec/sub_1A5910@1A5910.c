int __fastcall sub_1A5910(char *a1)
{
  int v1; // r4
  char *v2; // r3
  __int64 v3; // r0
  int v4; // lr
  const char *v5; // r7
  int v6; // r3
  int v7; // r6
  int v8; // r9
  _DWORD *v9; // r8
  const char ***v10; // r5
  size_t v11; // r6
  const char ***v12; // r10
  const char ***i; // r4
  int v14; // r0
  int v15; // r6
  int v16; // r5
  int v17; // r7
  const char *v18; // r4
  int v19; // r3
  char *v20; // r0
  int v21; // r3
  const char *v22; // r6
  int v23; // r1
  int v24; // r3
  int v25; // r5
  const char **v26; // r3
  const char *v27; // r7
  int v28; // r0
  const char *v29; // r2
  _DWORD *v30; // r3
  char *v31; // r1
  const char *v33; // r4
  char *v34; // r2
  _DWORD v35[9]; // [sp+8h] [bp-28h] BYREF
  int v36; // [sp+2Ch] [bp-4h]

  v2 = "";
  if ( a1 )
    v2 = a1;
  v3 = sub_94700((int)"maint.c", 99, "%s", v2);
  v35[2] = v1;
  v36 = v4;
  v5 = (const char *)v3;
  if ( !(_DWORD)v3 || (v6 = *(unsigned __int8 *)v3, !*(_BYTE *)v3) )
LABEL_46:
    sub_946E0("requires argument (address or section + address)", HIDWORD(v3));
  if ( (unsigned int)(v6 - 48) <= 9 )
  {
    v15 = sub_14CB9C(v3);
    goto LABEL_39;
  }
  v7 = v3;
  while ( !isspace(v6) )
  {
    v6 = *(unsigned __int8 *)++v7;
    if ( !v6 )
      sub_946E0("Need to specify <section-name> and <address>");
  }
  v8 = sub_9360C(v7 + 1);
  v9 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v9 )
LABEL_32:
    sub_946E0("Unknown section %s.", v5);
  v10 = (const char ***)v9[43];
  v11 = v7 - (_DWORD)v5;
  v12 = (const char ***)v9[42];
  do
  {
    while ( 1 )
    {
      for ( i = v12; i < v10; i += 3 )
      {
        if ( *i && !strncmp(**i, v5, v11) )
          break;
      }
      if ( i != v10 )
        break;
      v9 = (_DWORD *)*v9;
      if ( !v9 )
        goto LABEL_32;
      v10 = (const char ***)v9[43];
      v12 = (const char ***)v9[42];
    }
    v10 = (const char ***)v9[43];
  }
  while ( v10 == i );
  v14 = sub_14CB9C(v8);
  v15 = v14;
  if ( !i )
  {
LABEL_39:
    sub_1B240C(v35, v15);
    v16 = v35[0];
    if ( !v35[0] )
    {
      v31 = sub_98B08(v15, 0);
      return sub_259F10("no symbol at %s\n", v31);
    }
    goto LABEL_19;
  }
  sub_1B23BC(v35, v14, i);
  v16 = v35[0];
  if ( !v35[0] )
  {
    v33 = **i;
    v34 = sub_98B08(v15, 0);
    return sub_259F10("no symbol at %s:%s\n", v33, v34);
  }
LABEL_19:
  v17 = v35[1];
  if ( dword_46D448 )
    v18 = (const char *)sub_21B3C4(v16);
  else
    v18 = *(const char **)v16;
  v19 = *(__int16 *)(v16 + 22);
  if ( v19 == -1 )
    goto LABEL_44;
  v20 = sub_98880(v15 - *(_DWORD *)(v16 + 8) - *(_DWORD *)(*(_DWORD *)(v17 + 144) + 4 * v19), 0);
  v21 = *(__int16 *)(v16 + 22);
  v22 = v20;
  if ( v21 < 0 )
    return sub_259F10("%s + %s\n", v18, v20);
  v23 = *(_DWORD *)(v17 + 168);
  v24 = 12 * v21;
  v25 = v23 + v24;
  if ( !(v23 + v24) )
    return sub_259F10("%s + %s\n", v18, v20);
  v26 = *(const char ***)(v23 + v24);
  if ( !v26 )
    goto LABEL_45;
  v27 = *v26;
  if ( !*v26 )
    goto LABEL_45;
  v28 = *(_DWORD *)(v25 + 4);
  if ( !v28 || !sub_1B87A8(v28) )
  {
    sub_94700(
      (int)"maint.c",
      484,
      "%s: Assertion `%s' failed.",
      "void maintenance_translate_address(const char*, int)",
      "sect->objfile && objfile_name (sect->objfile)");
LABEL_44:
    sub_94700((int)"maint.c", 473, "Section index is uninitialized");
LABEL_45:
    v3 = sub_94700(
           (int)"maint.c",
           481,
           "%s: Assertion `%s' failed.",
           "void maintenance_translate_address(const char*, int)",
           "sect->the_bfd_section && sect->the_bfd_section->name");
    goto LABEL_46;
  }
  v29 = (const char *)sub_1B87A8(*(_DWORD *)(v25 + 4));
  v30 = *(_DWORD **)(dword_487D2C + 36);
  if ( v30 )
  {
    if ( *v30 )
    {
      sub_259F10("%s + %s in section %s of %s\n", v18, v22, v27, v29);
      __asm { POP             {R4-R10,PC} }
    }
  }
  return sub_259F10("%s + %s in section %s\n", v18, v22, v27);
}
