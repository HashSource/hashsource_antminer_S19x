int __fastcall sub_F3198(int a1)
{
  int v2; // r5

  v2 = *(_DWORD *)(a1 + 240);
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 12))();
    return sub_F2E30(a1, *(_DWORD *)(a1 + 12), *(unsigned __int16 *)(a1 + 20));
  }
  else
  {
    *(_DWORD *)(a1 + 92) = 2;
    sub_D0048(36, 118, 128, (int)"crypto/rand/drbg_lib.c", 382);
    return 0;
  }
}
