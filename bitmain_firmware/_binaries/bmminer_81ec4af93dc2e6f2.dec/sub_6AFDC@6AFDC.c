int __fastcall sub_6AFDC(_BYTE *a1)
{
  unsigned int v2; // r3
  unsigned int v5; // [sp+8h] [bp-Ch] BYREF
  unsigned int v6; // [sp+Ch] [bp-8h]

  v5 = 0;
  v6 = 0;
  do
  {
    sub_52E24(12, &v5);
    if ( v5 >> 30 == 2 )
    {
      *a1 = v5;
      return 1;
    }
    usleep(0x1388u);
    v2 = v6++;
  }
  while ( v2 < 0x258 );
  return 0;
}
