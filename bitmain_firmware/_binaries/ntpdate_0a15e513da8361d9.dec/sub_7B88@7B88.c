bool __fastcall sub_7B88(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  int v4; // r3
  bool v5; // zf
  _BOOL4 result; // r0
  _BOOL4 v7; // r12
  unsigned __int8 *v8; // r7
  unsigned __int8 *v9; // r8
  unsigned int v10; // r5
  int v11; // r6

  if ( !a1 )
    return 0;
  v4 = *a1;
  v5 = v4 == 0;
  if ( *a1 )
    v5 = a2 == 0;
  result = v5;
  if ( v5 )
    return 0;
  v7 = v4 != *a2;
  if ( !*a2 )
    v7 = 1;
  if ( !v7 )
  {
    if ( v4 == 2 )
    {
      v8 = (unsigned __int8 *)(a1 + 2);
      v9 = (unsigned __int8 *)(a2 + 2);
      if ( a3 >= 0x20 )
        a3 = 32;
    }
    else
    {
      if ( v4 != 10 || *((_DWORD *)a1 + 6) != *((_DWORD *)a2 + 6) )
        return 0;
      v8 = (unsigned __int8 *)(a1 + 4);
      v9 = (unsigned __int8 *)(a2 + 4);
      if ( a3 >= 0x80 )
        a3 = 128;
    }
    v10 = a3 >> 3;
    v11 = (unsigned __int8)~(0xFFu >> (a3 & 7));
    if ( !(a3 >> 3) || !memcmp(v8, v9, a3 >> 3) )
      return !v11 || (v11 & (v8[v10] ^ v9[v10])) == 0;
    return 0;
  }
  return result;
}
