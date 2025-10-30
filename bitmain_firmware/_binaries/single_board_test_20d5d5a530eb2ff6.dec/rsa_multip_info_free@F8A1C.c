void __fastcall rsa_multip_info_free(int **a1)
{
  sub_B87C8(*a1);
  sub_B87C8(a1[1]);
  sub_B87C8(a1[2]);
  rsa_multip_info_free_ex(a1);
}
