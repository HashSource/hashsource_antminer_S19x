int __fastcall sub_16D98(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( !*(_BYTE *)(result + 13) )
  {
    if ( !a2 )
      return result;
    goto LABEL_3;
  }
  result = sub_15B00((unsigned int *)result, (char *)&word_5616C);
  *(_BYTE *)(v2 + 13) = 0;
  if ( a2 )
  {
LABEL_3:
    sub_15B00((unsigned int *)v2, ",\"id\":1}");
    return sub_15B00((unsigned int *)v2, (char *)&word_5616C);
  }
  return result;
}
