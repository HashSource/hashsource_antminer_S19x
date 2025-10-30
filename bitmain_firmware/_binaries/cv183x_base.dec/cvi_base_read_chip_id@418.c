__int64 cvi_base_read_chip_id()
{
  int v0; // w2
  int v1; // w19
  __int64 result; // x0

  v0 = *(_DWORD *)(qword_41C0 + 140);
  __dsb(0xDu);
  v1 = (unsigned __int16)v0;
  if ( (word_3D6A & 4) != 0 )
    _dynamic_pr_debug(off_3D48, "chip_id=0x%x\n", (unsigned __int16)v0);
  result = 2;
  if ( (unsigned int)(v1 - 6178) <= 0x16 )
    return dword_2270[v1 - 6178];
  return result;
}
