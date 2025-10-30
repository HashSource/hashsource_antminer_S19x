int __fastcall sub_2A9CE0(int a1, int a2)
{
  int result; // r0
  int v3; // [sp+0h] [bp-Ch] BYREF
  int v4; // [sp+4h] [bp-8h] BYREF

  result = sub_2A992C(a1, a2, &v3, &v4);
  if ( result )
  {
    if ( v3 >= 0 )
    {
      result = v4;
      if ( v4 )
        return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
