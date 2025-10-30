int __fastcall sub_28024C(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = sub_2926F8();
  if ( a1 )
  {
    v3 = a1 - 1;
    do
    {
      --v3;
      v2 = sub_294F3C(dword_48AB10);
    }
    while ( v3 != -1 );
  }
  return sub_292748(v2);
}
