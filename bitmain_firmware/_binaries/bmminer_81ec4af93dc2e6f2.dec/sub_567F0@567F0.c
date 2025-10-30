int __fastcall sub_567F0(int a1, char a2)
{
  int result; // r0
  char v5[12]; // [sp+8h] [bp-80Ch] BYREF
  int v6; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  result = sub_56744(a1);
  v6 = result;
  if ( result == 259 )
  {
    snprintf(v5, 0x800u, "gpio port %d is not a supported key\n", a1);
    return sub_3AF5C(1, v5, 0, (int)v5);
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( dword_5313CC[i] )
        result = dword_5313CC[i](v6, a2 != 0);
    }
  }
  return result;
}
