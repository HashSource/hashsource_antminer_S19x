int *__fastcall sub_C32A8(int a1, unsigned int *a2)
{
  unsigned int v4; // r0
  int *v5; // r4
  int v6; // r5
  int v7; // r0
  unsigned int v9; // [sp+Ch] [bp-8h] BYREF

  if ( sub_15DEBC(a1, &v9) )
  {
    v4 = v9;
    if ( a2 )
      *a2 = v9;
    v5 = sub_C2574(v4);
    if ( v5 )
    {
      v6 = sub_1910D8(a1);
      if ( v6 <= 0 )
        return v5;
      do
      {
        while ( 1 )
        {
          v7 = sub_C23FC((int)v5);
          v5 = (int *)v5[3];
          if ( !v7 )
            break;
          --v6;
          if ( !v5 )
            goto LABEL_11;
          if ( !v6 )
            return v5;
        }
      }
      while ( v5 );
LABEL_11:
      sub_94700(
        (int)"blockframe.c",
        79,
        "%s: Assertion `%s' failed.",
        "const block* get_frame_block(frame_info*, CORE_ADDR*)",
        "bl != NULL");
    }
  }
  return 0;
}
