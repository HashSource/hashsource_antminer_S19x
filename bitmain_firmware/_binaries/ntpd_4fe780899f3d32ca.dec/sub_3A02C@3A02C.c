int __fastcall sub_3A02C(int a1, int a2)
{
  int (__fastcall *v2)(int); // r5
  int v4; // r1

  v2 = *(int (__fastcall **)(int))(a1 + 8);
  if ( v2 && !v2(a2) )
  {
    sub_69FA8(a2, v4);
    return 1;
  }
  else
  {
    sub_6A044(a2);
    return 0;
  }
}
