int __fastcall sub_435CC(int a1)
{
  int result; // r0
  unsigned int v3; // r5
  int v4; // r3
  int v5; // r3
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v6, 0x800u, "inc freq delay:%d", a1);
    sub_3AF5C(4, v6, 0, v4);
    if ( !sub_274AC() )
      goto LABEL_3;
  }
  else if ( !sub_274AC() )
  {
    goto LABEL_3;
  }
  sub_274AC();
LABEL_3:
  result = sub_32648();
  v3 = result;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v6, 0x800u, "get min sweep matrix freq min=%d", result);
    result = sub_3AF5C(4, v6, 0, v5);
  }
  if ( flt_AFBFC > 0.0 )
    return sub_23090((unsigned __int8)byte_4B6CCC, dword_AFE5C, v3, a1);
  return result;
}
