__int64 sub_42EB4()
{
  __int64 v0; // r6

  v0 = qword_6ACD8;
  if ( qword_6ACD8 )
  {
    if ( pthread_mutex_lock(&stru_7688C) )
      sub_42E50("bitmain_c5_scanhash", 159);
    qword_6ACD8 = 0;
    sub_42DD4(&stru_7688C, "bitmain_c5_scanhash", 161);
    off_67ED8();
  }
  sub_23B9C();
  return v0;
}
