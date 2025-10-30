int __fastcall sub_11074(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  unsigned __int8 v6; // r4

  while ( 1 )
  {
    v5 = IO_getc((_IO_FILE *)stdin);
    v6 = v5;
    if ( v5 == -1 )
      break;
    if ( !dword_230A8 )
      fputc(46, (FILE *)stderr);
    fflush((FILE *)stdout);
    v4 = (unsigned __int16)a2++;
    if ( sub_11444(a1, v4, v6) )
      sub_10E48("write error", 160);
  }
  if ( !dword_230A8 )
    fwrite("\n\n", 1u, 2u, (FILE *)stderr);
  return 0;
}
