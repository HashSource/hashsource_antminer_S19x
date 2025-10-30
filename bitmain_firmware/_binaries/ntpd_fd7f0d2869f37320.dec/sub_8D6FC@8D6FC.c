int __fastcall sub_8D6FC(void (*a1)(void *))
{
  _UNKNOWN **v1; // r2

  v1 = &off_B7004;
  if ( &off_B7004 )
    v1 = (_UNKNOWN **)off_B7004;
  return sub_B614(a1, 0, v1);
}
