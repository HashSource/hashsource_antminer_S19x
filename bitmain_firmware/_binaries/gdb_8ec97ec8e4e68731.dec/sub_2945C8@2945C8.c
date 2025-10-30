int sub_2945C8()
{
  if ( !dword_48AAB8 )
    return -1;
  if ( dword_46DEF4 == 1 )
  {
LABEL_5:
    fputc(7, (FILE *)stderr);
    fflush((FILE *)stderr);
    return 0;
  }
  if ( dword_46DEF4 != 2 )
    return 0;
  if ( !dword_48BAD0 )
    goto LABEL_5;
  tputs((const char *)dword_48BAD0, 1, sub_293B80);
  return 0;
}
