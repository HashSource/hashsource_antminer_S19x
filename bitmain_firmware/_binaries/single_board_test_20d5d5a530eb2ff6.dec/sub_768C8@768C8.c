int __fastcall sub_768C8(_BYTE *a1)
{
  int v2; // r4
  unsigned int v4; // [sp+4h] [bp-4h] BYREF

  v2 = 601;
  v4 = 0;
  do
  {
    sub_6E060(12, &v4);
    if ( v4 >> 30 == 2 )
    {
      *a1 = v4;
      return 1;
    }
    usleep(0x1388u);
    --v2;
  }
  while ( v2 );
  return 0;
}
