__int64 cleanup_module()
{
  platform_driver_unregister(off_3C80);
  sub_1F50();
  return _iounmap(qword_41C0);
}
