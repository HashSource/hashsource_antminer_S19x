int __fastcall sub_86B90(int a1, int a2)
{
  int v6; // [sp+Ch] [bp-8h]

  if ( sub_82DAC(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_8CD10(2, "src/rule.c", 364, "zlog_format_gen_msg fail");
    return -1;
  }
  else
  {
    v6 = sub_83280(*(_DWORD **)(dword_9CD9C0 + 9280), *(_DWORD *)(*(_DWORD *)(a2 + 8) + 292));
    **(_BYTE **)(*(_DWORD *)(a2 + 28) + 4) = 0;
    syslog(*(_DWORD *)(a1 + 6260) | *(_DWORD *)(v6 + 2060), "%s", **(const char ***)(a2 + 28));
    return 0;
  }
}
