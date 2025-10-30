__int64 init_module()
{
  unsigned int mount_point; // w19

  configfs_dir_cachep = kmem_cache_create("configfs_dir_cache", 88, 0, 0, 0);
  if ( !configfs_dir_cachep )
    return (unsigned int)-12;
  mount_point = sysfs_create_mount_point(kernel_kobj, "config");
  if ( mount_point )
    goto LABEL_5;
  mount_point = register_filesystem(&off_6DD8);
  if ( mount_point )
  {
    printk(&unk_67E8);
    sysfs_remove_mount_point(kernel_kobj, "config");
LABEL_5:
    kmem_cache_destroy(configfs_dir_cachep);
    configfs_dir_cachep = 0;
  }
  return mount_point;
}
