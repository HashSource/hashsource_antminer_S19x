__int64 __fastcall configfs_unregister_default_group(_QWORD *a1)
{
  configfs_unregister_group(a1);
  return kfree(a1);
}
