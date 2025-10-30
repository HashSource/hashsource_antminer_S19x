int __fastcall sub_11F3F4(int a1, int a2, int a3, int a4)
{
  int v7; // r2

  sub_B550C(a3, "%*sPath Length Constraint: ", a4, &byte_1A4198);
  if ( *(_DWORD *)a2 )
    sub_12D3A0(a3, *(_DWORD *)a2);
  else
    sub_B550C(a3, "infinite");
  sub_B6C30(a3, (int)"\n");
  sub_B550C(a3, "%*sPolicy Language: ", a4, &byte_1A4198);
  sub_127D14(a3, **(_DWORD **)(a2 + 4));
  sub_B6C30(a3, (int)"\n");
  v7 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4);
  if ( v7 && *(_DWORD *)(v7 + 8) )
    sub_B550C(a3, "%*sPolicy Text: %.*s\n", a4, &byte_1A4198, *(_DWORD *)v7, *(const char **)(v7 + 8));
  return 1;
}
