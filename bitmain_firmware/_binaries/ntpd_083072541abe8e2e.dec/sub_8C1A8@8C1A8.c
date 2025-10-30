int __fastcall sub_8C1A8(void (*a1)(void *))
{
  _UNKNOWN **v1; // r2

  v1 = &off_B6004;
  if ( &off_B6004 )
    v1 = (_UNKNOWN **)off_B6004;
  return sub_B508(a1, 0, v1);
}
