char ***__fastcall sub_6E9F8(char ***a1, char *a2)
{
  char *v3; // r5
  char **v4; // r0
  char **v5; // r3
  int v7; // r0

  if ( *((_DWORD *)a2 + 19) == *((_DWORD *)a2 + 18) )
  {
    v3 = "always";
  }
  else
  {
    v3 = a2;
    if ( ((int (__fastcall *)(_DWORD))loc_16D56C)(*((_DWORD *)a2 + 14)) )
    {
      v7 = (int)v3;
      LOWORD(v3) = (unsigned __int16)"yes";
      HIWORD(v3) = (unsigned int)"yes" >> 16;
      if ( !sub_6E898(v7) )
        v3 = "no";
    }
    else
    {
      v3 = "unknown";
    }
  }
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = (char **)sub_9836C(4);
  v5 = v4 + 1;
  *a1 = v4;
  *v4 = v3;
  a1[2] = v5;
  a1[1] = v5;
  return a1;
}
