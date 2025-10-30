__int16 *sub_18F30()
{
  __int16 *result; // r0
  int i; // r3

  result = (_WORD *)(elf_hash_bucket + 1648);
  dword_B92C4 = 0;
  for ( i = fd_list; fd_list; i = fd_list )
    result = sub_15954(*(__int16 **)(i + 4));
  return result;
}
