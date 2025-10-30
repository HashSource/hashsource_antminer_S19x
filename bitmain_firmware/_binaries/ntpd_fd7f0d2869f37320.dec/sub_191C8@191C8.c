__int16 *sub_191C8()
{
  __int16 *result; // r0
  int i; // r3

  result = (_WORD *)(elf_hash_bucket + 1648);
  dword_BA2C4 = 0;
  for ( i = fd_list; fd_list; i = fd_list )
    result = sub_15BE0(*(__int16 **)(i + 4));
  return result;
}
