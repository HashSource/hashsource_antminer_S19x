int __fastcall sub_82F68(int result)
{
  int v1; // r5
  int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  if ( result )
  {
    v1 = sub_DB4F8(result, 0);
    if ( v1 && sub_DAFF4() > 0 && sub_DB03C(v1, &v2) <= 0 )
    {
      sub_DA240(v2);
      v2 = 0;
    }
    sub_DB4BC(v1);
    return v2;
  }
  return result;
}
