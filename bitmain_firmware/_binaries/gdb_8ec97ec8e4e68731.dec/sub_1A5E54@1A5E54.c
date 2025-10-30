int __fastcall sub_1A5E54(const char *a1, int a2, int a3, int a4, int a5, signed int a6)
{
  const char *v9; // r0
  int v10; // r3
  const char *v11; // r0
  int v12; // r3
  const char *v13; // r0
  int savedregs; // [sp+0h] [bp+0h]
  int savedregsa; // [sp+0h] [bp+0h]
  int savedregsb; // [sp+0h] [bp+0h]
  int savedregs_4; // [sp+4h] [bp+4h]
  int savedregs_4a; // [sp+4h] [bp+4h]
  int savedregs_4b; // [sp+4h] [bp+4h]

  v9 = (const char *)sub_98B60(a3, 0, a6, a4, savedregs, savedregs_4);
  sub_259F10("    %s", v9);
  v11 = (const char *)sub_98B60(a4, 0, a6, v10, savedregsa, savedregs_4a);
  sub_259F10("->%s", v11);
  v13 = (const char *)sub_98B60(a5, 0, 8, v12, savedregsb, savedregs_4b);
  sub_259F10(" at %s", v13);
  sub_259F10(": %s", a1);
  if ( (a2 & 1) != 0 )
    sub_259F10(" ALLOC");
  if ( (a2 & 2) != 0 )
    sub_259F10(" LOAD");
  if ( (a2 & 4) != 0 )
    sub_259F10(" RELOC");
  if ( (a2 & 8) != 0 )
    sub_259F10(" READONLY");
  if ( (a2 & 0x10) != 0 )
    sub_259F10(" CODE");
  if ( (a2 & 0x20) != 0 )
    sub_259F10(" DATA");
  if ( (a2 & 0x40) != 0 )
    sub_259F10(" ROM");
  if ( (a2 & 0x80) != 0 )
    sub_259F10(" CONSTRUCTOR");
  if ( (a2 & 0x100) != 0 )
    sub_259F10(" HAS_CONTENTS");
  if ( (a2 & 0x200) != 0 )
    sub_259F10(" NEVER_LOAD");
  if ( (a2 & 0x4000000) != 0 )
    sub_259F10(" COFF_SHARED_LIBRARY");
  if ( (a2 & 0x1000) != 0 )
    sub_259F10(" IS_COMMON");
  return sub_259F10((const char *)&word_356638);
}
