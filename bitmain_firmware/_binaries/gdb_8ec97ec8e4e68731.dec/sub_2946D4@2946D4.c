int __fastcall sub_2946D4(int result, int a2)
{
  int (*v2)(int); // r2
  const char *v3; // r0

  if ( dword_48BAF0 && dword_48BAEC )
  {
    if ( a2 )
    {
      LOWORD(v2) = (unsigned __int16)sub_293B80;
      if ( result )
      {
LABEL_5:
        v3 = (const char *)dword_48BAF0;
        HIWORD(v2) = (unsigned int)sub_293B80 >> 16;
        return tputs(v3, 1, v2);
      }
LABEL_9:
      v3 = (const char *)dword_48BAEC;
      HIWORD(v2) = (unsigned int)sub_293B80 >> 16;
      return tputs(v3, 1, v2);
    }
    if ( dword_46DEEC != result )
    {
      LOWORD(v2) = 15232;
      if ( result )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  return result;
}
