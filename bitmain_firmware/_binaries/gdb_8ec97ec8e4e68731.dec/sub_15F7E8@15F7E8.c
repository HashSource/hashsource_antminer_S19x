int __fastcall sub_15F7E8(_BOOL4 a1)
{
  int v1; // r3
  const char *v3; // r5
  int v4; // r0

  v1 = dword_487754;
  if ( !dword_487754 )
  {
    v3 = (const char *)a1;
    if ( !a1 || (a1 = sub_15D504(a1)) )
    {
      v4 = sub_15F70C(a1);
      dword_487754 = v4;
      if ( v4 )
      {
        sub_15E08C(v4);
        v1 = dword_487754;
        if ( dword_487754 )
          return v1;
      }
      sub_94700(
        (int)"frame.c",
        1650,
        "%s: Assertion `%s' failed.",
        "frame_info* get_selected_frame(const char*)",
        "selected_frame != NULL");
    }
    sub_946E0("%s", v3);
  }
  return v1;
}
