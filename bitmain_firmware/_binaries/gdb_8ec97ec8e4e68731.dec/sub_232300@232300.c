int __fastcall sub_232300(int **a1, int a2)
{
  int result; // r0

  if ( !dword_46DBE0 )
    sub_946E0("Writing to registers is not allowed (regno %d)", a2);
  result = off_4899E0(&dword_4899A0, a1, a2);
  if ( dword_489C84 )
    return sub_1DEF2C(a1, "target_store_registers", a2);
  return result;
}
