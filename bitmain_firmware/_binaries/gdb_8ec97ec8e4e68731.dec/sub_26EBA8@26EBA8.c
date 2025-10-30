unsigned int __fastcall sub_26EBA8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r5
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r4
  unsigned int v8; // r2
  bool v9; // cc
  unsigned __int8 *v10; // r0
  int v12; // r0
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4a; // [sp+4h] [bp+4h]
  int savedregs_4; // [sp+4h] [bp+4h]
  int savedregs_8; // [sp+8h] [bp+8h]

  v2 = sub_170040(a1[16]);
  if ( (**(char **)(a1[16] + 24) & 0xFFFFFFF7) == 7 )
  {
    v3 = savedregs_4;
    if ( *a1 == 1 )
    {
      savedregs_4a = savedregs;
      savedregs_8 = v3;
      if ( a1[15] )
      {
        return ((int (__fastcall *)(_DWORD))loc_26C09C)(a1[15]) + a1[8];
      }
      else if ( sub_1710BC(0, a1[16]) )
      {
        if ( *sub_1710BC(0, a1[16]) != 1 )
        {
          sub_94700(
            (int)"value.c",
            1537,
            "%s: Assertion `%s' failed.",
            "CORE_ADDR value_address(const value*)",
            "PROP_CONST == TYPE_DATA_LOCATION_KIND (value_type (value))");
          JUMPOUT(0x26C160);
        }
        return sub_1710BC(0, a1[16])[2];
      }
      else
      {
        return a1[8] + a1[2];
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = v2;
    v5 = sub_26EAAC((int)a1);
    v6 = *(_DWORD *)(v5 + 64);
    v7 = (_DWORD *)v5;
    v8 = **(char **)(v6 + 24);
    v9 = v8 > 1;
    if ( v8 != 1 )
      v9 = (unsigned __int8)(v8 - 18) > 1u;
    if ( v9 )
    {
      v12 = ((int (__fastcall *)(int))loc_168A44)(v4);
      v6 = v7[16];
      if ( v12 )
      {
        sub_26E978(v7);
        JUMPOUT(0x168A90);
      }
    }
    v10 = (unsigned __int8 *)sub_26E978(v7);
    return sub_26D134((_DWORD *)v6, v10);
  }
}
