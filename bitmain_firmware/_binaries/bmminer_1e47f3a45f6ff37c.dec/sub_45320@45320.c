int __fastcall sub_45320(int a1)
{
  int result; // r0
  unsigned int v3; // r5
  int v4; // r3
  int v5; // r3
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v6, 0x800u, "inc freq delay:%d", a1);
    sub_3B6AC(4, v6, 0, v4);
    if ( !sub_27A28() )
      goto LABEL_3;
  }
  else if ( !sub_27A28() )
  {
    goto LABEL_3;
  }
  sub_27A28();
LABEL_3:
  result = sub_32CB0();
  v3 = result;
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v6, 0x800u, "get min sweep matrix freq min=%d", result);
    result = sub_3B6AC(4, v6, 0, v5);
  }
  if ( flt_B3064 > 0.0 )
    return sub_2357C((unsigned __int8)byte_534B58, dword_B32C4, v3, a1);
  return result;
}
