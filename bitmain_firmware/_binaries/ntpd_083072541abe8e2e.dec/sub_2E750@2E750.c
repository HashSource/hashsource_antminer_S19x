int __fastcall sub_2E750(__int16 *a1)
{
  double v1; // d0
  int v4; // [sp+4h] [bp-8h]

  if ( (__int16 *)state != a1 )
    sub_25EE0(a1, 0, 0);
  state = (int)a1;
  dbl_B9B20 = v1;
  last_offset = v1;
  dword_B9B28 = current_time;
  return v4;
}
