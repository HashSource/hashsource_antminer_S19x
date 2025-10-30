char *__fastcall sub_1F20C(const char *a1, int a2)
{
  int v3; // r9
  unsigned __int8 *v4; // r10
  int v5; // r4
  int v6; // t1
  const unsigned __int16 **v7; // r0
  int v8; // r3
  int v9; // r4
  int v11; // [sp+0h] [bp-8h] BYREF

  v3 = 0;
  v11 = a2;
  v4 = (unsigned __int8 *)&v11;
  do
  {
    v6 = *v4++;
    v5 = v6;
    if ( !v6 )
      break;
    v7 = _ctype_b_loc();
    v8 = v5;
    ++v3;
    v9 = v5 == 44;
    if ( ((*v7)[v8] & 0x6000) != 0x4000 )
      v9 |= 1u;
    if ( v9 )
      *(v4 - 1) = 46;
  }
  while ( v3 != 4 );
  return sub_1F0E4(a1, (int)&v11, v3);
}
