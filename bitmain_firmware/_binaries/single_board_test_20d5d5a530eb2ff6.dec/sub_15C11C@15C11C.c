int __fastcall sub_15C11C(int result)
{
  int v1; // r4
  int *v2; // r0

  v1 = result;
  if ( result )
  {
    v2 = (int *)sub_B66C8(result);
    sub_D1504(v2);
    sub_B66C4(v1, 0);
    sub_B66CC(v1, 0);
    return 1;
  }
  return result;
}
