int sub_3EA00()
{
  int result; // r0

  result = dword_471BF8;
  if ( !*(_BYTE *)dword_471BF8 )
  {
    free((void *)dword_471BF8);
    result = sub_327254("$sdir:$pdir");
    dword_471BF8 = result;
  }
  return result;
}
