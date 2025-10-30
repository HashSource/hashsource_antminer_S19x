int __fastcall sub_174BC(int a1, int a2)
{
  int v4; // r4
  int v5; // r5

  v4 = 8;
  do
  {
    v5 = sub_389CC(28, a1, a2);
    if ( v5 )
      break;
    usleep(0x3E8u);
    --v4;
  }
  while ( v4 );
  return v5;
}
