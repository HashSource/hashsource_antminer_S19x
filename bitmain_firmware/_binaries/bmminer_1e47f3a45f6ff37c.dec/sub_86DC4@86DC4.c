int __fastcall sub_86DC4(int a1, int a2)
{
  _DWORD v6[3]; // [sp+14h] [bp-18h] BYREF
  int v7; // [sp+20h] [bp-Ch]
  int v8; // [sp+24h] [bp-8h]

  if ( *(_DWORD *)(a1 + 8324) )
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 16) + 4) = **(_DWORD **)(a2 + 16);
    v8 = 0;
    v7 = ***(_DWORD ***)(a1 + 5172);
    while ( *(_DWORD *)(*(_DWORD *)(a1 + 5172) + 4) > v8 )
    {
      v7 = *(_DWORD *)(**(_DWORD **)(a1 + 5172) + 4 * v8);
      if ( (*(int (__fastcall **)(int, int))(v7 + 9260))(v7, a2) )
      {
        sub_8CD10(2, "src/rule.c", 417, "zlog_spec_gen_path fail");
        return -1;
      }
      ++v8;
    }
    **(_BYTE **)(*(_DWORD *)(a2 + 16) + 4) = 0;
    if ( sub_82DAC(*(_DWORD *)(a1 + 6264), a2) )
    {
      sub_8CD10(2, "src/rule.c", 420, "zlog_format_gen_msg fail");
      return -1;
    }
    else
    {
      **(_BYTE **)(*(_DWORD *)(a2 + 28) + 4) = 0;
      v6[0] = **(_DWORD **)(a2 + 28);
      v6[1] = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28);
      v6[2] = **(_DWORD **)(a2 + 16);
      if ( (*(int (__fastcall **)(_DWORD *))(a1 + 8324))(v6) )
      {
        sub_8CD10(2, "src/rule.c", 430, "a_rule->record fail");
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    sub_8CD10(
      2,
      "src/rule.c",
      413,
      "user defined record funcion for [%s] not set, no output",
      (const char *)(a1 + 6272));
    return -1;
  }
}
