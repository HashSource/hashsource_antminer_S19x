int __fastcall sub_6608(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  int result; // r0
  int v6; // r2
  _BYTE s[768]; // [sp+14h] [bp-304h] BYREF

  v4 = a2 - a4;
  result = _stack_chk_guard;
  v6 = a1 - a3;
  if ( (unsigned int)(v4 + 3000000) > 0x5B8D80 )
  {
    result = -1000000;
    v6 += v4 / 1000000;
    v4 %= 1000000;
  }
  if ( v4 < 0 )
  {
    do
    {
      --v6;
      v4 += 1000000;
    }
    while ( v4 < 0 );
  }
  else
  {
    for ( ; v4 > 999999; v4 -= 1000000 )
      ++v6;
  }
  if ( v6 >= 0 )
  {
LABEL_7:
    if ( !v6 )
      return result;
    goto LABEL_8;
  }
  if ( v4 )
  {
    v6 = ~v6;
    goto LABEL_7;
  }
LABEL_8:
  memset(s, 0, 0x180u);
  return (int)memset(&s[384], 0, 0x180u);
}
