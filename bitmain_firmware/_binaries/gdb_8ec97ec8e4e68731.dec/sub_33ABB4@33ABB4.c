void *sub_33ABB4()
{
  void *v0; // r3

  v0 = malloc(0x78u);
  if ( !v0 )
  {
    v0 = sub_33AA58(0x78u);
    if ( !v0 )
      sub_339780();
  }
  return memset(v0, 0, 0x78u);
}
