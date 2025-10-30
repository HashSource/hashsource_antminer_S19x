int __fastcall sub_B9B98(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v6; // r0

  v1 = *(_DWORD *)sub_242FDC(a1);
  sub_2578AC(v1, 0);
  v2 = dword_478240;
  if ( dword_478240 || (sub_B9B3C(), (v2 = dword_478240) != 0) )
  {
    while ( 1 )
    {
      sub_2578AC(v1, 0);
      if ( *(_DWORD *)(v2 + 52) )
        break;
      if ( (*(_WORD *)(v2 + 12) & 0x180) != 0 )
      {
        sub_94700(
          (int)"auto-load.c",
          1534,
          "%s: Assertion `%s' failed.",
          "void info_auto_load_cmd(const char*, int)",
          "list->type == not_set_cmd");
LABEL_9:
        v6 = sub_25734C(v1, 0);
        sub_338FFC(v6);
      }
      sub_2575E8(v1, "name", *(_DWORD *)(v2 + 4));
      sub_257380(v1, ":  ", v3, v4);
      sub_54C5C(v2);
      sub_25734C(v1, 0);
      v2 = *(_DWORD *)v2;
      if ( !v2 )
        return sub_25734C(v1, 0);
    }
    sub_94700(
      (int)"auto-load.c",
      1533,
      "%s: Assertion `%s' failed.",
      "void info_auto_load_cmd(const char*, int)",
      "!list->prefixlist");
    sub_25734C(v1, 0);
    goto LABEL_9;
  }
  return sub_25734C(v1, 0);
}
