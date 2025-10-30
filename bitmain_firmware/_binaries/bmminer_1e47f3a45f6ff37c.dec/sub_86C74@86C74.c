int __fastcall sub_86C74(int a1, int a2)
{
  _DWORD v6[3]; // [sp+14h] [bp-10h] BYREF

  if ( *(_DWORD *)(a1 + 8324) )
  {
    if ( sub_82DAC(*(_DWORD *)(a1 + 6264), a2) )
    {
      sub_8CD10(2, "src/rule.c", 391, "zlog_format_gen_msg fail");
      return -1;
    }
    else
    {
      **(_BYTE **)(*(_DWORD *)(a2 + 28) + 4) = 0;
      v6[0] = **(_DWORD **)(a2 + 28);
      v6[1] = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28);
      v6[2] = a1 + 7297;
      if ( (*(int (__fastcall **)(_DWORD *))(a1 + 8324))(v6) )
      {
        sub_8CD10(2, "src/rule.c", 401, "a_rule->record fail");
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
      386,
      "user defined record funcion for [%s] not set, no output",
      (const char *)(a1 + 6272));
    return -1;
  }
}
