int (__fastcall *__fastcall sub_134E5C(int *a1))(int *a1, int *a2, int a3, int ***a4)
{
  if ( !sub_B82F8(off_20FFDC, a1) )
    return BN_nist_mod_192;
  if ( !sub_B82F8(off_210004, a1) )
    return BN_nist_mod_224;
  if ( !sub_B82F8(off_21002C, a1) )
    return BN_nist_mod_256;
  if ( !sub_B82F8(off_210054, a1) )
    return BN_nist_mod_384;
  if ( sub_B82F8(off_21007C, a1) )
    return 0;
  return BN_nist_mod_521;
}
