int sub_B72A4()
{
  int result; // r0

  nullsub_1();
  sub_10C574(bio_lookup_lock);
  bio_lookup_lock = 0;
  result = sub_10C574(bio_type_lock);
  bio_type_lock = 0;
  return result;
}
