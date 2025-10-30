int __fastcall sub_D8978(int *a1, int a2)
{
  size_t v4; // r4

  if ( !a2 )
    return 0;
  v4 = sub_D8944(a1);
  if ( v4 > 0x10 )
    sub_BC328("assertion failed: l <= sizeof(c->iv)", "crypto/evp/evp_lib.c", 94);
  if ( v4 != sub_12D290(a2, a1 + 4, v4) )
    return -1;
  if ( v4 )
    memcpy(a1 + 8, a1 + 4, v4);
  return v4;
}
