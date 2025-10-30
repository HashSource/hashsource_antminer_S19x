int __fastcall sub_1335EC(int a1, const void *a2, int a3)
{
  if ( sub_B89D8(a1, a3) )
  {
    memcpy(*(void **)a1, a2, 4 * a3);
    *(_DWORD *)(a1 + 4) = a3;
    sub_B8ACC((_DWORD *)a1);
    return 1;
  }
  else
  {
    sub_D0048(3, 144, 65, (int)"crypto/bn/bn_intern.c", 191);
    return 0;
  }
}
