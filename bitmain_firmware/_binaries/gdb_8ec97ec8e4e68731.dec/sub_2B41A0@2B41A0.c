int __fastcall sub_2B41A0(int a1, FILE *a2)
{
  bool v2; // zf
  int v5; // r4
  unsigned int v6; // r3
  bool v7; // zf
  const void *v8; // r0
  size_t v9; // r2
  const void *v11; // r0
  const void *v12; // r0
  size_t v13; // r2
  const void *v14; // r0
  size_t v15; // r2

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    sub_2A6BBC("elf32-arm.c", 14127);
  sub_2D7700(a1, a2);
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 32);
  fprintf(a2, "private flags = %lx:", v5);
  v6 = v5 & 0xFF000000;
  if ( (v5 & 0xFF000000) == 0x2000000 )
  {
    fwrite(" [Version2 EABI]", 1u, 0x10u, a2);
    if ( (v5 & 4) != 0 )
      LOWORD(v14) = 28892;
    else
      LOWORD(v14) = 28916;
    HIWORD(v14) = 65;
    if ( (v5 & 4) != 0 )
      v15 = 22;
    else
      v15 = 24;
    fwrite(v14, 1u, v15, a2);
    if ( (v5 & 8) != 0 )
      fwrite(" [dynamic symbols use segment index]", 1u, 0x24u, a2);
    if ( (v5 & 0x10) != 0 )
      fwrite(" [mapping symbols precede others]", 1u, 0x21u, a2);
    v5 &= 0xFFFFFFE3;
    goto LABEL_21;
  }
  if ( (v5 & 0xFF000000) > 0x2000000 )
  {
    switch ( v6 )
    {
      case 0x4000000u:
        fwrite(" [Version4 EABI]", 1u, 0x10u, a2);
        break;
      case 0x5000000u:
        fwrite(" [Version5 EABI]", 1u, 0x10u, a2);
        if ( (v5 & 0x200) != 0 )
          fwrite(" [soft-float ABI]", 1u, 0x11u, a2);
        if ( (v5 & 0x400) != 0 )
          fwrite(" [hard-float ABI]", 1u, 0x11u, a2);
        v5 &= 0xFFFFF9FF;
        break;
      case 0x3000000u:
        fwrite(" [Version3 EABI]", 1u, 0x10u, a2);
        goto LABEL_21;
      default:
        goto LABEL_10;
    }
    if ( (v5 & 0x800000) != 0 )
      fwrite(" [BE8]", 1u, 6u, a2);
    if ( (v5 & 0x400000) != 0 )
      fwrite(" [LE8]", 1u, 6u, a2);
    v5 &= 0xFF3FFFFF;
    goto LABEL_21;
  }
  if ( v6 )
  {
    if ( v6 != 0x1000000 )
    {
LABEL_10:
      fwrite(" <EABI version unrecognised>", 1u, 0x1Cu, a2);
      if ( (v5 & 1) == 0 )
        goto LABEL_22;
      goto LABEL_11;
    }
    fwrite(" [Version1 EABI]", 1u, 0x10u, a2);
    v7 = (v5 & 4) == 0;
    v5 &= ~4u;
    if ( v7 )
      LOWORD(v8) = 28916;
    else
      LOWORD(v8) = 28892;
    HIWORD(v8) = 65;
    if ( v7 )
      v9 = 24;
    else
      v9 = 22;
    fwrite(v8, 1u, v9, a2);
  }
  else
  {
    if ( (v5 & 4) != 0 )
      fwrite(" [interworking enabled]", 1u, 0x17u, a2);
    if ( (v5 & 8) != 0 )
      LOWORD(v11) = 28680;
    else
      LOWORD(v11) = 28692;
    HIWORD(v11) = 65;
    fwrite(v11, 1u, 0xAu, a2);
    if ( (v5 & 0x400) != 0 )
    {
      fwrite(" [VFP float format]", 1u, 0x13u, a2);
    }
    else
    {
      if ( (v5 & 0x800) != 0 )
        LOWORD(v12) = 28724;
      else
        LOWORD(v12) = 28752;
      HIWORD(v12) = 65;
      if ( (v5 & 0x800) != 0 )
        v13 = 24;
      else
        v13 = 19;
      fwrite(v12, 1u, v13, a2);
    }
    if ( (v5 & 0x10) != 0 )
      fwrite(" [floats passed in float registers]", 1u, 0x23u, a2);
    if ( (v5 & 0x20) != 0 )
      fwrite(" [position independent]", 1u, 0x17u, a2);
    if ( (v5 & 0x80) != 0 )
      fwrite(" [new ABI]", 1u, 0xAu, a2);
    if ( (v5 & 0x100) != 0 )
      fwrite(" [old ABI]", 1u, 0xAu, a2);
    if ( (v5 & 0x200) != 0 )
      fwrite(" [software FP]", 1u, 0xEu, a2);
    v5 &= 0xFFFFF043;
  }
LABEL_21:
  if ( (v5 & 1) != 0 )
LABEL_11:
    fwrite(" [relocatable executable]", 1u, 0x19u, a2);
LABEL_22:
  if ( (v5 & 0xFFFFFE) != 0 )
    fwrite("<Unrecognised flag bits set>", 1u, 0x1Cu, a2);
  fputc(10, a2);
  return 1;
}
