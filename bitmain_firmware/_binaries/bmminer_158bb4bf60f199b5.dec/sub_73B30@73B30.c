unsigned int __fastcall sub_73B30(_BYTE *a1)
{
  int v2; // r4
  unsigned int result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  v2 = 601;
  v4 = 0;
  do
  {
    sub_6688C(12, &v4);
    if ( v4 < 0 )
    {
      result = (unsigned int)v4 >> 31;
      *a1 = v4;
      return result;
    }
    usleep(0x1388u);
    --v2;
  }
  while ( v2 );
  return 0;
}
