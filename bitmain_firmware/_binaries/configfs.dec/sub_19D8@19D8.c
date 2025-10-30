__int64 __fastcall sub_19D8(__int64 a1)
{
  *(_QWORD *)(a1 + 32) = configfs_dir_inode_operations;
  *(_QWORD *)(a1 + 376) = &configfs_dir_operations;
  return inc_nlink(a1);
}
