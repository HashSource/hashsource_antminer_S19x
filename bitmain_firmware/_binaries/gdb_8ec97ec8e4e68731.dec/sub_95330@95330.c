int __fastcall sub_95330(int a1, int a2)
{
  _BYTE **v4; // r3
  _BYTE *v5; // r0
  _BYTE *v6; // t1
  char *v7; // r4
  _BYTE **v9; // [sp+4h] [bp-8h] BYREF

  if ( a2
    && sub_22EBBC(a1)
    && !sub_25A3E4("A program is being debugged already.\nAre you sure you want to change the file? ") )
  {
    sub_946E0("File not changed.");
  }
  if ( !a1 )
    return sub_94D50(0, a2);
  v9 = 0;
  sub_25B0DC(&v9, a1);
  v4 = v9;
  v5 = *v9;
  if ( !*v9 )
LABEL_10:
    sub_946E0("No executable file name was specified");
  while ( *v5 == 45 )
  {
    v6 = v4[1];
    ++v4;
    v5 = v6;
    if ( !v6 )
      goto LABEL_10;
  }
  v7 = (char *)sub_29B910(v5);
  sub_94D50(v7, a2);
  if ( v7 )
    free(v7);
  return sub_31DAD0(v9);
}
