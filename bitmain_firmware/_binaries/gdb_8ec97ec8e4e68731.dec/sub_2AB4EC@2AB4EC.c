void *__fastcall sub_2AB4EC(size_t a1)
{
  void *v2; // r0
  bool v3; // zf
  void *v4; // r5

  v2 = sub_2AB368(a1);
  v3 = v2 == 0;
  if ( v2 )
    v3 = a1 == 0;
  v4 = v2;
  if ( !v3 )
    memset(v2, 0, a1);
  return v4;
}
