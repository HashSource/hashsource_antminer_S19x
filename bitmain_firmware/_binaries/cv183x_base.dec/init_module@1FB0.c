__int64 init_module()
{
  __int64 v0; // x1
  unsigned int file_ns; // w19
  __int64 v2; // x1
  __int64 v3; // x1
  unsigned int chip_id; // w0

  qword_41C0 = _ioremap(50331648, 0x10000, 0xE8000000000707LL);
  pbase_class = _class_create(&_this_module, "cvi-base", &qword_41D8);
  if ( (unsigned __int64)pbase_class > 0xFFFFFFFFFFFFF000LL )
  {
    printk(&unk_2DA8, v0);
    file_ns = pbase_class;
LABEL_8:
    sub_1F50();
    return file_ns;
  }
  file_ns = ((__int64 (*)(void))class_create_file_ns)();
  if ( file_ns )
  {
    printk(&unk_2DC0, v2);
    goto LABEL_8;
  }
  file_ns = class_create_file_ns(pbase_class, &class_attr_base_efuse_prog, 0);
  if ( file_ns )
  {
    printk(&unk_2DF8, v3);
    goto LABEL_8;
  }
  _platform_driver_register(off_3C80, &_this_module);
  chip_id = cvi_base_read_chip_id();
  printk(&unk_2E30, chip_id);
  return file_ns;
}
