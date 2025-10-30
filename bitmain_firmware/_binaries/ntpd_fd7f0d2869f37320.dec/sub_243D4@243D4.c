int __fastcall sub_243D4(unsigned __int16 *a1, int a2, int a3)
{
  char *v4; // r0

  v4 = sub_1E948(a1, a2);
  if ( !v4 )
    return 0;
  if ( a3 && ((unsigned __int8)v4[50] >> 2) & 1 )
    return 0;
  v4[50] = 0;
  --num_ctl_traps;
  return 1;
}
