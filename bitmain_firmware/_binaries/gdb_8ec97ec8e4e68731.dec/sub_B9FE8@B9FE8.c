void sub_B9FE8()
{
  if ( !*(_BYTE *)dword_478248 )
  {
    free((void *)dword_478248);
    dword_478248 = sub_327254("$debugdir:$datadir/auto-load");
  }
  JUMPOUT(0xB9CF8);
}
