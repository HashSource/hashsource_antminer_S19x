int __fastcall sub_3E918(int a1, int a2, unsigned int a3)
{
  int v6; // r5

  v6 = sub_2DC68(a1, a3);
  if ( v6 && (*(_DWORD *)(a2 + 76) = a3, sub_2B350(a2), !*(_DWORD *)(a2 + 220)) )
  {
    sub_3E82C(a1, a2);
    if ( dword_766C0 && byte_7449D )
    {
      v6 = (unsigned __int8)byte_7449D;
      sub_2CCF0(a2, a3);
    }
  }
  else
  {
    v6 = 0;
    sub_331A4(a1);
  }
  return v6;
}
