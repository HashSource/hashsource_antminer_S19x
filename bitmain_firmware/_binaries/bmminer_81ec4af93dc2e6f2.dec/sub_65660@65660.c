int __fastcall sub_65660(int a1)
{
  char v3[2048]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = sub_64898(a1);
  if ( v4 == -2147482880 )
  {
    strcpy(v3, "check power version failed, use v2 protocal to try it again\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return sub_64C18(a1);
  }
  return v4;
}
