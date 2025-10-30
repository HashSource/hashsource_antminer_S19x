__int64 cvi_base_read_chip_version()
{
  int v0; // w19

  v0 = *(_DWORD *)qword_41C0;
  __dsb(0xDu);
  if ( (word_3D92 & 4) != 0 )
    _dynamic_pr_debug(off_3D70, "chip_version=0x%x\n", v0);
  return (unsigned int)(v0 == 411049985) + 1;
}
