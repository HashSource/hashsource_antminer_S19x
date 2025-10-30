int sub_3FA64()
{
  int result; // r0
  int v1; // r3
  int v2; // r0
  int v3; // r3
  int v4; // r3
  int v5; // r3

  result = sub_471A0();
  if ( dword_AFE58 )
  {
    switch ( dword_4B6CB0 )
    {
      case 0:
      case 1:
        return result;
      case 3:
        goto LABEL_9;
      case 21:
        goto LABEL_13;
      default:
        v5 = (unsigned __int8)byte_AFE64 ^ 1;
        byte_AFE64 ^= 1u;
        if ( v5 )
          goto LABEL_13;
        v2 = sub_570CC(result);
        return sub_57144(v2);
    }
  }
  if ( !result )
  {
LABEL_13:
    v2 = sub_570AC(result);
    return sub_57144(v2);
  }
  if ( result != 1 )
  {
LABEL_9:
    v2 = sub_570CC(result);
    v4 = (unsigned __int8)byte_AFE64 ^ 1;
    byte_AFE64 ^= 1u;
    if ( v4 )
      return sub_57124(v2);
    return sub_57144(v2);
  }
  v1 = (unsigned __int8)byte_AFE64 ^ 1;
  byte_AFE64 ^= 1u;
  if ( v1 )
    v2 = sub_570AC(1);
  else
    v2 = sub_570CC(1);
  v3 = (unsigned __int8)byte_AFE64 ^ 1;
  byte_AFE64 ^= 1u;
  if ( !v3 )
    return sub_57144(v2);
  return sub_57124(v2);
}
