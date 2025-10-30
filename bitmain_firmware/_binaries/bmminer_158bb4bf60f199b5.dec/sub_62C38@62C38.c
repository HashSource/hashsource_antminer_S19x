int __fastcall sub_62C38(int a1, int a2, unsigned int a3)
{
  int v6; // r5

  v6 = sub_54148(a1, a3);
  if ( v6 && (*(_DWORD *)(a2 + 76) = a3, sub_51DD0(a2), !*(_DWORD *)(a2 + 220)) )
  {
    sub_62B4C(a1, a2);
    if ( dword_246240 && byte_24401D )
    {
      v6 = (unsigned __int8)byte_24401D;
      sub_531CC(a2, a3);
    }
  }
  else
  {
    v6 = 0;
    sub_593C8(a1);
  }
  return v6;
}
