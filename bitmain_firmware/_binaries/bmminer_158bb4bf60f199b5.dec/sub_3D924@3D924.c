int __fastcall sub_3D924(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( !*(_BYTE *)(result + 13) )
  {
    if ( !a2 )
      return result;
    goto LABEL_3;
  }
  result = sub_3C770((unsigned int *)result, (char *)&word_7A848);
  *(_BYTE *)(v2 + 13) = 0;
  if ( a2 )
  {
LABEL_3:
    sub_3C770((unsigned int *)v2, ",\"id\":1}");
    return sub_3C770((unsigned int *)v2, (char *)&word_7A848);
  }
  return result;
}
