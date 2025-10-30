int sub_40AEC()
{
  int result; // r0

  result = _stack_chk_guard;
  if ( !initializing )
  {
    result = alarm_flag;
    if ( alarm_flag )
      ++alarm_overflow;
    else
      alarm_flag = 1;
  }
  return result;
}
