int __fastcall sub_11FD74(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r5
  int v9; // r4

  result = sub_B78F4(a1, 0);
  v8 = result;
  if ( result )
  {
    v9 = sub_11FAA0(result, a2, a3, a4);
    BIO_vfree_0(v8);
    return v9;
  }
  return result;
}
