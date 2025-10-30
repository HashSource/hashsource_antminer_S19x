int sub_416B4()
{
  int result; // r0
  int v1; // r0
  int v2; // r3
  int v3; // r3
  int v4; // r3

  result = sub_490C4();
  if ( dword_B32C0 )
  {
    switch ( dword_533B3C )
    {
      case 0:
      case 1:
        return result;
      case 3:
        goto LABEL_4;
      case 21:
        goto LABEL_8;
      default:
        v4 = (unsigned __int8)byte_B32CC ^ 1;
        byte_B32CC ^= 1u;
        if ( v4 )
          goto LABEL_8;
        v1 = sub_55B10(result);
        return sub_55B70(v1);
    }
  }
  if ( !result )
  {
LABEL_8:
    v1 = sub_55AF0(result);
    return sub_55B70(v1);
  }
  if ( result == 1 && (v3 = (unsigned __int8)byte_B32CC ^ 1, byte_B32CC ^= 1u, v3) )
    v1 = sub_55AF0(1);
  else
LABEL_4:
    v1 = sub_55B10(result);
  v2 = (unsigned __int8)byte_B32CC ^ 1;
  byte_B32CC ^= 1u;
  if ( !v2 )
    return sub_55B70(v1);
  return sub_55B50(v1);
}
