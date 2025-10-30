unsigned int __fastcall sub_FE168(unsigned int a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  if ( a6 )
    return sub_E1AB0(a1, a2, a3, a4, a5, (int (__fastcall *)(int *, int *, int))SEED_encrypt);
  else
    return sub_E1D38(a1, a2, a3, a4, a5, (void (__fastcall *)(unsigned int, int *, int))SEED_decrypt);
}
