int __fastcall sub_D698C(int a1, int a2, int a3)
{
  int v6; // r0
  void (__fastcall *v7)(int, int, int, int, int); // r6
  int v8; // r4
  int v9; // r0

  v6 = sub_D8934(a1);
  v7 = *(void (__fastcall **)(int, int, int, int, int))(v6 + 384);
  v8 = v6;
  if ( v7 )
  {
    v9 = sub_D8AC0(a1);
    v7(a3, a2, 8, v8, v9);
  }
  else
  {
    sub_D8AC0(a1);
    sub_D8924(a1);
    sub_13EC4C(a3, a2);
  }
  return 1;
}
