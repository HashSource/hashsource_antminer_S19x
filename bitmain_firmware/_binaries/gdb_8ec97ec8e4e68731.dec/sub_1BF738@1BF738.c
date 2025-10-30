int __fastcall sub_1BF738(int a1, int a2, int *a3)
{
  int v5; // r2
  unsigned int v7; // r0
  int v8; // r3
  bool v9; // cc

  v5 = *a3;
  if ( a1 == 39 )
  {
    if ( !v5 )
      sub_25A6BC(&word_3DB410, a2);
    *a3 = 1;
    return sub_25A6BC("''", a2);
  }
  else
  {
    v9 = (unsigned int)(a1 - 127) > 0x20;
    v7 = a1 - 32;
    v8 = v9;
    if ( v7 > 0xDF )
      v8 = 0;
    if ( !v8 )
      goto LABEL_15;
    v9 = dword_48A9B0 <= 0;
    if ( dword_48A9B0 )
      v9 = a1 <= 127;
    if ( v9 )
    {
      if ( !v5 )
        sub_25A6BC(&word_3DB410, a2);
      *a3 = 1;
      return sub_25A418(a2, "%c", a1);
    }
    else
    {
LABEL_15:
      if ( v5 )
        sub_25A6BC(&word_3DB410, a2);
      *a3 = 0;
      return sub_25A418(a2, "#%d", a1);
    }
  }
}
