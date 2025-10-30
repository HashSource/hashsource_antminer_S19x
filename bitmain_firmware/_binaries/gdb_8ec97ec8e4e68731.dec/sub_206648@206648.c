int *__fastcall sub_206648(int *result)
{
  int v1; // r3
  int v2; // r1
  char *v3; // r2
  bool v4; // zf

  v1 = result[3];
  if ( v1 )
  {
    v2 = *(char *)result;
    if ( v2 == 4 )
    {
      v3 = "union ";
    }
    else if ( v2 == 5 )
    {
      v3 = "enum ";
    }
    else
    {
      result = (int *)"";
      v3 = "struct ";
      if ( v2 != 3 )
        v3 = "";
    }
  }
  else
  {
    v1 = result[2];
    v3 = (char *)51128;
    v4 = v1 == 0;
    if ( v1 )
      HIWORD(v3) = 59;
    else
      v1 = 2328;
    if ( v4 )
    {
      HIWORD(v3) = 59;
      HIWORD(v1) = 58;
    }
  }
  if ( dword_47AC88 > 0 )
    return sub_F43B4(&off_46D334, "struct/union type gets multiply defined: %s%s", v3, (const char *)v1);
  return result;
}
