char ***__fastcall sub_17E0C8(char **a1)
{
  char ***v2; // r4

  v2 = (char ***)sub_17D3A0();
  if ( v2 )
  {
    *v2 = sub_EAA20(0x97u);
    v2[1] = a1;
  }
  else
  {
    sub_D0048(35, 113, 65, (int)"crypto/pkcs12/p12_sbag.c", 129);
  }
  return v2;
}
