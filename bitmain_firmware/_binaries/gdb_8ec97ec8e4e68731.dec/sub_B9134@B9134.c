int sub_B9134()
{
  int result; // r0

  result = dword_47822C;
  if ( !*(_BYTE *)dword_47822C )
  {
    free((void *)dword_47822C);
    result = sub_327254("$debugdir:$datadir/auto-load");
    dword_47822C = result;
  }
  return result;
}
