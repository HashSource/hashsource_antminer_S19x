int __fastcall sub_C5C80(int a1)
{
  int *v1; // r3
  int v2; // r3
  int (*v3)(void); // r3

  v1 = *(int **)(a1 + 12);
  if ( !v1 )
    return 0;
  v2 = *v1;
  if ( !v2 )
    return 0;
  v3 = *(int (**)(void))(v2 + 164);
  if ( v3 )
    return v3();
  sub_D0048(16, 256, 66, "crypto/ec/ec_key.c", 621);
  return 0;
}
