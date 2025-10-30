int sub_FC0B0()
{
  char *v0; // r0

  dword_47AD10 = (int)"core";
  dword_47AD14 = (int)"Local core dump file";
  dword_47AD18 = (int)"Use a core file as a target.  Specify the filename of the core file.";
  dword_47AD20 = (int)sub_FB9B8;
  dword_47AD28 = (int)sub_FB900;
  dword_47AD34 = (int)sub_FB8C4;
  dword_47AD48 = (int)sub_FB6EC;
  dword_47AE90 = (int)sub_FAF04;
  dword_47AD54 = (int)sub_FAEE8;
  dword_47AD58 = (int)sub_FAD18;
  dword_47AD5C = (int)sub_FAD20;
  dword_47AE10 = (int)sub_FAD28;
  dword_47AEA4 = 1027724;
  dword_47AE18 = (int)sub_FADCC;
  dword_47AE20 = (int)sub_FAD8C;
  dword_47AE44 = 2;
  dword_47AE4C = 1027392;
  dword_47AE50 = (int)sub_FC05C;
  dword_47AE54 = (int)sub_FC044;
  dword_47AEFC = (int)sub_FAD58;
  dword_47AFEC = 3840;
  if ( !dword_47ACB0 )
  {
    dword_47ACB0 = (int)&unk_47AD0C;
    JUMPOUT(0x22ED74);
  }
  v0 = (char *)sub_94700(
                 (int)"corelow.c",
                 1031,
                 "init_core_ops: core target already exists (\"%s\").",
                 (const char *)*(_DWORD *)(dword_47ACB0 + 8));
  return sub_FC1FC(v0);
}
