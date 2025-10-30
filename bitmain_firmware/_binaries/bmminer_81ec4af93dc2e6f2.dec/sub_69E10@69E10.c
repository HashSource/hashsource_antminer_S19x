int __fastcall sub_69E10(unsigned int a1)
{
  char v4[8]; // [sp+Ch] [bp-808h] BYREF
  unsigned __int8 i; // [sp+80Fh] [bp-5h]

  if ( a1 <= 0xF )
  {
    for ( i = 0; i < (unsigned int)*((unsigned __int8 *)&unk_5316AC + 68 * a1); ++i )
    {
      if ( *((_DWORD *)&unk_5316AC + 17 * a1 + 2 * i + 2) )
        sub_6A8A0(*((_DWORD *)&unk_5316AC + 17 * a1 + 2 * i + 2));
    }
    memset((char *)&unk_5316AC + 68 * a1, 0, 0x44u);
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, " Bad T-sensor param, input chain is %d\n", a1);
    sub_3AF5C(0, v4, 0, (int)v4);
    return -2147482111;
  }
}
