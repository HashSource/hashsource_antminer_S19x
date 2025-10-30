int __fastcall sub_1F73C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  int result; // r0
  int v8; // r3
  int v9; // r3

  v5 = (_DWORD *)sub_163E78(a1);
  switch ( a2 )
  {
    case 3:
      v9 = v5[15];
      result = v5[14];
      *a3 = v9;
      break;
    case 4:
LABEL_5:
      v6 = v5[11];
      result = v5[10];
      *a3 = v6;
      return result;
    case 2:
      v8 = v5[13];
      result = v5[12];
      *a3 = v8;
      break;
    default:
      v5 = (_DWORD *)sub_94700(
                       "arm-tdep.c",
                       7834,
                       "%s: %s",
                       "const gdb_byte* arm_sw_breakpoint_from_kind(gdbarch*, int, int*)",
                       "unexpected arm breakpoint kind");
      goto LABEL_5;
  }
  return result;
}
