int __fastcall sub_2029A0(int result, int a2, _DWORD **a3)
{
  _DWORD *v3; // r2
  _DWORD *v4; // r3
  int v5; // r0

  v3 = *a3;
  if ( !v3 || !*v3 )
    goto LABEL_6;
  v4 = (_DWORD *)v3[*v3 + 1];
  if ( v4[7] == v4[6] && v4[9] == v4[10] )
  {
    sub_273CF8(result, "No segment or section bases defined");
LABEL_6:
    v5 = ((int (__fastcall *)(int))loc_163B8)(137);
    return sub_2029F4(v5);
  }
  return result;
}
