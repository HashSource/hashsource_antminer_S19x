int __fastcall sub_CEDAC(int a1)
{
  int (*v1)(void); // r5
  int v3; // r0
  int v5; // [sp+Ch] [bp-8h]

  v1 = *(int (**)(void))(a1 + 40);
  if ( v1 && (v3 = v1(), v3 > 0) )
    return sub_15B380(&dword_6DF414, (char *)&loc_CECC0 + 1, a1, v5, v3, 1);
  else
    return 1;
}
