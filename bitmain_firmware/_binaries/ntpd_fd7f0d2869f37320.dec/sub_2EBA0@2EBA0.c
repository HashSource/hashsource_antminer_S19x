int __fastcall sub_2EBA0(int a1)
{
  double v1; // d0
  bool v3; // zf

  v3 = state == a1;
  if ( state != a1 )
    v3 = a1 == 2;
  if ( !v3 )
    sub_26294(a1, 0, 0);
  state = a1;
  dbl_BAB20 = v1;
  last_offset = v1;
  dword_BAB28 = current_time;
  return _stack_chk_guard;
}
