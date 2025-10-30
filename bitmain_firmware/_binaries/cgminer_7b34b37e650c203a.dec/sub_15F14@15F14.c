int __fastcall sub_15F14(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(v2, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "pool_change");
    a1 = sub_20F58(5, v2, 0);
  }
  result = sub_3FE74(a1);
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(v2, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "pool_change");
    return sub_20F58(5, v2, 0);
  }
  return result;
}
