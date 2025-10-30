unsigned int __fastcall sub_2114A0(unsigned int a1, unsigned int *a2, int a3, int a4, unsigned int a5)
{
  unsigned __int8 *v8; // r4
  unsigned int result; // r0
  unsigned int *v10; // r7
  unsigned __int8 *v11; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  v8 = (unsigned __int8 *)savedregs;
  result = sub_FA844(a1, (int)savedregs, a4 * a3);
  if ( a3 > 0 )
  {
    v10 = &a2[a3];
    do
    {
      v11 = v8;
      v8 += a4;
      result = sub_15C250(v11, a4, a5);
      *a2++ = result;
    }
    while ( v10 != a2 );
  }
  return result;
}
