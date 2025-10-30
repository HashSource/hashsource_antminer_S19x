int __fastcall sub_645C0(int a1)
{
  char v3[2048]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = sub_63548(a1);
  if ( v4 == -2147482880 )
  {
    strcpy(v3, "check power version failed, use v2 protocal to try it again\n");
    sub_3B6AC(0, v3, 0, (int)v3);
    return sub_63948(a1);
  }
  return v4;
}
