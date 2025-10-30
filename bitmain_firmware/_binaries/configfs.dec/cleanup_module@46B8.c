__int64 cleanup_module()
{
  __int64 result; // x0

  unregister_filesystem(&off_6DD8);
  sysfs_remove_mount_point(kernel_kobj, "config");
  result = kmem_cache_destroy(configfs_dir_cachep);
  configfs_dir_cachep = 0;
  return result;
}
