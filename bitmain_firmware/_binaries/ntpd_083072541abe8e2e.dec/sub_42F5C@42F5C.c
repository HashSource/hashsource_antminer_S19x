void __fastcall sub_42F5C(int a1, int a2)
{
  void **v3; // r0
  void *v4; // r5

  sub_64E00(3, "Datum_PTS: Shutdown Datum PTS");
  v3 = *(void ***)(a2 + 84);
  v4 = *v3;
  if ( *v3 )
  {
    sub_18E64((int)(v3 + 2));
    free(v4);
  }
}
