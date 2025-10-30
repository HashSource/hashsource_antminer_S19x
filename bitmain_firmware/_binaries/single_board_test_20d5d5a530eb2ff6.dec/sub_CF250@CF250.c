int __fastcall sub_CF250(int a1)
{
  int (*v1)(void); // r5
  int v3; // r0
  int v5; // [sp+Ch] [bp-8h]

  v1 = *(int (**)(void))(a1 + 36);
  if ( v1 && (v3 = v1(), v3 > 0) )
    return sub_15B380(&unk_6DF424, (char *)&loc_CF234 + 1, a1, v5, v3, 0);
  else
    return 1;
}
