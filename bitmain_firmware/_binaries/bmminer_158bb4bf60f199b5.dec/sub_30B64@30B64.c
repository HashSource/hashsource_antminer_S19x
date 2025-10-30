int __fastcall sub_30B64(int a1, int a2, int a3, unsigned int a4, int a5, unsigned __int8 a6)
{
  const char *v8; // r3
  int result; // r0
  unsigned int v10; // r4
  unsigned int v11; // r6
  int v12; // r10
  unsigned int v13; // [sp+14h] [bp-818h]
  _BYTE v16[4]; // [sp+24h] [bp-808h] BYREF
  char s[4]; // [sp+28h] [bp-804h] BYREF
  int v18; // [sp+2Ch] [bp-800h]

  if ( (unsigned int)dword_9E31C > 3 )
  {
    v8 = "true";
    if ( !a6 )
      v8 = "false";
    snprintf(
      s,
      0x800u,
      "chain = %d, freq_start = %d, freq_end = %d, freq_step = %d, is_higher_voltage = %s\n",
      a1,
      a3,
      a4,
      a5,
      v8);
    sub_47AB4(3, s, 0);
  }
  *(_DWORD *)s = 0;
  v18 = 0;
  result = sub_77070(a5 - 1 + a4 - a3, a5, a3);
  v13 = result;
  if ( result )
  {
    v10 = a3 + a5;
    v11 = 1;
    do
    {
      if ( a4 < v10 )
        v12 = a4;
      else
        v12 = v10;
      ++v11;
      sub_306F0(v12, a6);
      v10 += a5;
      sub_74E08(s, v16, 0);
      BYTE2(v18) = v16[0];
      sub_1B1F4(a1, 1, 0, a2, *(int *)s, v18);
      result = usleep((__useconds_t)"d asic, will power off hash board %d\n");
    }
    while ( v13 >= v11 );
  }
  return result;
}
