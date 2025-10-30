char *__fastcall sub_18C28(int a1, int a2, char *a3)
{
  int v4; // r6
  char *result; // r0

  if ( *(_WORD *)a2 == 2 )
  {
    v4 = any_interface;
    if ( *(_WORD *)(a2 + 4) == 32639 )
    {
      result = (char *)loopback_interface;
      goto LABEL_12;
    }
  }
  else
  {
    v4 = any6_interface;
  }
  if ( (*(_BYTE *)(a1 + 72) & 0x36) != 0 )
  {
    result = (char *)sub_1898C((const struct sockaddr *)a2);
LABEL_12:
    if ( result != (char *)v4 )
      goto LABEL_13;
    goto LABEL_15;
  }
  if ( a3 && a3 != (char *)v4 )
  {
    result = a3;
    goto LABEL_7;
  }
LABEL_15:
  result = sub_178F8((const struct sockaddr *)a2);
LABEL_13:
  if ( !result )
    return 0;
LABEL_7:
  if ( (*((_DWORD *)result + 36) & 0x80) != 0 )
    return 0;
  return result;
}
