int __fastcall sub_D8A7C(int *a1, int a2, int a3, int a4)
{
  unsigned int v6; // r2

  if ( !a2 )
    return 0;
  v6 = sub_D8944(a1);
  if ( v6 > 0x10 )
    sub_BC328("assertion failed: j <= sizeof(c->iv)", "crypto/evp/evp_lib.c", 111);
  return sub_12D254(a2, a1 + 4, v6, a4);
}
