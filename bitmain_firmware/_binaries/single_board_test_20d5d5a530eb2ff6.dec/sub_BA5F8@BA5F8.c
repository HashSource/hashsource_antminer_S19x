int __fastcall sub_BA5F8(void **a1, int *a2, int a3)
{
  int v4; // r4

  if ( a3 < 0 )
  {
    sub_D0048(3, 145, 119, "crypto/bn/bn_shift.c", 86);
    return 0;
  }
  else
  {
    v4 = sub_BA420(a1, a2, a3);
    sub_B8ACC(a1);
    return v4;
  }
}
