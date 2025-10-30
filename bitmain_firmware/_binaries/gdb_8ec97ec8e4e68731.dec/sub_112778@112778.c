unsigned __int8 *__fastcall sub_112778(unsigned __int8 *result, unsigned __int8 *a2, const char *a3)
{
  int v3; // r1
  bool v4; // zf
  char v5; // r3
  int v6; // r3

  if ( result != a2 )
  {
    v3 = *result;
    v4 = v3 == 147;
    if ( v3 != 147 )
      v4 = v3 == 157;
    v5 = !v4;
    if ( v3 == 240 )
      v6 = 0;
    else
      v6 = v5 & 1;
    if ( v6 )
      sub_946E0(
        "DWARF-2 expression error: `%s' operations must be used either alone or in conjunction with DW_OP_piece or DW_OP_bit_piece.",
        a3);
  }
  return result;
}
