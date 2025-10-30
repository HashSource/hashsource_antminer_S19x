int __fastcall sub_6F13C(unsigned int a1)
{
  int result; // r0
  unsigned int v3; // [sp+0h] [bp-Ch] BYREF
  __int16 v4; // [sp+4h] [bp-8h]
  char v5; // [sp+6h] [bp-6h]
  char v6; // [sp+7h] [bp-5h]

  if ( a1 > 0xF )
    return sub_6F0EC(a1);
  result = dword_1B13B8[2 * a1];
  if ( !result || !dword_1B13B8[2 * a1 + 1] )
  {
    v4 = 0;
    v5 = 10;
    v3 = a1;
    v6 = a1;
    result = sub_73660(&v3);
    if ( result >= 0 )
    {
      dword_1B13B8[2 * a1] = result;
      dword_1B13B8[2 * a1 + 1] = 1;
    }
  }
  return result;
}
