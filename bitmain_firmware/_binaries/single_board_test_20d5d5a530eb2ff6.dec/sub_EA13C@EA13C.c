unsigned int __fastcall sub_EA13C(_DWORD *a1, int a2, int a3)
{
  __int64 v5; // r0

  if ( !dword_6E1A90 || *a1 >= sub_10C010(dword_6E1A90, a2, a3) )
    return openssl_lh_strcasehash(a1[2]) ^ *a1;
  v5 = sub_10C01C(dword_6E1A90, *a1);
  return (*(int (__fastcall **)(_DWORD, _DWORD))v5)(a1[2], HIDWORD(v5)) ^ *a1;
}
