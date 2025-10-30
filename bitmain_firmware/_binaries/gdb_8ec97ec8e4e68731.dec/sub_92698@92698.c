int __fastcall sub_92698(int result)
{
  void *v1; // r5

  v1 = (void *)result;
  if ( off_46BBC4 != &unk_36E7FC )
    result = sub_94720("common/cleanups.c", 264, "restore_my_cleanups has found a stale cleanup");
  off_46BBC4 = v1;
  return result;
}
