void __fastcall sub_11DB2C(_BYTE *a1, int a2)
{
  void *v2; // r4

  if ( *a1 == 47 || !a2 )
    JUMPOUT(0xE5D8C);
  v2 = (void *)sub_31E27C(a2, &word_398974, a1);
  ((void (*)(void))loc_E5D8C)();
  free(v2);
}
