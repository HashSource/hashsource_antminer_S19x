int __fastcall sub_240C0(unsigned __int16 *a1, int a2, int a3)
{
  char *v4; // r0
  char *v5; // r3
  char v6; // r2

  v4 = sub_1E710(a1, a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  v6 = a3;
  if ( a3 )
    v6 = 1;
  if ( (*(_DWORD *)&v6 & ((unsigned __int8)v4[50] >> 2)) != 0 )
    return 0;
  v5[50] = 0;
  --num_ctl_traps;
  return 1;
}
