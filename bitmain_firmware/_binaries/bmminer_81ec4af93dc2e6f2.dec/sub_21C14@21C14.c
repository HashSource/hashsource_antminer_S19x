unsigned int sub_21C14()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "power off\n");
    sub_3AF5C(3, v2, 0, &v2[10]);
  }
  sub_563DC();
  v0 = 0;
  sub_3D9D4(30);
  do
  {
    if ( sub_266F0(v0) )
      sub_5C9F4(v0);
    ++v0;
  }
  while ( v0 != 4 );
  return sleep(1u);
}
