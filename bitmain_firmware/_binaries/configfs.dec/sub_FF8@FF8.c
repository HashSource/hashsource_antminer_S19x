void *__fastcall sub_FF8(__int64 a1)
{
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 376) = &configfs_bin_file_operations;
  return &configfs_bin_file_operations;
}
