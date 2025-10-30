int __fastcall sub_269D4(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // lr
  int v7; // r6
  const char *v8; // r2
  int result; // r0
  _DWORD *v11; // r0

  if ( (a1 & 0x200) != 0 )
  {
    v8 = "coproc";
    return sub_1F31C(a1, a2, v8, a4);
  }
  v4 = ((unsigned int)a1 >> 5) & 0xF;
  if ( v4 == 2 )
  {
    v8 = "neon 64bit xfer/mrrc/mrrc2/mcrr/mcrr2";
    return sub_1F31C(a1, a2, v8, a4);
  }
  if ( v4 )
  {
    v7 = a1 >> 4;
    if ( (BYTE1(a2) & 0xE) == 0xA )
    {
      switch ( v7 & 0x1F )
      {
        case 4:
        case 5:
          v8 = "vfp/neon vmov";
          return sub_1F31C(a1, a2, v8, a4);
        case 8:
        case 0xA:
        case 0xC:
        case 0xE:
        case 0x12:
        case 0x16:
          v8 = "vfp/neon vstm/vpush";
          return sub_1F31C(a1, a2, v8, a4);
        case 9:
        case 0xB:
        case 0xD:
        case 0xF:
        case 0x13:
        case 0x17:
          v8 = "vfp/neon vldm/vpop";
          return sub_1F31C(a1, a2, v8, a4);
        case 0x10:
        case 0x14:
        case 0x18:
        case 0x1C:
          v8 = "vstr";
          return sub_1F31C(a1, a2, v8, a4);
        case 0x11:
        case 0x15:
        case 0x19:
        case 0x1D:
          return sub_2693C(a1, a2, a3, a4);
        default:
          result = 1;
          break;
      }
    }
    else
    {
      if ( (v7 & 1) == 0 )
      {
        v8 = "stc/stc2";
        return sub_1F31C(a1, a2, v8, a4);
      }
      return sub_2693C(a1, a2, a3, a4);
    }
  }
  else
  {
    if ( dword_487978 )
    {
      v11 = (_DWORD *)sub_242FC8(a1);
      sub_2594B0(*v11, "displaced: copying undefined insn %.4x %.4x\n", a1, a2);
    }
    a4[42] = a1;
    a4[43] = a2;
    a4[50] = 2;
    return 0;
  }
  return result;
}
