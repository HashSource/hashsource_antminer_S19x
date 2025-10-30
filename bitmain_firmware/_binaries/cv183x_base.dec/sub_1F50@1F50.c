__int64 sub_1F50()
{
  class_remove_file_ns(pbase_class, &class_attr_base_efuse_shadow, 0);
  class_remove_file_ns(pbase_class, &class_attr_base_efuse_prog, 0);
  return class_destroy(pbase_class);
}
