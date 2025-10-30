int __fastcall sub_2B730(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
  {
    snprintf(v3, 0x800u, "WTF No pool %d found!", a1);
    sub_20F58(3, v3, 0);
  }
  return *(_DWORD *)(dword_744C8 + 4 * a1);
}
