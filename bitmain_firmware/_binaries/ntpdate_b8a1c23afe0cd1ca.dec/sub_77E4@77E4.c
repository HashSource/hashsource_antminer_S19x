unsigned __int16 *__fastcall sub_77E4(unsigned __int16 *result, unsigned __int16 *a2, unsigned int a3)
{
  int v3; // r12
  _BOOL4 v4; // r3
  int v5; // r5
  _BOOL4 v6; // lr
  unsigned __int8 *v7; // r7
  unsigned __int8 *v8; // r8
  unsigned int v9; // r5
  int v10; // r6

  if ( result )
  {
    v3 = *result;
    v4 = a2 == 0;
    if ( !*result )
      v4 = 1;
    if ( v4 )
      return 0;
    v5 = *a2;
    v6 = v5 == 0;
    if ( v3 != v5 )
      v6 = 1;
    if ( v6 )
      return 0;
    if ( v3 == 2 )
    {
      v7 = (unsigned __int8 *)(result + 2);
      if ( a3 >= 0x20 )
        a3 = 32;
      v8 = (unsigned __int8 *)(a2 + 2);
    }
    else
    {
      if ( v3 != 10 || *((_DWORD *)result + 6) != *((_DWORD *)a2 + 6) )
        return 0;
      v7 = (unsigned __int8 *)(result + 4);
      if ( a3 >= 0x80 )
        a3 = 128;
      v8 = (unsigned __int8 *)(a2 + 4);
    }
    v9 = a3 >> 3;
    v10 = (unsigned __int8)~(0xFFu >> (a3 & 7));
    if ( !(a3 >> 3) || !memcmp(v7, v8, a3 >> 3) )
      return (unsigned __int16 *)(!v10 || (v10 & (v7[v9] ^ v8[v9])) == 0);
    return 0;
  }
  return result;
}
