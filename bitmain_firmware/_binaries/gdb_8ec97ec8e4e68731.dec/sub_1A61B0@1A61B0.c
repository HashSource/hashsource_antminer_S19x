int __fastcall sub_1A61B0(int a1, int a2)
{
  int result; // r0

  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_3;
    goto LABEL_22;
  }
  if ( sub_1A6008(a1, "ALLOC") )
    return 1;
  if ( (a2 & 2) != 0 )
  {
LABEL_22:
    if ( sub_1A6008(a1, "LOAD") )
      return 1;
  }
LABEL_3:
  if ( (a2 & 4) != 0 && sub_1A6008(a1, "RELOC") )
    return 1;
  if ( (a2 & 8) != 0 )
  {
    if ( sub_1A6008(a1, "READONLY") )
      return 1;
    if ( (a2 & 0x10) == 0 )
      goto LABEL_6;
LABEL_24:
    if ( !sub_1A6008(a1, "CODE") )
      goto LABEL_6;
    return 1;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_24;
LABEL_6:
  if ( (a2 & 0x20) != 0 && sub_1A6008(a1, "DATA")
    || (a2 & 0x40) != 0 && sub_1A6008(a1, "ROM")
    || (a2 & 0x80) != 0 && sub_1A6008(a1, "CONSTRUCTOR")
    || (a2 & 0x100) != 0 && sub_1A6008(a1, "HAS_CONTENTS")
    || (a2 & 0x200) != 0 && sub_1A6008(a1, "NEVER_LOAD")
    || (a2 & 0x4000000) != 0 && sub_1A6008(a1, "COFF_SHARED_LIBRARY") )
  {
    return 1;
  }
  result = a2 & 0x1000;
  if ( (a2 & 0x1000) != 0 )
    return sub_1A6008(a1, "IS_COMMON") != 0;
  return result;
}
