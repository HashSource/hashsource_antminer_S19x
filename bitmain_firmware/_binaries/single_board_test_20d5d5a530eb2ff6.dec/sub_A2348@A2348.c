_DWORD *__fastcall sub_A2348(_DWORD *result, _DWORD *a2, char *s1)
{
  int v4; // r5
  _DWORD *v5; // r6

  v4 = (unsigned __int8)*s1;
  v5 = result;
  if ( v4 == 82 )
  {
    if ( s1[1] == 83 && s1[2] == 65 && !s1[3] )
    {
      *result = 6;
      return result;
    }
    result = (_DWORD *)strcmp(s1, "RSA-PSS");
    if ( result )
      goto LABEL_6;
    goto LABEL_10;
  }
  result = (_DWORD *)strcmp(s1, "RSA-PSS");
  if ( !result )
    goto LABEL_10;
  if ( v4 == 80 )
  {
    if ( s1[1] != 83 || s1[2] != 83 || s1[3] )
      goto LABEL_6;
LABEL_10:
    *v5 = 912;
    return result;
  }
  if ( v4 == 68 && s1[1] == 83 && s1[2] == 65 && !s1[3] )
  {
    *v5 = 116;
    return result;
  }
LABEL_6:
  result = (_DWORD *)strcmp(s1, "ECDSA");
  if ( result )
  {
    result = (_DWORD *)sub_EAFD0(s1);
    *a2 = result;
    if ( !result )
    {
      result = (_DWORD *)sub_EAF68(s1);
      *a2 = result;
    }
  }
  else
  {
    *v5 = 408;
  }
  return result;
}
