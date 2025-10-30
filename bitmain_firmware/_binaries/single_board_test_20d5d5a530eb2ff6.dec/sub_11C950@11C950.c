int __fastcall sub_11C950(int a1, _DWORD **a2, int a3)
{
  _DWORD *v4; // r6
  int v5; // r5
  const char *v6; // r3
  _DWORD *v7; // r1

  v4 = *a2;
  v5 = a3 + 2;
  sub_B550C(a1, "%*sPolicy: ", a3, &byte_1A4198);
  sub_127D14(a1, v4[1]);
  sub_B6C30(a1, (int)"\n");
  if ( (*v4 & 0x10) != 0 )
    v6 = "Critical";
  else
    v6 = "Non Critical";
  sub_B550C(a1, "%*s%s\n", v5, &byte_1A4198, v6);
  v7 = (_DWORD *)v4[2];
  if ( v7 )
    return sub_11BC60(a1, v7, v5);
  else
    return sub_B550C(a1, "%*sNo Qualifiers\n", v5, &byte_1A4198);
}
