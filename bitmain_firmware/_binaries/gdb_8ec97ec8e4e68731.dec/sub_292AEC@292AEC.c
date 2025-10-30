int __fastcall sub_292AEC(int a1, int a2)
{
  int v2; // r3
  __int64 v3; // r6
  size_t v5; // r0
  char *v6; // r0

  v2 = dword_48AAA0;
  LODWORD(v3) = dword_48AAA0 & 0x1000;
  if ( (dword_48AAA0 & 0x1000) != 0 )
    sub_29121C(a1, a2);
  if ( dword_48AB0C )
  {
    if ( dword_48B700 )
    {
      v5 = strlen((const char *)dword_48B700);
      v6 = (char *)sub_93028(v5 + 1);
      HIDWORD(v3) = strcpy(v6, (const char *)dword_48B700);
      sub_2928D4();
      *(_QWORD *)&dword_48B6F0 = v3;
      v2 = dword_48AAA0 | 0x800;
    }
  }
  else
  {
    dword_48B6F8 = dword_48AAA0 & 0x1000;
  }
  dword_48AAA0 = v2 | 0x1000;
  return 0;
}
