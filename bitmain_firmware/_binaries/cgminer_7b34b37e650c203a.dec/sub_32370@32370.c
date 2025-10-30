void __fastcall sub_32370(_DWORD *a1)
{
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
  {
    snprintf(v2, 0x800u, "Stratum connection to pool %d resumed", *a1);
    sub_20F58(6, v2, 0);
    sub_32238(a1);
  }
  else
  {
    sub_32238(a1);
  }
}
