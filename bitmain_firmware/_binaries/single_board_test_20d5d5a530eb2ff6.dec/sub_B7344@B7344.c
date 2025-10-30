int sub_B7344()
{
  unsigned int v0; // r0

  if ( sub_10C594(&unk_6DF3B4, sub_B7318) && dword_6DF3B0 )
  {
    do
      v0 = __ldrex(&dword_21F718);
    while ( __strex(v0 + 1, &dword_21F718) );
    return v0 + 1;
  }
  else
  {
    sub_D0048(32, 102, 65, "crypto/bio/bio_meth.c", 28);
    return -1;
  }
}
