int __fastcall sub_117F3C(__int64 a1, int a2)
{
  const char **v2; // r6
  const char *v3; // r4
  int v4; // r7
  int v5; // r3
  int *v6; // r6
  int v7; // r5
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r4
  char *v12; // r5
  int v13; // r2
  const char **v14; // r5
  const char *v15; // r3
  const char *v16; // r3
  const char *v17; // r0
  _DWORD varC[10]; // [sp+10h] [bp-Ch] BYREF

  v3 = (const char *)HIDWORD(a1);
  v4 = a1;
  v5 = *(_BYTE *)(HIDWORD(a1) + 16) & 7;
  if ( v5 != 3 )
  {
    if ( v5 != 4 )
    {
      if ( v5 == 2 )
        return *(_DWORD *)(HIDWORD(a1) + 8);
      a1 = sub_94700((int)"dwarf2loc.c", 822, "invalid call site target kind");
    }
    v6 = *(int **)(HIDWORD(a1) + 8);
    if ( v6 )
    {
      v7 = a2;
      if ( a2 )
      {
        v8 = sub_15ECB4(a2);
        v9 = sub_1780B4(v8);
        v10 = (_DWORD *)sub_117684(*(_DWORD *)(v9 + 156), v7, *v6, v6[1], v6[2], 0, 0);
        if ( *(_DWORD *)nullsub_31(v10) != 1 )
          return sub_26EBA8(v10);
        if ( *v10 != 1 )
          return 0;
        varC[7] = varC[3];
        varC[8] = varC[4];
        if ( v10[15] )
          return ((int (__fastcall *)(_DWORD))loc_26C09C)(v10[15]) + v10[8];
        if ( !sub_1710BC(0, v10[16]) )
          return v10[8] + v10[2];
        if ( *(_DWORD *)sub_1710BC(0, v10[16]) != 1 )
        {
          sub_94700(
            (int)"value.c",
            1537,
            "%s: Assertion `%s' failed.",
            "CORE_ADDR value_address(const value*)",
            "PROP_CONST == TYPE_DATA_LOCATION_KIND (value_type (value))");
          JUMPOUT(0x26C160);
        }
        return *(_DWORD *)(sub_1710BC(0, v10[16]) + 8);
      }
    }
    else
    {
      sub_1B240C(varC, *(_DWORD *)HIDWORD(a1) - 1);
      v14 = (const char **)varC[0];
      v3 = (const char *)sub_25AC8C(v4, *(_DWORD *)v3);
      if ( v14 )
      {
        if ( dword_46D448 )
          v15 = (const char *)sub_21B3C4(v14);
        else
          v15 = *v14;
      }
      else
      {
        v15 = "???";
      }
      sub_92F64(11, "DW_AT_call_target is not specified at %s in %s", v3, v15);
    }
    sub_1B240C(varC, *(_DWORD *)HIDWORD(a1) - 1);
    v12 = (char *)varC[0];
    v3 = (const char *)sub_25AC8C(v4, *(_DWORD *)v3);
    if ( v12 )
    {
      if ( dword_46D448 )
        v16 = (const char *)sub_21B3C4(v12);
      else
        v16 = *(const char **)v12;
    }
    else
    {
      v16 = "???";
    }
    sub_92F64(
      11,
      "DW_AT_call_target DWARF block resolving requires known frame which is currently not available at %s in %s",
      v3,
      v16);
LABEL_24:
    sub_1B240C(varC, *(_DWORD *)v3 - 1);
    v2 = (const char **)varC[0];
    v3 = (const char *)sub_25AC8C(v4, *(_DWORD *)v3);
    if ( v2 )
    {
      if ( dword_46D448 )
        goto LABEL_30;
      v17 = *v2;
    }
    else
    {
      v17 = "???";
    }
    while ( 1 )
    {
      sub_92F64(11, "Cannot find function \"%s\" for a call site target at %s in %s", v12, v3, v17);
LABEL_29:
      sub_94700((int)"dwarf2loc.c", 815, "Section index is uninitialized");
LABEL_30:
      v17 = (const char *)sub_21B3C4(v2);
    }
  }
  v12 = *(char **)(HIDWORD(a1) + 8);
  sub_1B141C((int)varC, v12);
  if ( !varC[0] )
    goto LABEL_24;
  v13 = *(__int16 *)(varC[0] + 22);
  if ( v13 == -1 )
    goto LABEL_29;
  return *(_DWORD *)(varC[0] + 8) + *(_DWORD *)(*(_DWORD *)(varC[1] + 144) + 4 * v13);
}
