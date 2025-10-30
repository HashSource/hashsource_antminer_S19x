int __fastcall sub_C53C8(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0
  int v10; // r4
  int v11; // r5

  v8 = sub_159434();
  result = sub_C6130(v8);
  v10 = result;
  if ( result )
  {
    v11 = sub_C6314(result, a1, a2, a3, a4);
    result = v10;
    if ( !v11 )
    {
      sub_C6538(v10);
      return 0;
    }
  }
  return result;
}
