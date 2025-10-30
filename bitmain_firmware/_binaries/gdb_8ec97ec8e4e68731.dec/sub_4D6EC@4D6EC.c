int *__fastcall sub_4D6EC(int a1)
{
  int *result; // r0
  int v3; // r3

  result = (int *)dword_47473C;
  if ( dword_47473C )
  {
    while ( a1 != result[1] )
    {
      result = (int *)*result;
      if ( !result )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = (int *)sub_93094(1, 0x108u);
    v3 = dword_47473C;
    result[1] = a1;
    dword_47473C = (int)result;
    *result = v3;
  }
  return result;
}
