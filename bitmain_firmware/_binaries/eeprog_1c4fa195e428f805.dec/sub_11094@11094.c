int __fastcall sub_11094(int a1, unsigned __int16 a2)
{
  int v5; // r0
  unsigned __int8 v6; // r4

  while ( 1 )
  {
    v5 = IO_getc((_IO_FILE *)stdin);
    v6 = v5;
    if ( v5 == -1 )
      break;
    if ( !dword_22240 )
      fputc(46, (FILE *)stderr);
    fflush((FILE *)stdout);
    if ( sub_11460(a1, a2++, v6) )
      sub_10E80("write error", 160);
  }
  if ( !dword_22240 )
    fwrite("\n\n", 1u, 2u, (FILE *)stderr);
  return 0;
}
