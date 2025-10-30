int __fastcall sub_72780(int a1, unsigned int a2)
{
  unsigned int v6; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < a2; ++i )
  {
    v6 = sub_72418(*(_BYTE *)(a1 + i));
    if ( !v6 )
      return 0;
    if ( v6 > 1 )
    {
      if ( v6 > a2 - i )
        return 0;
      if ( !sub_724FC((char *)(a1 + i), v6, 0) )
        return 0;
      i = v6 + i - 1;
    }
  }
  return 1;
}
