void *__fastcall sub_24324(int a1, __int16 a2)
{
  int *v2; // r0
  int v3; // r2

  if ( (a2 & 0x200) != 0 )
    return (void *)sub_1F734(1);
  v2 = (int *)(a1 + 4);
  if ( (a2 & 0x400) != 0 )
    v3 = 2;
  else
    v3 = 1;
  if ( !sub_240BC(v2, v2[14], v3, byte_BA8DC) )
    sub_1F734(1);
  return sub_1EDD4(0);
}
