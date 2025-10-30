int __fastcall sub_D16E4(int *a1, int a2, _DWORD *a3)
{
  int v5; // r0
  _DWORD *v6; // r3
  int v7; // r6
  void (__fastcall *v8)(int *); // r2

  if ( *(int *)(*a1 + 8) > 64 )
    sub_BC328("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE", "crypto/evp/digest.c", 183);
  v5 = (*(int (**)(void))(*a1 + 24))();
  v6 = (_DWORD *)*a1;
  v7 = v5;
  if ( a3 )
    *a3 = v6[2];
  v8 = (void (__fastcall *)(int *))v6[8];
  if ( v8 )
  {
    v8(a1);
    sub_D8DA4(a1, 2);
    v6 = (_DWORD *)*a1;
  }
  sub_E07F8(a1[3], v6[10]);
  return v7;
}
