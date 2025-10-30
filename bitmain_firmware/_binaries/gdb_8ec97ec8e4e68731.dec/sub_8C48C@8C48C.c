int __fastcall sub_8C48C(__int64 a1)
{
  int v1; // r12
  unsigned __int8 *v2; // lr
  int v3; // r3
  int v5; // r2
  int v6; // t1

  v1 = 0;
  v2 = (unsigned __int8 *)dword_487CC0;
  v3 = 0;
  do
  {
    v6 = *v2++;
    v5 = v6;
    if ( (unsigned int)(v6 - 97) > 5 )
    {
      if ( (unsigned int)(v5 - 65) <= 5 )
      {
        v3 = v5 + 16 * v3 - 55;
      }
      else
      {
        if ( (unsigned int)(v5 - 48) > 9 )
        {
          if ( (int)a1 > v1 )
            goto LABEL_19;
          if ( SHIDWORD(a1) >= v1 )
            return v3;
          if ( (_DWORD)a1 != HIDWORD(a1) )
            sub_946E0("Overlong hex escape");
LABEL_18:
          a1 = sub_94700("rust-exp.y", 1105, "%s: Assertion `%s' failed.", "uint32_t lex_hex(int, int)", "min != max");
LABEL_19:
          sub_946E0("Not enough hex digits seen", HIDWORD(a1));
        }
        v3 = v5 + 16 * v3 - 48;
      }
    }
    else
    {
      v3 = v5 + 16 * v3 - 87;
    }
    ++v1;
    dword_487CC0 = (int)v2;
  }
  while ( SHIDWORD(a1) >= v1 || a1 != HIDWORD(a1) );
  if ( SHIDWORD(a1) < v1 )
    goto LABEL_18;
  return v3;
}
