int __fastcall sub_C5674(_DWORD *a1)
{
  int (*v1)(void); // r3

  if ( a1 && a1[3] )
  {
    v1 = *(int (**)(void))(*a1 + 32);
    if ( v1 )
    {
      return v1();
    }
    else
    {
      sub_D0048(16, 179, 152, "crypto/ec/ec_key.c", 190);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 179, 67, "crypto/ec/ec_key.c", 185);
    return 0;
  }
}
