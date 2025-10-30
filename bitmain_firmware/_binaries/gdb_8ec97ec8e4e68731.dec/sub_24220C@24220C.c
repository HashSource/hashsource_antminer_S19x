void __fastcall sub_24220C(void (***a1)(void))
{
  void (*v2)(void); // r3

  if ( a1 )
  {
    v2 = **a1;
    if ( v2 )
      v2();
    free(a1);
  }
}
